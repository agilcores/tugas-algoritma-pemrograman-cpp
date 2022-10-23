#include <iostream>
using namespace std;

int main(){
	
	int nomorStudio;
	int jumlahKarcis;
	int hargaKarcis;
	int jumlahPembayaran;
	
	cout << "Masukkan Nomor Studio : ";
	cin >> nomorStudio;
	cout << "Masukkan Jumlah Karcis : ";
	cin >> jumlahKarcis;
	
	switch(nomorStudio){
		case 1:
			jumlahPembayaran = 5000 * jumlahKarcis;
			cout << "Judul Film : Titanic \n";
			cout << "Total Pembayaran : Rp. " << jumlahPembayaran;
		break;
		
		case 2:
			jumlahPembayaran = 4000 * jumlahKarcis;
			cout << "Judul Film : The Mummy \n";
			cout << "Total Pembayaran : Rp. " << jumlahPembayaran;
		break;
		
		case 3:
			jumlahPembayaran = 6000 * jumlahKarcis;
			cout << "Judul Film : Terminator 2 \n";
			cout << "Total Pembayaran : Rp. " << jumlahPembayaran;
		break;
		
		default : 
			cout << "Kode Film Yang Kau Cari Tidak Ada!.";
}
	return 0;
}
