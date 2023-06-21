#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "masukan nama file : ";
	cin >> NamaFile;

	ofstream outfile;
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "--";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
	outfile.close();

	ifstream infile;
	infile.open(NamaFile + ".txt", ios::out);

	cout << endl << ">= Membuka dan Membaca file " << endl;
	if (infile.is_open())
	{
		while (getline(infile, baris))
		{
			cout << baris << '\n';
		}
		infile.close();
	}
	else cout << "unable to open file";
	return 0;
}