#include<iostream>
#include <math.h>
#include <ctime>

int main() {
	/*
	int annee1;
	int annee2;
	
	std::cout<<"Entrez une annee"<<std::endl;
	std::cin>>annee1;
	std::cout<<"Entrez une deuxieme annee"<<std::endl;
	std::cin>>annee2;
	std::cout<<"Il y a "<<annee1 - annee2<<" annees de difference"<<std::endl;
	
	return 0;
	
	
	int val1;
	int val2;
	int val3;
	int temp;
	
	std::cout<<"Entrez une valeur"<<std::endl;
	std::cin>>val1;
	std::cout<<"Entrez une autre valeur"<<std::endl;
	std::cin>>val2;
	std::cout<<"Entrez ENCORE une valeur"<<std::endl;
	std::cin>>val3;
	
	temp = val1;
	val1 = val2;
	val2 = val3;
	val1 = temp;
	
	std::cout<<"Val1 : "<<val1<<"\nVal2 : "<<val2<<"\nVal3 : "<<val3<<std::endl;
	
	
	int number;
	int millier;
	int centaine;
	int dizaine;
	int unite;
	
	std::cout<<"Entrez une valeur a 4 chiffres"<<std::endl;
	std::cin>>number;
	
	millier = number / 1000;
	centaine = (number - (millier * 1000))/100;
	dizaine = (number - ((millier * 1000) + (centaine * 100)))/10;
	unite = number - ((millier * 1000) + (centaine * 100) + (dizaine * 10));
	
	std::cout<<"Milliers : "<<millier<<"\nCentaines : "<<centaine<<"\nDizaines : "<<dizaine<<"\nUnites : "<<unite<<std::endl;
	
	
	float number;
	
	std::cout<<"Entrez une valeur de x"<<std::endl;
	std::cin>>number;
	
	std::cout<<"Resultat : "<<((5*number)+7)/(((2.0/3.0)*number)-2)<<std::endl;

	
	
	float note1;
	float note2;
	float note3;
	
	float coeff1;
	float coeff2;
	float coeff3;
	
	std::cout<<"Entrez la note 1"<<std::endl;
	std::cin>>note1;
	std::cout<<"Entrez le coeff 1"<<std::endl;
	std::cin>>coeff1;

	std::cout<<"Entrez la note 2"<<std::endl;
	std::cin>>note2;
	std::cout<<"Entrez le coeff 2"<<std::endl;
	std::cin>>coeff2;
	
	std::cout<<"Entrez la note 3"<<std::endl;
	std::cin>>note3;
	std::cout<<"Entrez le coeff 3"<<std::endl;
	std::cin>>coeff3;
	
	std::cout<<"Moyenne : "<<((note1 * coeff1)+(note2 * coeff2)+(note3 * coeff3))/(coeff1 + coeff2 + coeff3)<<std::endl;
	
	
	float a;
	float b;
	float c;
	float delta;
	
	std::cout<<"Entrez a"<<std::endl;
	std::cin>>a;
	
	std::cout<<"Entrez b"<<std::endl;
	std::cin>>b;
	
	std::cout<<"Entrez c"<<std::endl;
	std::cin>>c;
	
	delta = (pow(b, 2))-4*a*c;
	
	std::cout<<"test : "<<delta<<std::endl;
	
	if(delta > 0) {
		std::cout<<"Resultats :\n"<<((-b)-sqrt(delta))/(2*a)<<"\nou\n"<<((-b)+sqrt(delta))/(2*a)<<std::endl;
		return 0;
	}
	
	if(delta == 0) {
		std::cout<<"Resultat : "<<(-b)/2*a<<std::endl;
		return 0;
	}
	
	std::cout<<"Il n'existe pas de solution réelle"<<std::endl;
	return 0;
	
	
	int annee;
	
	std::cout<<"Entrez une annee"<<std::endl;
	std::cin>>annee;
	
	if(annee % 400 == 0) {
		std::cout<<annee<<" est bissextile"<<std::endl;
		return 0;
	}
	
	if(annee % 4 == 0 && annee % 100 != 0) {
		std::cout<<annee<<" est bissextile"<<std::endl;
		return 0;
	}
	
	std::cout<<annee<<" n'est pas bissextile"<<std::endl;
	return 0;
	
	
	float number1;
	float number2;
	char operateur;
	float resultat;
	
	std::cout<<"Entrez un nombre"<<std::endl;
	std::cin>>number1;
	
	std::cout<<"Entrez un autre nombre"<<std::endl;
	std::cin>>number2;
	
	std::cout<<"Entrez un operateur (+,-,x,/)"<<std::endl;
	std::cin>>operateur;

	std::cout<<"Quel est le resultat ?"<<std::endl;
	if(operateur == '+'){
		std::cin>>resultat;
		if(resultat == number1 + number2) {
			std::cout<<"C'est un oui !"<<std::endl;
			return 0;
		}
	}
	if(operateur == '-'){
		std::cin>>resultat;
		if(resultat == number1 - number2) {
			std::cout<<"C'est un oui !"<<std::endl;
			return 0;
		}
	}
	if(operateur == 'x'){
		std::cin>>resultat;
		if(resultat == number1 * number2) {
			std::cout<<"C'est un oui !"<<std::endl;
			return 0;
		}
	}
	if(operateur == '/'){
		std::cin>>resultat;
		if(resultat == number1 / number2) {
			std::cout<<"C'est un oui !"<<std::endl;
			return 0;
		}
	}
	std::cout<<"non"<<std::endl;
	return 0;
	
	
	int jour;
	int mois;
	int annee;
	
	std::cout<<"Entrez une annee"<<std::endl;
	std::cin>>annee;
	
	std::cout<<"Entrez un mois"<<std::endl;
	std::cin>>mois;
	
	std::cout<<"Entrez un jour"<<std::endl;
	std::cin>>jour;
	
	if (mois > 12 || mois <= 0) {
		std::cout<<"Mois invalide"<<std::endl;
		return 0;
	}
	
	if(jour <= 0) {
		std::cout<<"Jour invalide"<<std::endl;
		return 0;
	}
	
	if(
		mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12
	) {
		if(jour > 31) {
			std::cout<<"Jour invalide"<<std::endl;
			return 0;
		}
	}
	
	if(
		mois == 4 || mois == 6 || mois == 9 || mois == 11
	) {
		if(jour > 30) {
			std::cout<<"Jour invalide"<<std::endl;
			return 0;
		}
	}
	
	if(mois == 2 && jour > 29) {
		std::cout<<"Jour invalide ici"<<std::endl;
		return 0;
	}
	
	if(!((annee % 400 == 0) || (annee % 4 == 0 && annee % 100 != 0)) && mois == 2 && jour > 28 ) {
		std::cout<<"Jour invalide ici"<<std::endl;
		return 0;
	} 
	
	std::cout<<"valide"<<std::endl;
	
	*/
	
	// int annee;
	// int mois;
	// int jour;
	
	// int annee2;
	// int mois2;
	// int jour2;
	
	// std::cout<<"Entrez une annee"<<std::endl;
	// std::cin>>annee;
	
	// std::cout<<"Entrez un mois"<<std::endl;
	// std::cin>>mois;
	
	// std::cout<<"Entrez un jour"<<std::endl;
	// std::cin>>jour;
	
	// std::cout<<"Entrez une deuxieme annee"<<std::endl;
	// std::cin>>annee;
	
	// std::cout<<"Entrez un deuxieme mois"<<std::endl;
	// std::cin>>mois;
	
	// std::cout<<"Entrez un deuxieme jour"<<std::endl;
	// std::cin>>jour;
	
	// struct tm datetime = {};
	// time_t timestamp;

	// datetime.tm_year = annee - 1900;
	// datetime.tm_mon = mois - 1;
	// datetime.tm_mday = jour;
	// datetime.tm_hour = 0;
	// datetime.tm_min = 0;
	// datetime.tm_sec = 0;
	// datetime.tm_isdst = -1;

	// timestamp = mktime(&datetime);
	
	// std::cout<<"Timestamp :"<<timestamp<<std::endl;

	
}