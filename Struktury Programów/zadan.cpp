#include <iostream>
using namespace std;

int main()

{
	for (int i = 15; i <= 50; ++i) { // petla for bedzie dzialac dopoki zmienna i bedzie mniejsza lub rowna 50 
		if (i % 5 == 0) { // sprawdza czy reszta z dzielenia przez 5 wynosi 0 
			cout << i<< " "; // jesli spelnia warunek to dzielona liczba jest wyswietlana na ekanie
			
		}
	}
	return 0;
}
