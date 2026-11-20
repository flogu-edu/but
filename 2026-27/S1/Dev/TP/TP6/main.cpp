#include <iostream>

struct maillon {
    int value;
    maillon *next;
    maillon *prev;
};

struct list {
    maillon *head;
    maillon *tail;
};

void ajoutTete(list *list, int value) {
    maillon *newMaillon = new maillon;
    newMaillon->value = value;
    
    if(list->head == nullptr) {
        newMaillon->next = nullptr;
        list->tail = newMaillon;
    } else {
        newMaillon->next = list->head; 
        list->head->prev = newMaillon;
    }
    newMaillon->prev = nullptr;
    
    list->head = newMaillon;
}

void ajoutQueue(list *list, int value) {
    maillon *newMaillon = new maillon;
    newMaillon->value = value;

    if(list->head == nullptr) {
        newMaillon->prev = nullptr;
        list->head = newMaillon;
    } else {
        newMaillon->prev = list->tail;
        list->tail->next = newMaillon;
    }
    newMaillon->next = nullptr;

    list->tail = newMaillon;
}

void displayList(list *list) {
    maillon *currentMaillon = list->head;
    while(currentMaillon != nullptr) {
        std::cout<<"Current : " <<currentMaillon<<std::endl;
        std::cout<<"Prev : " <<currentMaillon->prev<<std::endl;
        std::cout<<"Next : " <<currentMaillon->next<<std::endl;
        std::cout<<"Value : "<<currentMaillon->value<<std::endl;
        currentMaillon = currentMaillon->next;
        std::cout<<"------------------------"<<std::endl;
    }
}

void insertion(list *list, int value, int position) {
    if(position == 0) {
        ajoutTete(list, value);
        return;
    }
    maillon *currentMaillon = list->head;
    int i = 0;

    while(currentMaillon != nullptr && i < position - 1) {
        currentMaillon = currentMaillon->next;
        i++;
    }

    if(currentMaillon == nullptr || currentMaillon->next == nullptr) {
        ajoutQueue(list, value);
        return;
    }

    maillon *newMaillon = new maillon;
    newMaillon->value = value;

    newMaillon->prev = currentMaillon;
    newMaillon->next = currentMaillon->next;
    
    currentMaillon->next->prev = newMaillon;
    currentMaillon->next = newMaillon;
}

void supprimeTete(list *list) {
    maillon *currentMaillon = list->head;

    list->head = currentMaillon->next;
    currentMaillon->next->prev = nullptr;
    delete currentMaillon;
    return;
}

void supprimeQueue(list *list) {
    maillon *currentMaillon = list->tail;

    list->tail = currentMaillon->prev;
    currentMaillon->prev->next = nullptr;
    delete currentMaillon;
    return;
}

bool supprime(list *list, int value) {
    maillon *currentMaillon = list->head;

    while(currentMaillon != nullptr) {
        if(currentMaillon->value == value) {
            if(currentMaillon->next == nullptr) {
                supprimeQueue(list);
                return true;
            }

            if(currentMaillon->prev == nullptr) {
                supprimeTete(list);
                return true;
            }

            currentMaillon->next->prev = currentMaillon->prev;
            currentMaillon->prev->next = currentMaillon->next;

            delete currentMaillon;
            return true;
        } 
        currentMaillon = currentMaillon->next;
    }
    return false;
}

bool supprimeSimple(list * list, int value) {
    maillon * currentMaillon = list->head;
    maillon * prevMaillon = nullptr;

    while(currentMaillon != nullptr) {
        if(currentMaillon->value == value) {
            if(currentMaillon->next == nullptr) {
                supprimeQueue(list);
            }

            if(prevMaillon == nullptr) {
                supprimeTete(list);
            }

            prevMaillon->next = currentMaillon->next;
            delete currentMaillon;

            return true;
        }

        prevMaillon = currentMaillon;
        currentMaillon = currentMaillon->next;

    }

    return false;
}

bool rechercheValeur(list *list, int value) {
    maillon *currentMaillon = list->head;

    while(currentMaillon != nullptr) {
        if(currentMaillon->value == value) {
            return true;
        }
        currentMaillon = currentMaillon->next;
    }
    return false;
}

void trie() {

}

maillon* positionP(list *list, int value) {
    maillon *currentMaillon = list->head;

    while(currentMaillon != nullptr) {
        if(currentMaillon->value == value) {
            return currentMaillon;
        }
        currentMaillon = currentMaillon->next;
    }
    return nullptr;
}

maillon* positionF(list *list, int value) {
    maillon *currentMaillon = list->tail;

    while(currentMaillon != nullptr) {
        if(currentMaillon->value == value) {
            return currentMaillon;
        }
        currentMaillon = currentMaillon->prev;
    }
    return nullptr;
}

void addresses(list *list) {
    maillon *currentMaillon = list->head;

    while(currentMaillon != nullptr) {
        std::cout<<"Prev adress : "<<currentMaillon->prev<<std::endl;
        std::cout<<"Current adress : "<<currentMaillon<<std::endl;
        std::cout<<"Current value : "<<currentMaillon->value<<std::endl;
        std::cout<<"Next adress : "<<currentMaillon->next<<std::endl;

        std::cout<<"-----------------"<<std::endl;
        currentMaillon = currentMaillon->next;
    }
}

int main() {
    list testList = { nullptr, nullptr };

    ajoutQueue(&testList, 5);
    ajoutQueue(&testList, 7);
    ajoutTete(&testList, 15);
    ajoutQueue(&testList, 5);

    insertion(&testList, 30, 5);

    supprime(&testList, 50);
    
    addresses(&testList);

    std::cout<<rechercheValeur(&testList, 67)<<std::endl;
    std::cout<<positionP(&testList, 5)<<std::endl;
    std::cout<<positionF(&testList, 5)<<std::endl;
}