//Riempire due vettori paralleli con i nomi e i pesi di N (<=50) oggetti. 
//Costruire un programma che, attraverso un men˘, risponda ai seguenti quesiti 

//1.	Visualizzare i nomi degli oggetti che hanno un peso maggiore di un valore fornito da tastiera in ordine decrescente di peso, con a fianco il nome dellíoggetto
//2.	Calcolare e visualizzare il peso medio degli oggetti
//3.	Visualizzare i nomi degli oggetti in ordine alfabetico con a fianco il peso corrispondente
//4.	Visualizzare il nome dellíoggetto pi˘ pesante e di quello pi˘ leggero
#include <iostream>
using namespace std;
int main()
{
	int n;
	SCELTA:cout<<"Inserisci N oggetti: ";
	cin>>n;
	string nomi[n], appn, nmax, nmin;
	int pesi[n], app, val, sc, tot, avg, max=INT_MIN, min=INT_MAX;
	bool scambio;
	if(n<=50){
		for(int i=0;i<n;i++){
			cout<<"Inserisci nome oggetto: ";
			cin>>nomi[i];
			cout<<"Inserisci peso oggetto: ";
			cin>>pesi[i];
			tot=tot+pesi[i];
		}
		do{
			cout<<endl;
			cout<<"1: Peso e nome degli oggetti in ordine decrescente con valore di confronto"<<endl;
			cout<<"2: Visualizza il peso medio degli oggetti"<<endl;
			cout<<"3: Visualizza i nomi degli oggetti in ordine alfabetico con a fianco il peso"<<endl;
			cout<<"4: Visualizza il nome dell'oggetto piu pesante e quello piu leggero"<<endl;
			cout<<"5: Fine!"<<endl;
			cout<<endl;
			cout<<"Inserisci una scelta: ";
			cin>>sc;
			switch(sc){
				case 1:
					do{
						scambio=false;
						for(int i=0;i<n-1;i++){
							if(pesi[i]<pesi[i+1]){
								app=pesi[i];
								pesi[i]=pesi[i+1];
								pesi[i+1]=app;
								appn=nomi[i];
								nomi[i]=nomi[i+1];
								nomi[i+1]=appn;
								scambio=true;
							}
						}
					}while(scambio);
					cout<<endl;
					cout<<"Inserisci un valore di confronto: ";
					cin>>val;
					cout<<endl;
					cout<<"Classifica: "<<endl;
					for(int i=0;i<n;i++){
						if(pesi[i]>val){
							cout<<endl;
							cout<<"Nome: "<<nomi[i]<<" "<<"Peso: "<<pesi[i]<<endl;
						}
					}
					break;
					case 2:
						avg=tot/n;
						cout<<endl;
						cout<<"Media: "<<avg<<endl;
						break;
						case 3:
							do{
								scambio=false;
								for(int i=0;i<n-1;i++){
									if(nomi[i]>nomi[i+1]){
										appn=nomi[i];
										nomi[i]=nomi[i+1];
										nomi[i+1]=appn;
										app=pesi[i];
										pesi[i]=pesi[i+1];
										pesi[i+1]=app;
										scambio=true;
									}
								}
							}while(scambio);
							cout<<endl;
							cout<<"Ordine alfabetico: "<<endl;
							for(int i=0;i<n;i++){
								cout<<endl;
								cout<<"Nome: "<<nomi[i]<<" "<<"Peso: "<<pesi[i]<<endl;
							}
							break;
							case 4:
							for(int i=0;i<n;i++){
								if(pesi[i]>max){
									max=pesi[i];
									nmax=nomi[i];
								}
								if(pesi[i]<min){
									min=pesi[i];
									nmin=nomi[i];
								}
							}
							cout<<endl;
							cout<<"Peso maggiore: "<<endl;
							cout<<"Nome: "<<nmax<<endl;
							cout<<"Peso: "<<max<<endl;
							cout<<endl;
							cout<<"Peso minore: "<<endl;
							cout<<"Nome: "<<nmin<<endl;
							cout<<"Peso: "<<min<<endl;
							break;	
							case 5:
								cout<<endl;
								cout<<"Arrivederci! ";
			}		
		}while(sc!=5);
	}
	else{
		cout<<"Hai inserito piu di 50 oggetti! ";
		cout<<endl;
		goto SCELTA;
		
	}
}
