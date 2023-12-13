#include <iostream>
using namespace std;

int main() {
    int dywan;

    // pobranie wymiarow dywanu od uzytkownika
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    // pobieranie z gory wysokosci i szerokosci 
    for (int i = 0; i < wysokosc; ++i) {
        for (int j = 0; j < szerokosc; ++j) {
            if ((i + j) % 2 == 0) {
                // tutaj wypisujemy # oraz * na dane dlugosci
                cout << "#";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
