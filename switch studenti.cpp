#include <iostream>
using namespace std;
int main ()
{
    int n;
    bool change;
    cout<<"quanti studenti"<<endl;
    cin>>n;
    string name[n], appn, maxn;
    int mark[n], ch, appm, sum, med, maxm;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"inserisci il nome: "<<endl;
        cin>>name[i];
        cout<<"inserisci il voto: "<<endl;
        cin>>mark[i];
        sum=sum+mark[i];
    }
    do
    {
        cout<<"1 - Ordine alfabetico con nome e voto"<<endl;
        cout<<"2 - Media"<<endl;
        cout<<"3 - Voto massimo con nome e voto"<<endl;
        cout<<"4 -  Fine"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1: 
                do
                    {
                    change=false;
                    for(int i=0; i<=n-2; i++)
                        {
                        if(name[i]>name[i+1])
                            {
                            appm=mark[i];
                            mark[i]=mark[i+1];
                            mark[i+1]=appm;
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
                    cout<<"NAME: "<<name[i]<<endl;
                    cout<<"VOTO: "<<mark[i]<<endl;
                    cout<<endl;
                }
                break;
            case 2:
                med=sum/n;
                cout<<endl;
                cout<<"MEDIA: "<<med<<endl;
                cout<<endl;
                break;
            case 3:
                for (int i=0; i<=n-1; i++)
                {
                    if (mark[i]>maxm)
                    {
                        maxm=mark[i];
                        maxn=name[i];
                    }
                }
                cout<<endl;
                cout<<"NAME: "<<maxn<<endl;
                cout<<"VOTO: "<<maxm<<endl;
                cout<<endl;
                break;
            case 4:
                cout<<"arrivederci"<<endl;
                break;
            default: 
                cout<<"opzione non valida"<<endl;
                cout<<endl;
                break;
        }
    } while (ch!=4);
    system ("pause");
    return 0;
}
