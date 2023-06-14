#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Penerbit {
public:
	string namaPenerbit;
	Penerbit(string pnama) {
		namaPenerbit = pnama;
	}
	void tambahPengarang(string nama) {
		pengarang.push_back(nama);
	}
	vector <string> pengarang;
};

class Pengarang {
public:
	string namaPengarang;
	Pengarang(string pnama) {
		namaPengarang = pnama;
	}
	vector <string> Penerbit;
	vector <string> Buku;
};

class Buku {
public:
	string judul;
	Buku(string pnama) {
		judul = pnama;
	}
};

int main() {

	//daftar pengarang
	Pengarang joko("Joko");						
	Pengarang lia("Lia");
	Pengarang giga("Giga");
	Pengarang asroni("Asroni");

	//daftar penerbit
	Penerbit GamaPress("Gama Press");			
	Penerbit IntanPariwara("Intan Pariwara");

	GamaPress.pengarang = { joko.namaPengarang, lia.namaPengarang, giga.namaPengarang };
	IntanPariwara.pengarang = { asroni.namaPengarang, giga.namaPengarang };

	giga.Penerbit = { "Gama Press", "Intan Pariwira" };
	joko.Buku = { "Fisika", "Algoritma" };
	lia.Buku = { "Basisdata" };
	giga.Buku = { "Matematika", "Multimedia 1" };
	asroni.Buku = { "Dasar pemograman" };


	cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;			//daftar pengarang pd penerbit GamaPress
	for (const string& nama : GamaPress.pengarang) {
		cout << nama << endl;
	}

	cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;		//daftar pengarang pd penerbit Intan Pariwara
	for (const string& nama : IntanPariwara.pengarang) {
		cout << nama << endl;
	}

	cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;					//daftar penerbit yg diikuti giga
	for (const string& nama : giga.Penerbit) {
		cout << nama << endl;
	}

	cout << "Daftar buku yang dikarang \"Joko\":" << endl;						//daftar buku yg dikarang joko
	for (const string& buku : joko.Buku) {
		cout << buku << endl;
	}

	cout << "Daftar buku yang dikarang \"Lia\":" << endl;						//daftar buku yg dikarang lia
	for (const string& buku : lia.Buku) {
		cout << buku << endl;
	}

	cout << "Daftar buku yang dikarang \"Asroni\":" << endl;					//daftar buku yg dikarang asroni
	for (const string& buku : asroni.Buku) {
		cout << buku << endl;
	}

	cout << "Daftar buku yang dikarang \"Giga\":" << endl;						//daftar buku yg dikarang giga
	for (const string& buku : giga.Buku) {
		cout << buku << endl;
	}
	return 0;
}