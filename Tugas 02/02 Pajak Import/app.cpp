#include <iostream>
using namespace std;

int main() {
	
	int kelas;
	int harga;
	int total;
	float pajakMakanan = 0.1;
	float pajakPakaian = 0.15;
	float pajakMesin = 0.175;
	float pajakBarangMewah = 0.4;
	
	cout << "Masukkan Kelas Barang : ";
	cin >> kelas;
	
	cout << "Masukkan Harga Barang : ";
	cin >> harga;
	
	if(kelas == 1){
		total = harga * pajakMakanan;
		cout << "total Pajak nya : " << total;
	} else if(kelas == 2){
		total = harga * pajakPakaian;
		cout << "total Pajak nya : " << total;
	} else if(kelas == 3){
		total = harga * pajakMesin;
		cout << "total Pajak nya : " << total;
	} else if(kelas == 4){
		total = harga * pajakBarangMewah;
		cout << "total Pajak nya : " << total;
	} else {
		cout << "Barang dan harga tidak tersedia";
	}
	
	
	return 0;
}
