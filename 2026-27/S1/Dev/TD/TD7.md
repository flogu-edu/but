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
        coordonnees coordonnees
        int pv
        int pm
        std::string status
    }

    struct coordonnees {
        int x
        int y
    }

    struct sort {
        std::string nom
        int pm
        int degat
        std::string status
    }

    int main() {
        sort sort1
        sort1.nom = "Phalusom Gigantum"
        sort1.pm = 50
        sort1.degat = -10
        sort1.status = "A un enorme phalus"

        sort sort2
        sort2.nom = "
    }