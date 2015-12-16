# include <iostream.h>


main()
{
const size=200;   //Ilosc liter w zdaniu - dlugosc zdania

char string[size];
cout<<"Wpisz zadanie max "<<size<<" literowe :";//wpisz max rozmiar
cin>>string;

for (int i=0,ilosc=0;i<size;i++)
	  {
		  if (string[i]==' '){ilosc++;};

	  };      //tu nowy
cout<<"Wyrazow w zdaniu jest "<<ilosc;
}







