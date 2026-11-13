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
    
    if(list->head == NULL) {
        newMaillon->next = NULL;
        list->tail = newMaillon;
    } else {
        newMaillon->next = list->head; 
        list->head->prev = newMaillon;
    }
    newMaillon->prev = NULL;
    
    list->head = newMaillon;
}

void ajoutQueue(list *list, int value) {
    maillon *newMaillon = new maillon;
    newMaillon->value = value;

    if(list->head == NULL) {
        newMaillon->prev = NULL;
        list->head = newMaillon;
    } else {
        newMaillon->prev = list->tail;
        list->tail->next = newMaillon;
    }
    newMaillon->next = NULL;

    list->tail = newMaillon;
}

void displayList(list *list) {
    maillon *currentMaillon = list->head;
    while(currentMaillon) {
        std::cout<<currentMaillon->value<<std::endl;
        std::cout<<"Current : " <<currentMaillon<<std::endl;
        std::cout<<"Prev : " <<currentMaillon->prev<<std::endl;
        std::cout<<"Next : " <<currentMaillon->next<<std::endl;
        currentMaillon = currentMaillon->next;
    }
    std::cout<<"End"<<std::endl;
}

void insertion(list *list, int value, int position) {
    maillon *currentMaillon = list->head;

    for(int i = 0; i < position && currentMaillon; i++) {
        if(i == position) {
            if(currentMaillon) {
                maillon *newMaillon = new maillon;
                newMaillon->value = value;

                currentMaillon->next->next->prev = newMaillon;
                currentMaillon->next = newMaillon;

                newMaillon->next = currentMaillon->next->next;
                newMaillon->prev = currentMaillon;
            } else {
                ajoutQueue(list, value);
            }
        }
        currentMaillon = currentMaillon->next;
    }
}

int main() {
    list testList;
    testList.head = NULL;
    testList.tail = NULL;

    ajoutQueue(&testList, 5);
    ajoutQueue(&testList, 7);
    ajoutTete(&testList, 15);

    insertion(&testList, 30, 2);

    displayList(&testList);
}