#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
    int MHS = 0;
    int DSN = 0;
    int TNDK = 0;

	while(1) {
		cout << "Selamat datang di Institut Teknologi Sepuluh Nopember" << "\n" << "\n";
		cout << "Data statistik:" << "\n";
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << "\n";
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << "\n";
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << "\n";
		cout << "\n";
		cout << "Menu: " << "\n";
		cout << "  1. Tambah Mahasiswa" << "\n";
		cout << "  2. Tambah Dosen" << "\n";
		cout << "  3. Tambah Tenaga Kependidikan" << "\n";
		cout << "  4. Tampilkan semua Mahasiswa" << "\n";
		cout << "  5. Tampilkan semua Dosen" << "\n";
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << "\n";
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                MHS++;
                string id, nama, nrp, departemen;
                int dd, mm, yy, tahunmasuk;
                id = MHS;
                cout << "Masukkan Nama Anda: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir Anda : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir Anda : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir Anda : ";
                cin >> yy;
                cout << "Masukkan NRP (Nomor Registrasi Pokok) Anda : ";
                cin >> nrp;
                cout << "Masukkan Departemen Asal Anda : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "Masukkan Tahun Masuk Anda : ";
                cin >> tahunmasuk;
                mahasiswa inputMhs = mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
                recMhs.push_back(inputMhs);
            }
				break;
			case 2: {
				DSN++;
                string id, nama, npp, departemen,pendidikan;
                int dd, mm, yy;
                id = DSN;
                cout << "Masukkan Nama Anda : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir Anda : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir Anda : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir Anda : ";
                cin >> yy;
                cout << "Masukkan NPP (Nomor Pokok Pegawai) Anda : ";
                cin >> npp;
                cout << "Masukkan Departemen Anda : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "Masukkan Pendidikan Akhir Anda : ";
                cin.ignore();
                getline(cin, pendidikan);
                dosen inputDosen = dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
                recDosen.push_back(inputDosen);
			}
				break;
			case 3:{
				TNDK++;
                string id, nama, npp, unitkerja;
                int dd, mm, yy;
                id = TNDK;
                cout << "Masukkan Nama Anda : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir Anda : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir Anda : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir Anda : ";
                cin >> yy;
                cout << "Masukkan NPP (Nomor Pokok Pegawai) Anda : ";
                cin >> npp;
                cout << "Masukkan Unit Kerja anda : ";
                cin.ignore();
                getline(cin, unitkerja);
                tendik inputTendik = tendik(id, nama, dd, mm, yy, npp, unitkerja);
                recTendik.push_back(inputTendik);
			}

				break;
			case 4:{
                for(int i = 0; i < MHS; i++){
                    cout << "Nama Mahasiswa :" << recMhs[i].getNama() << "\n";
					cout << "Tanggal Lahir  :" << recMhs[i].getTglLahir() <<  "/"<<recMhs[i].getBulanLahir()<< "/" << recMhs[i].getTahunLahir() <<"\n";
					cout << "NRP            :" << recMhs[i].getNRP() << "\n";
					cout << "Departemen     :" << recMhs[i].getDepartemen() << "\n";
					cout << "Tahun Masuk    :" << recMhs[i].getTahunMasuk() << "\n";
                }
            }
				break;
			case 5:{
				  for(int i = 0; i < DSN; i++){
                    cout << "Nama Dosen     :" << recDosen[i].getNama() << "\n";
                    cout << "Tanggal Lahir  :" << recDosen[i].getTglLahir() <<  "/"<<recDosen[i].getBulanLahir()<< "/" << recDosen[i].getTahunLahir() <<"\n";
                    cout << "NPP            :" << recDosen[i].getNPP() << "\n";
                    cout << "Departemen     :" << recDosen[i].getDepartemen() << "\n";
                    cout << "Pendidikan Akhir:" << recDosen[i].getPendidikan() << "\n";
                }
			}
				break;
			case 6:{
				  for(int i = 0; i < TNDK; i++){
                    cout << "Nama Tendik    :" << recTendik[i].getNama() << "\n";
					cout << "Tanggal Lahir  :" << recTendik[i].getTglLahir() <<  "/"<<recTendik[i].getBulanLahir()<< "/" << recTendik[i].getTahunLahir() <<"\n";
					cout << "NPP            :" << recTendik[i].getNPP() << "\n";
					cout << "Unit Kerja     :" << recTendik[i].getunitkerja() << "\n";
                }
			}
				break;
		}
		
	}
}
