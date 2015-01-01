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

int silnia(int n)
{
    if(n==0) return 1;
    else return n*silnia(n-1);
}

int main()
{
    int liczba_uzytkownika;
    cout << endl << " Podaj liczbe Fibonacciego: ";
    cin >> liczba_uzytkownika;

    for(;;)
    {
        if(ciag_fibonacciego(liczba_uzytkownika)==liczba_uzytkownika)
        {
            cout << "\n Silnia podanej liczby wynosi: " << silnia(liczba_uzytkownika) << endl;
            break;
        }
        else
        {
            cout << "\n Nie dziala!"
                << "\n\n Podaj ja jeszcze raz: ";
                cin >> liczba_uzytkownika;
        }
    }
    return 0;
}
