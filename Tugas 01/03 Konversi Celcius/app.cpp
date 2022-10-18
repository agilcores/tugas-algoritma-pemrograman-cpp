#include <iostream>
using namespace std;

int main(){
	float celcius, f, r;
	cout << "Masukkan Suhu Celcius : \n";
	cin >> celcius;
	f = (9.0 /5.0 * celcius) + 32;
	r = (9.0 /5.0 * celcius); 
	cout << "Suhu Celcius : " << celcius << "\n";
	cout << "Suhu Fahrenheit : " << f << "\n";
	cout << "Suhu Reamur : " << r << "\n";
	
	return 0;
}
