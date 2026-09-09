# Ex1
## 3
Non
## 4
### a
cat ne fonctionne pas, car . vise le repertoire courant (et non un fichier)
### b
cd . ne sert à rien car il permet de se situer dans le repertoire courant (dans lequel on est déjà)
### c
pwd affiche le répertoire courant, soit /home/fg960360/rep
### d
rm ne fonctionne pas car .. est le répertoire parent (rm permet de supprimer un fichier)
### e
cd .. permet de se déplacer vers le répertoire parent
### f
pwd affiche le répertoire courant, soit /home/fg960360

## 5
### a
ls -ai affiche les dossiers cachés et le numéro de fichier
ls -ali affiche les dossier de manière détaillée :
total 8
41943 drwxr-xr-x 2 fg960360 fg960360 4096 Sep  8 14:09 .
734 drwxr-x--- 5 fg960360 fg960360 4096 Sep  8 14:09 ..

### b
affiche le dossier rep et son numéro

### c
affiche 734 /home/fg960360

## 6
### b
ls -ali ~/rep affiche les détails du contenu du répertoire ~/rep
ls -ali .. affiche la meme chose, mais avec un chemin relatif
ls -ali ../.. affiche les détails du contenu de répertoire deux fois parent (soit ~)
ls -ali ~ affiche la meme chose mais avec un chemin absolu

## 7
Il n'est pas possible d'aller au repertoire parent du dossier / qui est la racine du systeme (soit le fichier le plus haut)

cd ~ nous déplace vers le repertoire utilisateur (/home/fg960360)

## 9
Il n'est pas possible d'executer la commande car le répertoire n'est pas vide

# Ex2
## 1
### a
affiche le contenu du répertoire /etc
### b
affiche le contenu de chaque répertoire présent dans /etc
### c
affiche le contenu de chaque répertoire présent dans /etc commançant par p (puis n'importe quel charactère)
### d
affiche /etc
## 2
ls /etc/d*
### a
ls -d /etc/d*
### b
ls /etc/d*
### c
ls -dl /etc/de*
### d
ls /etc/deb*

## 3
### a
liste les dossiers présent dans le répertoire /bin
### b
liste tous les dossiers présent dans le répertoire /bin
liste les détails des dossiers présent dans /etc et commançant par p et les dossiers présent dans /bin et commançant par b

# Ex3
## 7
### b
affiche le contenu du fichier vers lequel le lien vise
### c
affiche le contenu modifié du fichier
### d
modifier le contenu du lien a modifié le contenu du fichier d'origine
### e
le lien apparait en rouge
### f
cat lien_fich1 affiche cat: lien_fich1: No such file or directory (le fichier d'origine n'existe plus donc le lien ne vise plus rien)