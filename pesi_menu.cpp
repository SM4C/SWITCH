//1.Oggetti più pesanti di un valore
//2.Peso medio degli oggetti
//3.Ordine alfabetico
//4.Peso massimo e peso minimo

#include <iostream>
using namespace std;
int main ()
{
	int n;
	bool swap;
	yes:cout<<"quanti sono gli oggetti"<<endl;
	cin>>n;
	int pesi[n], ch, value, sum, med, appp, maxp=0, minp=999999;
	string name[n], appn, maxn, minn, rewchoice;
	for (int i=0; i<=n-1; i++)
	{
		cout<<"inserisci il nome dell'oggetto"<<endl;
		cin>>name[i];
		cout<<"inserisci il peso relativo all'oggetto"<<endl;
		cin>>pesi[i];
		sum=sum+pesi[i];
		if (pesi[i]>maxp)
		{
			maxp=pesi[i];
			maxn=name[i];
		}
		else if (pesi[i]<minp)
		{
			minp=pesi[i];
			minn=name[i];
		}
	}
	do 
	{
		no:cout<<endl;
		cout<<"1 - Oggetti più pesanti di un valore"<<endl;
		cout<<"2 - Peso medio degli oggetti"<<endl;
		cout<<"3 - Ordine alfabetico"<<endl;
		cout<<"4 - Peso massimo e peso minimo"<<endl;
		cout<<"5 - REWRITE"<<endl;
		cout<<"6 - EXIT"<<endl;
		cin>>ch;
		switch (ch)
		{
			case 1:
				cout<<"inserisci il valore di controllo"<<endl;
				cin>>value;
				for (int i=0; i<=n-1; i++)
				{
					if (pesi[i]>value)
					{
						cout<<"NAME: "<<name[i]<<endl;
						cout<<"PESO: "<<pesi[i]<<endl;
					}
				}
				break;
			case 2:
				med=sum/n;
				cout<<"PESO MEDIO: "<<med<<"kg"<<endl;
				break;
			case 3:
				do 
				{
					swap=false;
					for (int i=0; i<=n-1; i++)
					{
						if (name[i]>name[i+1])
						{
							appp=pesi[i];
							pesi[i]=pesi[i+1];
							pesi[i+1]=appp;
							appn=name[i];
							name[i]=name[i+1];
							name[i+1]=appn;
							swap=true;
						}
					}
				} 
				while (swap);
				for (int i=0; i<=n-1; i++)
				{
					cout<<"NAME: "<<name[i]<<"PESO: "<<pesi[i]<<"kg"<<endl;
				}
				break;
			case 4:
				cout<<"il peso massimo registrato è di: "<<maxp<<"kg "<<"di "<<maxn<<endl;
				cout<<"il peso minimo registrato è di: "<<minp<<"kg "<<"di "<<minn<<endl;
				break;
			case 5:
				cout<<"Desideri riscrivere i dati di input? (S/N)"<<endl;
				cin>>rewchoice;
				if (rewchoice=="s"||rewchoice=="S")
				{
					goto yes;
				}
				else
				{
					goto no;
				}
				break;
			case 6:
				cout<<"chiusura programma"<<endl;
				break;
			default:
				cout<<"ERROR - INVALID INPUR"<<endl;
				break;
		}
	} 
	while (ch!=6);
	system ("pause");
	return 0;
}
