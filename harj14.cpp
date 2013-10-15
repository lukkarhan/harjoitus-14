/*
Teht„v„: Harjoitus 14
Tekij„: Hanna Lukkarinen, IIO13S1
Pvm: 8.10.2013

Kuvaus:
Tee ohjelma, joka kysyy henkil”tietosi seuraavasti:
Anna (kaikki) etunimesi (merkkijono):
Anna kengannumero (kokonaisluku):
Anna sukunimi (merkkijono):
Anna koulumatka (reaaliluku):
Anna osoitteesi:
Anna postinumero:

Ohjelma tulostaa tiedot seuraavasti:
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

K„yt„ C++:n cin- ja cout-olioita ohjelman toteuttamiseen. */

#include <iostream> 
using namespace std; 

int main() 
{ 
	char etunimet[15];
	char sukunimi[15];
	char osoite[30];
	int kengannumero;
	int postinumero;
	float koulumatka;

	cout<<"Anna (kaikki) etunimesi: ";
	cin.get(etunimet, 15);
	cout<<"Anna kengannumerosi: ";
	cin>>kengannumero;
	cout<<"Anna sukunimesi: ";
	cin>>sukunimi;
	cout<<"Anna koulumatkasi pituus: ";
	cin>>koulumatka;
	cin.get();
	cout<<"Anna osoitteesi: ";
	cin.get(osoite, 30);
	cout<<"Anna postinumerosi: ";
	cin>>postinumero;

	cout<<sukunimi<<" "<<etunimet<<endl;
	cout<<osoite<<endl;
	cout<<postinumero<<endl;
	cout<<kengannumero<<" "<<koulumatka<<endl;

	return 0;
}