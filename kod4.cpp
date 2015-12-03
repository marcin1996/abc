# include <iostream.h>
# include <string.h>


main()
{
const size=20;   // dlugosc imienia

char string[size];
cout<<"Wpisz swoje imie max "<<size<<" literowe   : ";
cin>>string;
cout<<endl;
cout<<"Twoja Plec to : ";
switch (string[strlen(string)-1])
 {
  case 'a': cout<<"Kobieta !!";break;
  default : cout<<"Mezczyzna !!";
 }
}

