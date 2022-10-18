#include <iostream>
using namespace std;

int main(){
	int harga = 5000;
	int panjang;
	int tinggi;
	int karpetPertama;
	int karpetKedua;
	
	cout << "Masukkan Panjang : ";
	cin >> panjang;
	cout << "Masukkan Tinggi : ";
	cin >> tinggi;
	karpetPertama = harga * panjang * tinggi;
	karpetKedua = harga * (panjang - 2) * (tinggi - 2);
	
	cout << "Total Karpet Pertama : " << karpetPertama << "\n";
	cout << "total Karpet Kedua : " << karpetKedua << "\n";
}
