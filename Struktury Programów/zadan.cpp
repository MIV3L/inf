#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

    // Wprowadzanie danych od użytkownika
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    // Tworzenie wzoru
    for (int i = 0; i < wysokosc; ++i) {
        for (int j = 0; j < szerokosc; ++j) {
            if ((i + j) % 2 == 0) {
                cout << "#";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
