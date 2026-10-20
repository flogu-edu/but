#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

void init1(int & taille) {
    taille = 0;
}

void init2(int xCases, int & taille) {
    taille = xCases;
}

void init3(int xCases, int value, int & taille, int tab[]) {
    for(int i = 0; i < xCases; i++) {
        tab[i] = value;
    }
    taille = xCases;
}

void pushBack(int tab[], int & taille, int value) {
    tab[taille] = value;
    taille++;
}

void popBack(int tab[], int & taille) {
    taille--;
}

void ex1() {
    int taille = 0;
    const int tailleTotale = 1000;
    int tab[tailleTotale];

    init1(taille);
    init3(50, 5, taille, tab);
}

std::string toCesar(std::string message, int decalage) {
    std::string messageCesar = "";
    for(unsigned int i = 0; i < message.length(); i++) {
        messageCesar.push_back((((message[i] - 97) + decalage) % 26) + 97);
    }
    return messageCesar;
}

std::string toAlphabet(std::string messageCesar, int decalage) {
    std::string message = "";
    for(unsigned int i = 0; i < messageCesar.length(); i++) {
        message.push_back((((messageCesar[i] - 97) + (26 - decalage)) % 26) + 97);
    }
    return message;
}

void ex2() {
    std::cout<<toCesar("azerty", 3)<<std::endl;
    std::cout<<toAlphabet("dchuwb", 3)<<std::endl;
}

std::string inverse(std::string caracteres) {
    std::string inverse = "";
    for(int i = caracteres.length() - 1; i >= 0; i--) {
        inverse.push_back(caracteres[i]);
    }
    return inverse;
}

std::string enleveEspace(std::string caracteres) {
    std::string sansEspace = "";
    for(unsigned int i = 0; i < caracteres.length(); i++) {
        if(caracteres[i] != 32) {
            sansEspace.push_back(caracteres[i]);
        }
    }
    return sansEspace;
}

int occurrence(std::string caracteres, char lettre) {
    int count = 0;
    for(unsigned int i = 0; i < caracteres.length(); i++) {
        if(
            (
                caracteres[i] >= 41 &&
                caracteres[i] <= 90 && 
                (
                    caracteres[i] == lettre ||
                    caracteres[i] == lettre + 32
                )
            )
            ||
            (
                caracteres[i] >= 97 &&
                caracteres[i] <= 122 && 
                (
                    caracteres[i] == lettre ||
                    caracteres[i] == lettre - 32
                )
            )
        ) {
            count++;
        }
    }
    return count;
}

std::string remplace(std::string caracteres, char lettreARemplacer, char lettreRemplacante) {
    std::string caracteresSansLaLettre = caracteres;
    for(unsigned int i = 0; i < caracteresSansLaLettre.length(); i++) {
        if(caracteresSansLaLettre[i] == lettreARemplacer) {
            caracteresSansLaLettre[i] = lettreRemplacante;
        }
    }
    return caracteresSansLaLettre; 
}

void ex3() {
    std::cout<<enleveEspace("couco  uuuu")<<std::endl;
    std::cout<<inverse("coucouuuu")<<std::endl;
    std::cout<<occurrence("J'aime la galette", 'e')<<std::endl;
    std::cout<<remplace("J'aime la galette", 'e', 'z')<<std::endl;
}

bool trouve(std::string phrase, std::string recherche) {
    for(unsigned int i = 0; i < phrase.length(); i++) {
        bool trouve = true;
        for(unsigned int j = 0; j < recherche.length(); j++) {
            if(phrase[i+j] != recherche[j]) {
                trouve = false;
            }
        }
        if(trouve) {
            return true;
        }
    }
    return false;
}

void ex5() {
    std::cout<<trouve("Les montagnes Gandalf !", "Gandalf")<<std::endl;
}

void countOccurrence(int tab[127], std::string phrase) {
    for(unsigned int i = 0; i < phrase.length(); i++) {
        tab[int(phrase[i])]++;
    }
}

void displayOccurrence(int tab[127]) {
    for(unsigned int i = 0; i < 127; i++) {
        if(tab[i] != 0) {
            std::cout<<char(i)<<" : "<<tab[i]<<std::endl;
        }
    }
}

void ex6() {
    int tab[127] = {0};
    countOccurrence(tab, "J'aime les hommes");
    displayOccurrence(tab);
}

std::string getRandomWord(std::string dico[], int size) {
    int randomNumber = rand() % (size);
    return dico[randomNumber];
}

void initBingo(std::string bingo[], int bingoSize, std::string dico[], int dicoSize) {
    for(int i = 0; i < bingoSize * bingoSize; i++) {
            bingo[i] = getRandomWord(dico, dicoSize);
    }
}

std::string getUserInput() {
    std::string input;
    std::cout<<"Entrez un mot : ";
    std::cin>>input;
    return input;
}

bool checkSuccess(bool successGrid[], int bingoSize) {
    for(int i = 0; i < bingoSize; i++) {
        bool success = true;

        for(int j = 0; j < bingoSize; j++) {
            if(successGrid[j * bingoSize + i] == false) {
                success = false;
                break;
            }
        }

        if(success) {
            return true;
        }
    }

    for(int j = 0; j < bingoSize; j++) {
        bool success = true;

        for(int i = 0; i < bingoSize; i++) {
            if(successGrid[j * bingoSize + i] == false) {
                success = false;
                break;
            }
        }

        if(success) {
            return true;
        }
    }

    return false;
}

void displayBingo(std::string bingo[], int bingoSize, bool successGrid[]) {
    system("cls");
    for(int i = 0; i < bingoSize; i++) {
        for(int j = 0; j < bingoSize; j++) {
            if(successGrid[j+(i*bingoSize)]) {
                std::cout<<bingo[j+(i*bingoSize)];
            }
            if(j != bingoSize - 1) {
                std::cout<<" | ";
            }
        }
        std::cout<<"\n";
    }
}

void bingoLoop(std::string bingo[], int bingoSize, bool successGrid[]) {
    while(!checkSuccess(successGrid, bingoSize)) {
        displayBingo(bingo, bingoSize, successGrid);
        std::string userInput = getUserInput();
        for(int i = 0; i < bingoSize * bingoSize; i++) {
            if(bingo[i] == userInput) {
                successGrid[i] = true;
            }
        }
    }
    displayBingo(bingo, bingoSize, successGrid);
    std::cout<<"Bravo";
}

void ex7() {
    srand(time(nullptr));
    const int bingoSize = 3;
    std::string bingo[bingoSize * bingoSize];
    bool successGrid[bingoSize *bingoSize] = {false};
    const int dicoSize = 10;
    std::string dico[dicoSize] = {
        "Isaac",
        "Banane",
        "Julien_Dore",
        "Souris",
        "Ordinateur",
        "desoxyribonucleique",
        "clavier",
        "pointeur",
        "tableau",
        "dictionnaire"
    };
    initBingo(bingo, bingoSize, dico, dicoSize);
    bingoLoop(bingo, bingoSize, successGrid);
}

void pushUserInput(std::vector<float> temps, std::vector<std::string> months) {
    std::string month;
    float temp;
    std::cout<<"Entrez un mois : ";
    std::cin>>month;
    std::cout<<"\n"<<"Entrez la temperature : ";
    std::cin>>temp;

    months.push_back(month);
    temps.push_back(temp);
}

void isHottest(std::vector<float> temps, std::vector<std::string> months) {
    std::cout<<"Is hottest months : "<<std::endl;
    for(unsigned int i = 0; i < temps.size(); i++) {
        bool hottest = true;
        for(unsigned int j = 0; j < temps.size(); j++) {
            if(months[j] == months[i]) {
                if(temps[i] < temps[j]) {
                    hottest = false;
                }
            }
        }
        std::cout<<months[i]<<" : "<<hottest<<std::endl;
    }
}


void ex8() {
    std::vector<float> temps = {25,28};
    std::vector<std::string> months = {"mai", "mai"};

    // pushUserInput(temps, months);
    // pushUserInput(temps, months);

    isHottest(temps, months);
}

int main() {
    ex8();
}