Guillet Florentin

# Ex 1
## 1
OS : Linux
Distro : Ubuntu 

## 2
Thu Jun  5 18:30:46 UTC 2025

## 3
64 bits

## 4
Elle affiche le nom de la machine sur le reseau, soit INFO-NEV2-22-16. gethostname permet de faire la meme chose

## 5
Vitesse d'horloge du processeur : 3096.010 MHz
Taille de la RAM : 8015048 kB

## 6
fg960360

## 7
cal affiche le mois en cours
cal 10 2022 affiche le 10eme mois de 2022
Je suis né un vendredi

## 8
echo « Hello world » et echo Hello world fait la meme chose, mais il est recommandé de mettre le texte entre guillements pour éviter les erreurs

# Ex2
## 1
### a
affiche tous les fichiers et répertoires, comme ls
### b
affiche tous les fichiers et répertoires deux fois, séparés par "_"
### c
permet d'afficher tous les fichiers dont le nom commence par a ou par b
### d
permet d'afficher tous les fichiers dont le nom ne commence pas par a ou par b
### e
permet d'afficher tous les fichiers et répertoires commançant par "c"
### f
permet d'afficher tous les fichiers et répertoires avec le meme nombre de charactères dans leur nom que le nombre de "?"

## 2
    fg960360@INFO-NEV2-22-16:~$  echo *
    Annee2 annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon mkdir
    fg960360@INFO-NEV2-22-16:~$ echo * _ *
    Annee2 annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon mkdir _ Annee2 annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon mkdir
    fg960360@INFO-NEV2-22-16:~$  echo [ab]*
    annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon
    fg960360@INFO-NEV2-22-16:~$ echo [!ab]*
    Annee2 mkdir
    fg960360@INFO-NEV2-22-16:~$ echo c*
    c*
    fg960360@INFO-NEV2-22-16:~$ echo ??????
    Annee2 annee1 annee4 bonbon

## 3
### a
    echo *5
### b
    echo annee4*
### c
    echo annee4 annee4?
### d
    echo annee[!0-9]
### e
    echo *ana*
### f
    echo [aA]*cd
### g
    echo *[41]? 

## 4
    echo /*/*/[Ww]*.h

# Ex3
## 1
### a
    s | wc -l
### b
    ls -d | wc -l
### c
    ls | wc -l
## 2
### a
    fg960360@INFO-NEV2-22-16:~$ grep -c "bash" /etc/passwd
    2
### b
    fg960360@INFO-NEV2-22-16:~$ grep "bash" /etc/passwd
    root:x:0:0:root:/root:/bin/bash
    fg960360:x:1000:1000::/home/fg960360:/bin/bash
### c
    grep -E '[eh].*bash' /etc/passwd

# Ex4
    fg960360@INFO-C103-23-04:~/rep$ find . ! -type f ! -type d
    ./lien_fich2
    ./lien_fich1
    fg960360@INFO-C103-23-04:~/rep$

# Ex5

    fg960360@INFO-C103-23-04:~/rep$ ls /etc/X11 | grep 'x'
    rgb.txt
    xkb
    xorg.conf.d
    fg960360@INFO-C103-23-04:~/rep$ ls /etc/X11 | grep '^x'
    xkb
    xorg.conf.d
    fg960360@INFO-C103-23-04:~/rep$ ls /etc/X11 | grep '[xX]'
    Xreset
    Xreset.d
    Xresources
    Xsession
    Xsession.d
    Xsession.options
    rgb.txt
    xkb
    xorg.conf.d
    fg960360@INFO-C103-23-04:~/rep$ ls | grep '^[xX].*[0-9]'
    fg960360@INFO-C103-23-04:~/rep$ ls | grep '^[xX].*[0-9]$'

# Ex 6
    fg960360@INFO-C103-23-04:~/rep$ ls -l /etc/p* | sort -k1
    -rw-r--r-- 1 root root   92 May  7  2025 chpasswd
    -rw-r--r-- 1 root root   92 May  7  2025 newusers
    -rw-r--r-- 1 root root   92 May  7  2025 passwd
    -rw-r--r-- 1 root root   96 Apr 20 10:46 01-locale-fix.sh
    -rw-r--r-- 1 root root  137 May 27  2025 su-l
    -rw-r--r-- 1 root root  138 May 27  2025 runuser-l
    -rw-r--r-- 1 root root  143 May 27  2025 runuser
    -rw-r--r-- 1 root root  315 Jan 14  2026 sudo-i
    -rw-r--r-- 1 root root  330 Jan 14  2026 sudo
    -rw-r--r-- 1 root root  384 May  7  2025 chfn
    -rw-r--r-- 1 root root  520 Jul  3  2025 other
    -rw-r--r-- 1 root root  552 Jul  3  2025 /etc/pam.conf
    -rw-r--r-- 1 root root  581 May  7  2025 chsh
    -rw-r--r-- 1 root root  606 Nov  5  2025 cron
    -rw-r--r-- 1 root root  641 Apr 20 10:46 /etc/profile
    -rw-r--r-- 1 root root  747 Dec 18  2025 bash_completion.sh
    -rw-r--r-- 1 root root  757 Jul 21 00:37 gawk.sh
    -rw-r--r-- 1 root root  840 Jul  7 10:06 apps-bin-path.sh
    -rw-r--r-- 1 root root 1107 Jul 21 00:37 gawk.csh
    -rw-r--r-- 1 root root 1208 Aug 27 16:12 common-account
    -rw-r--r-- 1 root root 1242 Aug 27 16:12 common-auth
    -rw-r--r-- 1 root root 1337 Aug 27 16:13 /etc/passwd-
    -rw-r--r-- 1 root root 1384 Oct  5 10:12 /etc/passwd
    -rw-r--r-- 1 root root 1427 Aug 27 16:12 common-session
    -rw-r--r-- 1 root root 1435 Aug 27 16:12 common-session-noninteractive
    -rw-r--r-- 1 root root 155 Apr  8 06:02 sitecustomize.py
    -rw-r--r-- 1 root root 1557 Jun 22 20:48 Z97-byobu.sh
    -rw-r--r-- 1 root root 1620 Aug 27 16:12 common-password
    -rw-r--r-- 1 root root 2259 May 27  2025 su
    -rw-r--r-- 1 root root 3144 Oct 18  2022 /etc/protocols
    -rw-r--r-- 1 root root 3655 Feb 16  2026 remote
    -rw-r--r-- 1 root root 3974 Mar 13  2026 login
    -rw-r--r-- 1 root root 94 Aug 27 16:11 debian_config
    -rwxr-xr-x 1 root root  841 Jul 23 18:34 Z99-cloudinit-warnings.sh
    -rwxr-xr-x 1 root root  898 Nov 28  2023 update-motd.sh
    -rwxr-xr-x 1 root root 3396 Jul 23 18:34 Z99-cloud-locale-test.sh
    /etc/pam.d:
    /etc/perl:
    /etc/pm:
    /etc/polkit-1:
    /etc/ppp:
    /etc/profile.d:
    /etc/python3.14:
    /etc/python3:
    drwxr-x--- 2 root polkitd 4096 Apr 10 12:52 rules.d
    drwxr-xr-x 2 root root 4096 Aug 27 16:11 ip-down.d
    drwxr-xr-x 2 root root 4096 Aug 27 16:11 ip-up.d
    drwxr-xr-x 2 root root 4096 Aug 27 16:13 Net
    drwxr-xr-x 2 root root 4096 Aug 27 16:13 sleep.d
    lrwxrwxrwx 1 root root   52 Jul 27 22:44 70-systemd-shell-extra.sh -> /usr/lib/systemd/profile.d/70-systemd-shell-extra.sh
    lrwxrwxrwx 1 root root   52 Jul 27 22:44 80-systemd-osc-context.sh -> /usr/lib/systemd/profile.d/80-systemd-osc-context.sh
    total 36
    total 4
    total 4
    total 4
    total 4
    total 4
    total 8
    total 80
    fg960360@INFO-C103-23-04:~/rep$ cat > resultat.txt << EOF
    Nom Résultat
    -----------------------------------------
    Tom 15
    Steve 12
    Pierre 11
    Marc 13
    Etienne 12
    Grégory 14
    EOF
    fg960360@INFO-C103-23-04:~/rep$ tail -n +3 resultat.txt
    Tom 15
    Steve 12
    Pierre 11
    Marc 13
    Etienne 12
    Grégory 14
    fg960360@INFO-C103-23-04:~/rep$ tail -n +3 resultat.txt | sort
    Etienne 12
    Grégory 14
    Marc 13
    Pierre 11
    Steve 12
    Tom 15
    fg960360@INFO-C103-23-04:~/rep$ tail -n +3 resultat.txt | sort -k2n
    Pierre 11
    Etienne 12
    Steve 12
    Marc 13
    Grégory 14
    Tom 15
    fg960360@INFO-C103-23-04:~/rep$ tail -n +3 resultat.txt | sort -k2nr
    Tom 15
    Grégory 14
    Marc 13
    Etienne 12
    Steve 12
    Pierre 11
    fg960360@INFO-C103-23-04:~/rep$