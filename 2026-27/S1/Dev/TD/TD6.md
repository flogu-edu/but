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
    void transformToNonPointeur(int *relationPointeur[], int nbPersonnage, bool relation[][nbPersonnage]) {
        for(int i = 0; i < nbPersonnage; i++) {
            for(int j = 0; j < nbPersonnage; j++) {
                relation[i][j] = false;
            }
        }

        for(int i = 0; i < nbPersonnage) {
            for(int j = 0; j < sizePtr(relationPointeur[i]); j++) {
                relation[i][relationPointeur[i][j]] = true;
            }
        }
    }

## 7
    void displayRelationsPtr(int *relationPointeur[], int nbPersonnage) {
        for(int i = 0; i < nbPersonnage; i++) {
            std::cout<<"Relation du personnage "<<i<<" : "<<std::endl;
            for(int j = 0; j < sizePtr(relationPointeur[i]); j++) {
                std::cout<<j<<std::endl;
            } 
        }
    }

    void displayRelation(bool relation[][nbPersonnage], int nbPersonnage) {
        for(int i = 0; i < nbPersonnage; i++) {
            std::cout<<"Relation du personnage<<i<<" : "<<std::endl;
            for(int j = 0; j < nbPersonnage; j++) {
                if(relation[i][j]) {
                    std::cout<<j<<std::endl;
                }
            }
        }
    }

## 8 
    bool isRelation(bool relation[][nbPersonnage], int nbPersonnage, int perso1, int perso2) {
        for(int i = 0; i < nbPersonnage; i++) {
            if(relation[perso1][i] == perso2) {
                return true;        
            }
        }
        return false;
    }

    bool isRelationPtr(int *relationPointeur[], int perso1, int perso2) {
        for(int i = 0; i < size(relationPointeur[perso1]), i++) {
            if(relationPointeur[perso1][i] == perso2) {
                return true;
            }
        }
        return false;
    }

## 9
Je recommande le tableau dans un tableau si il y a peu de personnages avec beaucoup de relations, et le tableau de pointeur si il y a beaucoup de personnages avec peu de relations.

# Ex 4
