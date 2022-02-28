#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define PIANO 3
#define POSTO 5
#define FILA 3

using namespace std;

struct autom
{
    char targa[8];
    string modello;
    bool control;
};
autom parc[PIANO][POSTO][FILA];

void settaParcheggio()
{
    int i,j,k;
    for(i=0;i<PIANO;i++)
    {
        for(j=0;j<POSTO;j++)
        {
            for(k=0;k<FILA;k++)
            {
                parc[i][j][k].control=false;
            }
        }
    }
}
void stampaParcheggio()
{
    int i,j,k,c;
    for(i=0;i<PIANO;i++)
    {
        cout<<"*** Piano "<<i<<" ***"<<endl;
        for(k=0;k<FILA;k++)
        {
            cout<<"\tFila "<<k+1<<endl;
            for(j=0;j<POSTO;j++)
            {
                cout<<"\t\t- Posto "<<j+1<<": ";
                if(parc[i][k][j].control)
                {
                    cout<<parc[i][k][j].modello<<" | ";
                    for(c=0;c<8;c++)
                    {
                        cout<<parc[i][k][j].targa[c];
                    }
                }
                cout<<endl;
            }
        }
    }
}
void parcheggiAuto()
{
    int piano,posizione,fila;
    cout<<"Inserisci il piano [0-2]:";
    cin>>piano;
    cout<<"Inserisci la Fila [1-3]:";
    cin>>fila;
    cout<<"Inserisci posizione [1-5]:";
    cin>>posizione;
    cout<<"Inserisci la targa:";
    cin>>parc[piano][fila-1][posizione-1].targa;
    cout<<"Inserisci il modello:";
    cin>>parc[piano][fila-1][posizione-1].modello;
    cout<<"Entrata"<<endl;
    parc[piano][fila-1][posizione-1].control=true;
}
int numPostiLiberi()
{
    int i,k,j;
    int conta=0;
    for(i=0;i<PIANO;i++)
    {
        for(j=0;j<POSTO;j++)
        {
            for(k=0;k<FILA;k++)
            {
                if(parc[i][k][j].control==false)
                    conta++;
            }
        }
    }
    return conta;
}
int acaso(int da, int a)
{
    return rand()%((a-da)+1)+da;
}

int main()
{
    int postiLiberi,postiTotali,postiOccupati;
    settaParcheggio();
    stampaParcheggio();
    parcheggiAuto();
    stampaParcheggio();
    postiLiberi=numPostiLiberi();
    cout<<"Ci sono "<<postiLiberi<<" posti liberi."<<endl;
    postiTotali=PIANO*POSTO*FILA;
    postiOccupati=postiTotali-postiLiberi;
    cout<<"Ci sono "<<postiOccupati<<" posti occupati."<<endl;
}
















struct prodotto
{
    string nomep;
    int prezzo;
    int quantità;
};
struct conto
{
    prodotto prodotti[];
    int nprodotti;
};
conto ristorante[piano][sala][tavolo]
ristorante[0][1][1].prodotti[].nomep=caffe
