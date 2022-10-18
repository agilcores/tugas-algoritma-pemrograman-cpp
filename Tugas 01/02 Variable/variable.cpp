#include <iostream>
using namespace std;

int main(){
	
	int nilaiPertama = 7;
	int nilaiKedua = 8;
	int nilaiKetiga;
	
	cout << "Masukkan Nilai Ke Tiga \n";
	cin >> nilaiKetiga;
	int nilaiKeempat = nilaiPertama + nilaiKedua;
	int nilaiKelima = nilaiKetiga + nilaiKeempat;
	int nilaiKeenam = nilaiKedua - nilaiPertama;
	int nilaiKetujuh = nilaiKelima / nilaiKeenam;
	int nilaiKedelapan = nilaiKelima % nilaiKeenam;
	
	cout << "Nilai Pertama : " << nilaiPertama << "\n";
	cout << "Nilai Kedua : " << nilaiKedua << "\n";
	cout << "Nilai Ketiga :" << nilaiKetiga << "\n";
	cout << "Nilai Keempat :" << nilaiKeempat << "\n";
	cout << "Nilai Kelima :" << nilaiKelima << "\n";
	cout << "Nilai Keenam :" << nilaiKeenam << "\n";
	cout << "Nilai Ketujuh :" << nilaiKetujuh << "\n";
	cout << "Nilai Kedelapan :" << nilaiKedelapan << "\n";
	
	if(nilaiKelima < nilaiKeenam){
	cout << "True";
	} else {
	cout << "False";
	}
	
}
