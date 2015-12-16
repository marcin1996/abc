#include <iostream>
tatata

RAZDWATRZY

zmiana drugiej linijki 
zmiana trzeciej
 
  main() //poczatek kodu
{
int i,j,k,N,tmp=0;

cout<<"podaj N:";
cin>>N;

int tab[N][N];

randomize;

for(i=0;i<N;i++)
{
                cout<<endl;
                for(j=0;j<N;j++)
                {
                                tab[i][j]=rand()%100;
                                cout<<setw(12)<<tab[i][j];
                               
                }
}
cout<<endl<<endl;
                                       //SORTOWANIE BĄBELKOWE
for(k=0;k<N*N;k++)
{
                  for(i=0;i<N;i++)
                  {
                                  for(j=0;j<N;j++)
                                  {
                                 
                                                  if(j<N-1 && tab[i][j]<tab[i][j+1])
                                                  {
                                                  tmp=tab[i][j];
                                                  tab[i][j]=tab[i][j+1];
                                                  tab[i][j+1]=tmp;
                                                  }
                                  else if(j==N-1 && i!=N-1 && tab[i][j]<tab[i+1][0])
                                                  {
                                                  tmp=tab[i][j];
                                                  tab[i][j]=tab[i+1][0];
                                                  tab[i+1][0]=tmp;
                                                  }
                                  }         
                  }
                 
}
///////////////////////////////KONIEC SORTOWANIA
cout<<endl<<endl;
for(i=0;i<N;i++)  //  WYŚWIETLANIE POSORTOWANEJ TABLICY
{
 cout<<endl;
                for(j=0;j<N;j++)
                {               
                 cout<<setw(12)<<tab[i][j];               
                }
}

    getch();
    return 0;
}
