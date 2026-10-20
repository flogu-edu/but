#include <iostream>
#include <ctime>

void ex1() {
    int x = 0, y = 2;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    int **ptr3 = NULL;
    
    ptr3 = &ptr1;
    
    int z = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = z;
    
    std::cout<<"Adresses : \n"<<"x : "<<&x<<"\ny : "<<&y<<"\nPtr1 : "<<&ptr1<<"\nptr2 : "<<&ptr2<<"\nptr3 : "<<&ptr3<<std::endl;
    std::cout<<"Valeurs : \n"<<"x : "<<x<<"\ny : "<<y<<"\nPtr1 : "<<ptr1<<"\nptr2 : "<<ptr2<<"\nptr3 : "<<ptr3<<std::endl;
}

int fonctionEx2(int *x) {
    if(*x < 0) {
        return 4 * *x + 4 - (-*x);
    } else {
        return 4 * *x + 4 - *x;
    }
}

void ex2() {
    int x = -2;
    std::cout<<fonctionEx2(&x);
}

void findDelta(float *x, float *a, float *b, float *c, float *delta, float *solution, float *tolerance) {
    *delta = (*b * *b) - 4 * *a * *c;
    while(
        !((*solution - *delta) <  *tolerance) ||
        !((*solution - *delta) >  -*tolerance)
    ) {
        std::cout<<"Entrez la solution : ";
        std::cin>>*solution;
        std::cout<<*solution<<std::endl;
    }
    std::cout<<"bravô"<<std::endl;
}

void ex3() {
    float *x = NULL;
    x = new float;
    *x = 0;
    float *a = NULL;
    a = new float;
    *a = 1;
    float *b = NULL;
    b = new float;
    *b = 10;
    float *c = NULL;
    c = new float;
    *c = 2;

    float *delta = NULL;
    delta = new float;

    float *solution = NULL;
    solution = new float;

    float *tolerance = NULL;
    tolerance = new float;
    *tolerance = 0.01;

    findDelta(x, a, b, c, delta, solution, tolerance);

    delete x;
    delete a;
    delete b;
    delete c;
    delete delta;
    delete solution;
    delete tolerance;
}

void initSuiteMots(int & size, std::string & *suiteMots) {
    const int sizeMots = 5;
    std::string mots[sizeMots] = {"pas", "idee", "de", "mots", "originaux"};
    std::cout<<"Entrez la taille du tableau : ";
    std::cin>>size;
    suiteMots = new std::string[size];
    for(int i = 0; i < size; i++) {
        suiteMots[i] = mots[rand() % (sizeMots)];
    }
}

void ex4() {
    srand(time(nullptr));
    int size = 0;
    std::string *suiteMots = NULL;
    initSuiteMots(size, suiteMots);
    
    for(int i = 0; i < size; i++) {
        std::cout<<suiteMots[i]<<std::endl;
    }

    delete suiteMots;
}

int main() {
    ex4();
}