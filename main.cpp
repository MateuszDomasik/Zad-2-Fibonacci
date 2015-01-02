/*Zad 2./ SprawdŸ, czy liczba podana przez u¿ytkownika
nale¿y do ci¹gu liczb fibonacciego,
jeœli nale¿y, to podaj silniê tej liczby,
je¿eli nie, to u¿ytkownik podaje kolejn¹ liczbê.*/
#include <iostream>

using namespace std;

int ciag_fibonacciego(int n)
{
    if(n<3) return 1;
    else return ciag_fibonacciego(n-2) + ciag_fibonacciego(n-1);
}

long int silnia(int n)
{
    if(n<2) return 1;
    else return n*silnia(n-1);
}

int main()
{
    int liczba_uzytkownika;
    bool czy_robic=true;

    do
    {
        cout << endl << " Podaj liczbe Fibonacciego z przedzialu 1-7000: ";
        cin >> liczba_uzytkownika;
        for(int i=1; i<=20; i++)
        {
<<<<<<< HEAD
            if(liczba_uzytkownika<i) break;
            if(ciag_fibonacciego(i)==liczba_uzytkownika)
            {
                if(liczba_uzytkownika<=13)
                    cout << silnia(liczba_uzytkownika);
=======
            if(ciag_fibonacciego(i)==liczba_uzytkownika)
            {
>>>>>>> 6e0b6a49ae2945978fae2748256dda68548ae2d8
                czy_robic=false;
                break;
            }
        }
    }
    while(czy_robic==true);

<<<<<<< HEAD
=======
    if(liczba_uzytkownika<=13)
        cout << silnia(liczba_uzytkownika);

>>>>>>> 6e0b6a49ae2945978fae2748256dda68548ae2d8
    return 0;
}
