#include <iostream>
using namespace std;

int main(){
		
		// while(warunek-zakoneczenia(true))
		short a = 2;
		while(a <= 30){ //czy wykonac to...?
		   cout << a << ", ";
		   a += 2;
		}

	short liczba;
	do{
		cout << "podaj liczbe: ";
		cin >> liczba;
	}while(liczba != 5);  //czy powtorzyc to?
}