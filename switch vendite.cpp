//Un negozio registra gli importi delle vendite complessive mensili in un vettore di 12 elementi. Registrare in un altro vettore i nomi dei mesi e visualizzare i tre mesi nei quali si sono registrate le vendite più alte in ordine decrescente di importo della vendita. Esempio:

//1° 	Dicembre	1025,00
//2°	Marzo		 650,00
//3°	Ottobre		 630,00

#include <iostream>
using namespace std;
int main ()
{
	bool ch;
	float vend[12], appv;
	string mesi[12], appm;
	mesi[0]="gennaio";
	mesi[1]="febbraio";
	mesi[2]="marzo";
	mesi[3]="aprile";
	mesi[4]="maggio";
	mesi[5]="giugno";
	mesi[6]="luglio";
	mesi[7]="agosto";
	mesi[8]="settembre";
	mesi[9]="ottobre";
	mesi[10]="novembre";
	mesi[11]="dicembre";
	for (int i=0; i<=11; i++)
	{
		cout<<"inserisci l'importo complessivo di "<<mesi[i]<<":"<<endl;
		cin>>vend[i];
	}
	do 
	{
		ch=false;
		for (int i=0; i<=11; i++)
		{
			if (vend[i]<vend[i+1])
			{
				appv=vend[i];
				vend[i]=vend[i+1];
				vend[i+1]=appv;
				appm=mesi[i];
				mesi[i]=mesi[i+1];
				mesi[i+1]=appm;
				ch=true;
			}
		}
	}
	while (ch);
	for (int i=0; i<=3; i++)
	{
		cout<<i+1<<"°:  "<<mesi[i]<<"  -  "<<vend[i]<<"€"<<endl;
	}
	//oppure
//	cout<<"1°:  "<<mesi[0]<<"  -  "<<vend[0]<<"€"<<endl;
//	cout<<"2°:  "<<mesi[1]<<"  -  "<<vend[1]<<"€"<<endl;
//	cout<<"3°:  "<<mesi[2]<<"  -  "<<vend[2]<<"€"<<endl;
	system ("pause");
	return 0;
}
