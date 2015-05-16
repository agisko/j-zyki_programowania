#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////////////////////////////
void zadanie_2_6()
{
   int i, j;
   for(i = 0; i <= 10; i++)
   {
      for(j = 0; j <= 10; j++)
      {
         if(i == 0)
         {
            if(j > 0)
            {
               printf("%d\t", j);
            }
            else
            {
               printf("\t");
            }
         }
         else
         {
            if(j == 0)
            {
               printf("%d\t", i);
            }
            else
            {
               printf("%d\t", i*j);
            }
         }
      }
      printf("\n");
   }
}

////////////////////////////////////////////////////////////////////////////////
void zadanie_2_7()
{
   int i, n = 0;
   double wartosc, suma = 0.0, srednia = 0.0, odwrotnosc = 0.0, kwadraty = 0.0;
   printf("podaj ilosc liczb do wprowadzenia: ");
   scanf("%d", &n);
   for(i = 0; i < n; i++)
   {
      printf("\npodaj liczbe %d  : ", i);
      scanf("%lf", &wartosc);
      suma += wartosc;
      srednia += (wartosc / n);
      odwrotnosc += 1.0 / wartosc;
      kwadraty += wartosc * wartosc;
   }
   printf("\nsuma:\t\t\t%lf\nsrednia:\t\t%lf\nsuma odwrotnosci:\t%lf\nsuma kwadratow:\t\t%lf\n\n", suma, srednia, odwrotnosc, kwadraty);
}

////////////////////////////////////////////////////////////////////////////////
void zadanie_2_8()
{
   int odjemna  = 24;
   int odjemnik = 15;
   int wynik;
   // ~odjemnik -> neguje wszystkie bity w zmiennej "odjemnik"
   // operacje odejmowania mozna zamienic na operacje dodawania
   // odjemnik musi byc zamieniony na wartosc w kodzie uzupelnien do 2
   // czyli odjemnik -> ~odjemnik + 1
   wynik = odjemna + ~odjemnik + 1;
   
   printf("%d\n", wynik);
}

////////////////////////////////////////////////////////////////////////////////
void zadanie_2_9()
{
   
}

int main(int argc, char *argv[])
{
//   zadanie_2_6();
//   zadanie_2_7();
   zadanie_2_8();

   while(!kbhit());
   return 0;  
}
