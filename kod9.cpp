# include <iostream.h>
# include <stdio.h>
# include <math.h>

double modd(double l1, double l2)
{
 double il;
 il=floor(l1/l2);
 return l1-(il*l2);
}

main()
{
int l1,l2;
cout<<"Podaj wartosc liczby 1 : ";
cin>>l1;
cout<<"Podaj wartosc liczby 2 : ";
cin>>l2;

printf("Reszta z dzielenia wynosi %lf\n", modd(l1,l2));
return 0;
}



