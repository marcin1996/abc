#include<iostream.h>
#include<stdlib.h>

main()
{
int l1,l2;
cout<<"Podaj liczbe 1 : ";
cin>>l1;
cout<<"Podaj liczbe 2 : ";
cin>>l2;//dobra zmiana

for (long i=l1,iloczyn=1;i<=l2;i++)
	 {
	 iloczyn*=i;
	 }
cout<<"Suma kwadratow liczb z zakrsu : "<<iloczyn;
}
