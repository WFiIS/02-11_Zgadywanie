#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char proces;

    do {
        string wyraz, zgadywane;
        int wskazowek;

        cout << "Podaj wyraz: ";
        cin >> wyraz;


        if (wyraz.length() <= 5) {
            wskazowek = 3;
        } else {
            wskazowek = 4;
        }
        char tab[wskazowek];
        for (int i = 0; i < wskazowek; i++) {
            tab[i] = wyraz.at(i);
        }

        cout << system("cls");

        cout << "Wyraz ma: " << wyraz.length() << "liter" << endl;
        cout << "Wskazowek: " << wskazowek << endl;

        for (int i = 0; i <= wskazowek; i++) {
            cout << "Zgadnij: ";
            cin >> zgadywane;

            if (wyraz == zgadywane) {
                cout << "Gratulacje zgadles w " << i + 1 << "probach! Brawo!" << endl;
                break;
            } else {
                cout << "Nie zgadles." << endl;
                cout << "Wskazowka: ";
                for (int j = 0; j <= i; j++) {
                    cout << tab[j];
                }
                cout << endl;
            }
        }

        cout << "Czy Czy chcesz zagrac ponownie? (T/t) " << endl;
        cin >> proces;
    } while (proces == 't' || proces == 'T');
    return 0;
}
