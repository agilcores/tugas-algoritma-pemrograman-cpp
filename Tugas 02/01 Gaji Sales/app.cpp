#include <iostream>
using namespace std;

int main() {
	
int barang;
int uangJasa;
float uangKomisi;
float total;

cout << "Masukkan penjualan barang : ";
cin >> barang;

if(barang <= 200000){
	uangJasa = 10000;
	uangKomisi = 0.1;
	total = uangJasa / uangKomisi;
	cout << "Total Harian Kamu " << total;
} else if(barang <= 500000){
	uangJasa = 20000;
	uangKomisi = 0.15;
	total = uangJasa / uangKomisi;
	cout << "Total Harian Kamu " << total;
} else if(barang > 500000) {
	uangJasa = 50000;
	uangKomisi = 0.2;
	total = uangJasa / uangKomisi;
	cout << "Total Harian Kamu " << total;
}

return 0;
}


