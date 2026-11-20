# Ex1
L'utilisateur dupont peut-il exécuter fich ?
Non, fich n'existe pas, seul Fich existe
L'utilisateur ne peut pas executer le fichier fich

L'utilisateur dupont peut-il lire fichier, peut-il lemodi-
fier?
Il peut le lire et le modifier

Un utilisateur du groupe prof peut-il lire fich 
Oui

Un utilisateur du groupe prof peut-il modifier fich ?
Non

Un utilisateur du groupe prof, a-t-il le droit de détruire desfi-
chiers du répertoire sql ?
Oui

L'utilisateur dupont peut-il modifier texte ?
Oui

L'utilisateur dupont peut-il exécuter long ?
Oui

Décrire et commenter les permissions du répertoire
exoshell ?
Tout le monde peut lire, ecrire et executer le repertoire, il n'est pas du tout protégé. C'est une mauvaise idée pour autre chose que des tests


0 000
1 001
2 010
3 011
4 100
5 101
6 110
7 111

# Ex2
## 1
### 1
chmod 751 ./essai
### 2
chmod 521 ./essai
### 3
chmod 214 ./essai
### 4
chmod 150 ./essai

## 3
umask 027

# Ex3
## 1
umask 022
## 2
umask 111
## 3
Avec umask 127 :
777 - 127 = 650 = 110 101 000 (8)
Propriétaire : rw-
Groupe propriétaire : r-x
Autres : ---
## 4
    fg960360@INFO-NEV2-22-14:~$ chmod u+x ./test/
    fg960360@INFO-NEV2-22-14:~$ chmod g-w ./test/
    fg960360@INFO-NEV2-22-14:~$ chmod g+x ./test/
    fg960360@INFO-NEV2-22-14:~$ chmod o+x ./test/
    fg960360@INFO-NEV2-22-14:~$ chmod o-w ./test/
## 5
    fg960360@INFO-NEV2-22-14:~$ mkdir rep_test
    fg960360@INFO-NEV2-22-14:~$ cd rep_test/
    fg960360@INFO-NEV2-22-14:~/rep_test$ mkdir rep_test1
    fg960360@INFO-NEV2-22-14:~/rep_test$ mkdir rep_test2
    fg960360@INFO-NEV2-22-14:~/rep_test$ touh fich_test
    fg960360@INFO-NEV2-22-14:~/rep_test$ chmod 555 ./fich_test 
    fg960360@INFO-NEV2-22-14:~/rep_test$ ls -la
    total 16
    drwxr-xr-x 4 fg960360 fg960360 4096 Nov  3 10:48 .
    drwxr-x--- 8 fg960360 fg960360 4096 Nov  3 10:48 ..
    -r-xr-xr-x 1 fg960360 fg960360    0 Nov  3 10:48 fich_test
    drwxr-xr-x 2 fg960360 fg960360 4096 Nov  3 10:48 rep_test1
    drwxr-xr-x 2 fg960360 fg960360 4096 Nov  3 10:48 rep_test2
    fg960360@INFO-NEV2-22-14:~/rep_test$ 

## 6
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test1$ touch fich_test
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test1$ cp ./fich_test ../rep_test2/
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test1$ ls
    fich_test
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test1$ cd ../rep_test
    -bash: cd: ../rep_test: No such file or directory
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test1$ cd ../rep_test2/
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test2$ ls
    fich_test
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test2$ ls -la
    total 8
    drwxr-xr-x 2 fg960360 fg960360 4096 Nov  3 10:52 .
    drwxr-xr-x 4 fg960360 fg960360 4096 Nov  3 10:48 ..
    -rw-r--r-- 1 fg960360 fg960360    0 Nov  3 10:52 fich_test
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test2$ cd ../rep_test1/
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test1$ ls -la
    total 8
    drwxr-xr-x 2 fg960360 fg960360 4096 Nov  3 10:51 .
    drwxr-xr-x 4 fg960360 fg960360 4096 Nov  3 10:48 ..
    -rw-r--r-- 1 fg960360 fg960360    0 Nov  3 10:51 fich_test
    fg960360@INFO-NEV2-22-14:~/rep_test/rep_test1$

La copie ne conserve pas les droits des fichiers, elle les recalcule avec l'utilisateur qui l'a copié et le nouveau umask
