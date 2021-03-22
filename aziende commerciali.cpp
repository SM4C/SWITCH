//Un’azienda commerciale vende N articoli nelle sue tre filiali situate in tre diverse città; vuole elaborare una statistica sulle vendite del mese appena trascorso.
//Allo scopo caricare in un vettore di N elementi i prezzi degli articoli e in tre vettori paralleli il numero di pezzi venduti (del corrispondente prodotto) in ciascuna filiale.
//Costruire poi un programma che, attraverso un menù, risponda alle seguenti domande:
//Elencare le filiali in ordine decrescente di ricavo ottenuto nel mese.
//Esempio:
//Filiale 2	12.500,00
//Filiale 1	            7.950,00
//Filiale 3	  5.800,00

//inserito il numero di un articolo (gli articoli si intendono numerati da 0 a n-1) visualizzare in quale filiale se ne è venduto di più.

#include <iostream>
using namespace std;
int main ()
{
	int n;
	bool change;
	cout<<"quanti sono i prodotti venduti: "<<endl;
	cin>>n;
	int f1[n], f2[n], f3[n], k;
	int ch;
	string fil[3], appf;
	float price[n], total1, total2, total3, tot[3], appt, search[3];
	for (int i=0; i<=n-1; i++)
	{
		cout<<"inserisci il prezzo del "<<i<<"° elemento:"<<endl;
		cin>>price[i];
		cout<<"quante unità ha venduto la prima filiale:"<<endl;
		cin>>f1[i];
		cout<<"quante unità ha venduto la seconda filiale"<<endl;
		cin>>f2[i];
		cout<<"quante unità ha venduto la terza filiale"<<endl;
		cin>>f3[i];
		total1=total1+(price[i]*f1[i]);
		total2=total2+(price[i]*f2[i]);
		total3=total3+(price[i]*f3[i]);
	}
	fil[0]="Filiale 1";
	fil[1]="Filiale 2";
	fil[2]="Filiale 3";
	tot[0]=total1;
	tot[1]=total2;
	tot[2]=total3;
	do
	{
		cout<<endl;
		cout<<"1 - Elenco filiali in ordine decrescente di ricavo"<<endl;
		cout<<"2 - Visualizzare quale articolo è stato venduto di più nella filiale"<<endl;
		cout<<"EXIT"<<endl;
		cout<<endl;
		cin>>ch;
		switch (ch) 
		{
			case 1:
				do 
				{
					change=false;
					for (int i=0; i<=n-1; i++)
					{
						if (tot[i]<tot[i+1]) 
						{
							appt=tot[i];
							tot[i]=tot[i+1];
							tot[i+1]=appt;
							appf=fil[i];
							fil[i]=fil[i+1];
							fil[i+1]=appf;
							change=true;
						}
					}
				} 
				while (change);
				for (int i=0; i<=n-1; i++)
				{
					cout<<fil[i]<<"     "<<tot[i]<<endl;
				}
				break;
			case 2:
			cout<<"inserisci il numero di prodotto da controllare:"<<endl;
			cin>>k;
			search[0]=f1[k];
			search[1]=f2[k];
			search[2]=f3[k];
			fil[0]="Filiale 1";
			fil[1]="Filiale 2";
			fil[2]="Filiale 3";
			do 
			{
				change=false;
				for (int i=0; i<=n-1; i++)
				{
					if (search[i]<search[i+1]) 
					{
						appt=search[i];
						search[i]=search[i+1];
						search[i+1]=appt;
						appf=fil[i];
						fil[i]=fil[i+1];
						fil[i+1]=appf;
						change=true;
					}
				}
			} 
			while (change);
			cout<<fil[0]<<"       "<<search[0]<<endl;
				break;
			case 3:
				cout<<"arrivederci"<<endl;
				break;
			default:
				cout<<"errore"<<endl;
				break;
		}
	} 
	while (ch!=3);
	system ("pause");
	return 0;
}
