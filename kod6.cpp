# include <iostream.h>
# include <stdio.h>
# include <math.h>

double tg(double x)
{
double pi=3.14159265358979;
return sin(x*pi/180)/cos(x*pi/180);}
main()
{
cout<<"Podaj kat : ";
double kat;
cin>>kat;
printf("Tangens kata wynosi : %lf\n", tg(kat));
return 0;
}






