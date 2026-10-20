# Ex 2
    void init(int *ptr) {
        *ptr = 0;
    }

# Ex 3
## 1
La deuxième idée utilise un tableau de pointeur qui pointent vers des tableaux contenant toutes les relations d'un personnage.

## 2
~90 000
O(n^2)
## 3
min 300, max 90 000
O(n+m)

## 4
(8 * 4) * (300 * 299) + (300 * 8 * 8) max

## 5
    void transformToPointeur(bool relations[][nbPersonnage], int nbPersonnage, int *relationPointeur[nbPersonnage]) {
        for(int i = 0; i < nbPersonnage; i++) {
            relationPointeur[i] = new int[size(relations[i])];
            int k = 0;
            for(int j = 0; j < nbPersonnage; j++) {
                if(relations[i][j]) {
                    relationPointeur[i][k] = j;
                }
            }
        }
    }

## 6
    void transformToNonPointeur(bool *relationPointeur[], int nbPersonnage, int relation[][nbPersonnage]) {
        for(int i = 0; i < )
    }