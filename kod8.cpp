#include<iostream.h>
#include<math.h>


main()
{
const float pi=3.141592654;
cout<<"Program oblicza pole powierzchni calkowitej stozka"<<endl;
cout<<"Podaj wysokosc stozka : ";
int h;
cin>>h;
cout<<"Podaj promien podstawy stozka : ";
int r;
cin>>r;
float sp,sb;
float l;
l=sqrt(r*r);      // dlugosc tworzacej sozka
sp=pi*r*r;        // pole podstawy stozka
sb=pi*r*l;        // pole powierzchni bocznej stozka
float pole;
pole=sb+sp;
cout<<"Pole powierzchni calkowitej stozka wynosi : "<<pole<<endl;
}









