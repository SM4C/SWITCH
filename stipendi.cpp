//Memorizzare i dati relativi ai nomi e agli stipendi annuali di N dipendenti; realizzare un programma che permetta di:

//visualizzare la posizione dello stipendio massimo:
//visualizzare la media degli stipendi;
//incrementare lo stipendio di tutti del 10%;
//visualizzare l'elenco degli stipendi in ordine decrescente.

#include <iostream>
using namespace std;
int main ()
{
	int n;
	bool change;
	cout<<"quanti sono i dipendenti?"<<endl;
	cin>>n;
	string name[n], appn;
	float stip[n], maxs=0, mid, sum, apps;
	int ch;
	for (int i=0; i<=n-1; i++)
	{
		cout<<"inserisci il nome del dipendete:"<<endl;
		cin>>name[i];
		cout<<"inserisci lo stipendio relativo:"<<endl;
		cin>>stip[i];
	}
	do 
	{
		cout<<endl;
		cout<<"1 - visualizzare la posizione dello stipendio massimo"<<endl;
		cout<<"2 - visualizzare la media degli stipendi"<<endl;
		cout<<"3 - incrementare lo stipendio di tutti del 10%"<<endl;
		cout<<"4 - visualizzare l'elenco degli stipendi in ordine decrescente"<<endl;
		cout<<"5 - EXIT"<<endl;
		cout<<endl;
		cin>>ch;
		switch (ch)
		{
			case 1:
				for (int i=0; i<=n-1; i++)
				{
					if (stip[i]>maxs)
					{
						maxs=stip[i];
					}
				}
				cout<<"POSIZIONE DEL MASSIMO: "<<endl;
				for (int i=0; i<=n-1; i++)
				{
					if (stip[i]==maxs)
					{
						cout<<i+1<<endl;
					}
				}
				break;
			case 2:
				for (int i=0; i<=n-1; i++)
				{
					sum=sum+stip[i];
				}
				mid=sum/n;
				cout<<"MEDIA: "<<mid<<endl;
				break;
			case 3:
				for (int i=0; i<=n-1; i++)
				{
					stip[i]=stip[i]+(stip[i]*10/100);
				}
				break;
			case 4:
				do
				{
					change=false;
					for (int i=0; i<=n-1; i++)
					{
						if (stip[i]<stip[i+1])
						{
							apps=stip[i];
							stip[i]=stip[i+1];
							stip[i+1]=apps;
							appn=name[i];
							name[i]=name[i+1];
							name[i+1]=appn;
							change=true;
						}
					}
				}
				while (change);
				for (int i=0; i<=n-1; i++)
				{
					cout<<"NOME: "<<name[i]<<" STIPENDIO: "<<stip[i]<<endl;
				}
				break;
			case 5:
				cout<<"arrivederci"<<endl;
				break;
			default:
				cout<<"ERRORE"<<endl;
				break;
		}
	}
	while (ch!=5);
	system ("pause");
	return 0;
}
