#include <iostream.h>
#include <conio.h>

int main (void)
{
//dodaj zmiane
const int s=10;  //  <-- Poteg do wypisania    max -> 17



	 int tab[s][s];


	 memset(tab, 0, sizeof(tab));

	 tab[0][0] = 1;
	 for(int i = 1; i < s; i++)
	 {
			 tab[i][0] = 1;
					 for(int j = 1; j < s; j++)
		  {
			  tab[i][j] = tab[i-1][j] + tab[i-1][j-1];
		  }
	 }


	 for(i = 0; i < s; i++)
	 {
		 for(int j = 0; j < s; j++)
		  {
			  if(tab[i][j] != 0)
				  cout << tab[i][j] << " ";
		  }
		  cout << endl;
	 }
	 getch();
}
