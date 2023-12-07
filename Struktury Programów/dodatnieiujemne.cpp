#include <iostream>
using namespace std;

int main(){

short b;
cout << "podaj liczbe: ";
int liczba[ 10 ];
for(int i=0; i <5; i++)
{
    cin >> liczba[ i ];
}cin >> b;

cout << liczba;
cout << endl;


do{
	cout <<  "Liczby parzyste:" << b << endl;
	}while( b % 2);
}


