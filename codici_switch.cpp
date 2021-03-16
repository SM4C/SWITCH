//Un’ azienda manifatturiera produce N prodotti diversi. Memorizzare i codici dei prodotti e la quantità fabbricata di ciascun prodotto in due vettori paralleli.
//Costruire un programma che, attraverso menù, risponda ai seguenti quesiti:
//Elencare i codici dei prodotti la cui quantità è superiore alla media
//Visualizzare il codice del prodotto che è stato realizzato in quantità minore (i codici nel caso ce ne sia più di uno fabbricato in quantità minima).
#include <iostream>
using namespace std;
int main ()
{
	int n, ch;
	cout<<"Inserisci N prodotto: ";
	cin>>n;
	string code[n], codeapp;
	int qt[n], tot=0, avg, minq=INT_MAX; 
	for(int i=0;i<n;i++){
		cout<<"Inserisci codice: ";
		cin>>code[i];
		cout<<"Inserisci quantità: ";
		cin>>qt[i];
		tot=tot+qt[i];
	}
	avg=tot/n; //media
	do
 	{
		cout<<endl;
		cout<<"1 - ELENCARE I CODICI DEI PRODOTTI SUPERIORE ALLA MEDIA"<<endl;
		cout<<"2 - VISUALIZZARE I CODICI DEL PRODOTTO CHE E' STATO REALIZZATO IN QUANTITA MINORE"<<endl;
		cout<<"3 - ESCI"<<endl;
		cout<<"Inserisci una scelta: ";
		cin>>ch;
		cout<<endl;
		switch(ch){
			case 1:
			for(int i=0;i<n;i++){
				if(qt[i]>avg){
					cout<<code[i]<<endl;
				}
			}
			break;
			case 2:
			for (int i=0; i <= n-1; i++)
			{
				if (qt[i]<minq)
				{
					minq=qt[i];
					codeapp=code[i];
				}
			}
			cout<<"CODICE= "<<codeapp<<" QUANTITA'= "<<minq<<endl;
			break;
			case 3:
			cout<<endl;
			cout<<"Fine!"<<endl;
			default:
			cout<<endl;
			cout<<"ERRORE! Fai un'altra scelta!"<<endl;
			break;
		}
	} while(ch!=3);
	system ("pause");
	return 0;
}
