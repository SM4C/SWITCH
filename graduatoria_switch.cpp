// viene organizzato un corso di specializzazione per il personale di una società. avendo ricevuto un elevato numero di iscrizioni ed essendo limitati a 30 i posti disponibili, la società decide di stilare una graduatoria in base al punteggio ottenuto in una prova preliminare.inserisci i nominativi dei partecipanti e i punteggi ottenuti nella prova preliminare.crea poi un programma a meno che consenta le seguenti:
//1. visualizzare la graduatoria (nominativi e punteggi in ordine di punti decrescente)
//2.  visualizzare l'elenco alfabetico degli N partecipanti al corso
//3. visualizzare il punteggio ottenuto da un candidato richiesto da tastiera, la sua posizione in graduatoria e se parteciperà al corso

#include <iostream>
using namespace std;
int main ()
{
	float point[30], appp;
	int ch;
	bool change;
	string name[30], appn, control, control_name;
	for (int i=0; i<=29; i++)
	{
		cout<<"inserisci il NOME del "<<i+1<<"° candidato: "<<endl;
		cin>>name[i];
		cout<<"inserisci i PUNTI del "<<i+1<<"° candidato: "<<endl;
		cin>>point[i];
	}
	do 
	{
		cout<<endl;
		cout<<"1 - VISUALIZZA GRADUATORIA"<<endl;
		cout<<"2 - VISUALIZZA L'ELENCO ALFABETICO"<<endl;
		cout<<"3 - VISUALIZZA IL PUNTEGGIO OTTENUTO"<<endl;
		cout<<"4 - EXIT"<<endl;
		cin>>ch;
		switch (ch)
		{
			case 1:
				do 
				{
					change=false;
					for (int i=0; i<=29; i++) 
					{
						if (point[i]<point[i+1]) 
						{
							appp=point[i];
							point[i]=point[i+1];
							point[i+1]=appp;
							appn=name[i];
							name[i]=name[i+1];
							name[i+1]=appn;
							change=true;
						}
					}
				} 
				while (change);
				for (int i=0; i<=29; i++)
				{
					cout<<i+1<<"° - NAME: "<<name[i]<<" SCORE: "<<point[i]<<endl;
				}
				break;
			case 2:
				do 
				{
					change=false;
					for (int i=0; i<=29; i++) 
					{
						if (name[i]<name[i+1]) 
						{
						appp=point[i];
						point[i]=point[i+1];
						point[i+1]=appp;
						appn=name[i];
						name[i]=name[i+1];
						name[i+1]=appn;
						change=true;
						}
					}
				} 
				while (change);
				for (int i=0; i<=29; i++)
					{
						cout<<"NAME: "<<name[i]<<" SCORE: "<<point[i]<<endl;
					}
				break;
			case 3:
				do 
				{
					change=false;
					for (int i=0; i<=29; i++) 
					{
						if (point[i]<point[i+1]) 
						{
							appp=point[i];
							point[i]=point[i+1];
							point[i+1]=appp;
							appn=name[i];
							name[i]=name[i+1];
							name[i+1]=appn;
							change=true;
						}
					}
				} 
				while (change);
				cout<<"INSERISCI IL NOME DELLA PERSONA DA CONTROLLARE: "<<endl;
				cin>>control;
				for (int i=0; i<=29; i++)
				{
					if (name[i]==control)
					{
						cout<<i+1<<"°  NAME: "<<name[i]<<" SCORE: "<<point[i]<<endl;
					}
				}
				break;
			case 4:
				cout<<"CHIUSURA CONFERMATA"<<endl;
				break;
			default:
				cout<<"ERROR"<<endl;
				break;
		}
	}
	while (ch!=4);
	system ("pause");
	return 0;
}
