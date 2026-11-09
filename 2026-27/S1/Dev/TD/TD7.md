# Ex 1
    struct point {
        int x
        int y
        int z
    }

    float distance(point a, point b) {
        return square_root(
            (b.x - a.x) * (b.x - a.x) +
            (b.y - a.y) * (b.y - a.y) +
            (b.z - a.z) * (b.z - a.z)
            )
    }

    void deplacement(point point, point vecteur) {
        point.x = point.x + vecteur.x
        point.y = point.y + vecteur.y
        point.z = point.z + vecteur.z
    }

    void remplirAleatoire(point tab[], int tabSize) {
        for(int i = 0; i < tabSize; i++) {
            tab[i] = new point 
            tab[i].x = randomInt
            tab[i].y = randomInt
            tab[i].z = randomInt
        }
    }

    float distanceTotale(point tab[], int tabSize) {
        float sum = 0
        for(int i = 0; i < tabSize - 1; i++) {
            sum = sum + distance(tab[i], tab[i+1])
        }
        sum = sum + distance(tab[0] + tab[tabSize])

        return sum
    }

    float distanceManhattan(point a, point b) {
        return 
            square_root((a.x - b.x) * (a.x - b.x)) +  
            square_root((a.y - b.y) * (a.y - b.y)) +  
            square_root((a.z - b.z) * (a.z - b.z))  
    }

    float distanceTotaleManhattan() {
        float sum = 0
        for(int i = 0; i < tabSize - 1; i++) {
            sum = sum + distance(tab[i], tab[i+1])
        }
        sum = sum + distanceManhattan(tab[0] + tab[tabSize])

        return sum
    }

# Ex 2
    struct personnage {
        int pv
        int pm
        status status
        sorts sort[]
    }

    struct sort {
        std::string nom
        int pm
        int degat
        effet status
    }

    struct status {
        int degat
        std::string name
        bool paralyse
    }

    void init() {
        sort sort1
        sort1.nom = "Phalusom Gigantum"
        sort1.pm = 50
        sort1.degat = -10
        sort1.status = "A un enorme phalus"

        sort sort2
        sort2.nom = "Sortum Magicum"
        sort2.pm = 0;
        sort2.degat = 0;
        sort2.status = "Ne sert strictement à rien"

        status tropFort
        tropFort.name = "Trop fort"
        tropFort.degat = 0
        tropFort.paralyse = false 

        status tropFaible
        tropFaible.name = "Trop faible"
        tropFaible.degat = 0
        tropFaible.paralyse = false 

        personnage maxence = { 5, 2, tropFaible , [] }

        personnage moi
        personnage1.pv = 2000000
        personnage1.pm = 1000000
        personnage1.status = tropFort
        personnage1.sorts = { sort1, sort2 }        
    }

    void combat(personnage perso1, personnage perso2) {
        while(perso1.pv > 0 || perso2.pv > 0) {
            Demander au personnage de lancer un sort
        }
    }

    int main() {
        init()
        combat(moi, maxence)
    }

# Ex 4
    struct maillon {
        int valeur
        maillon* suiv
    }

    void ajoutTete(maillon tete, int value) {
        current = new maillon
        current.valeur = value
        current.suiv = &tete
    }

    void ajoutQueue(maillon tete, int value) {
        maillon* current = &tete
        while(current.suiv) {
            current = current->suiv
        }
        suiv = new maillon 
        current->suiv = &suiv
        suiv.valeur = value
        suiv.suiv = NULL
    }

    void insertion(maillon* tete, int value, int position) {
        for(int i = 0; i < position; i++) {
            
        }
    }

    int main() {

    }