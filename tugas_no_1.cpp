#include <iostream>
#include <string>
using namespace std;

double pokok(double);
double lembur(double);
double makan();
double transport();

int main(){
    int nip, jamKerja;
    double uangLembur, uangMakan, uangTransport, gajiPokok;
    string nama;

    string desk =
    "==========================================\n"
    "Slip gaji harian PT. XYZ\n"
    "==========================================\n\n";

    cout << desk;
    cout << "Masukkan Nama Anda: ";
    cin >> nama;

    cout << "Masukkan NIP Anda: ";
    cin >> nip;

    cout << "Masukkan Jam Kerja Anda/hari: ";
    cin >> jamKerja;

    gajiPokok = pokok(jamKerja);
    uangLembur = (jamKerja>8) ? lembur(gajiPokok) : 0;
    uangMakan = (jamKerja>=9) ? makan() : 0;
    uangTransport = (jamKerja>=10) ? transport() : 0;

    cout << "\nNIP                    : " << nip << endl;
    cout << "Nama                   : " << nama << endl;
    cout << "Gaji Pokok             : " << gajiPokok << endl;
    cout << "Uang Lembur            : " << uangLembur << endl;
    cout << "Tambahan Uang Makan    : " << uangMakan << endl;
    cout << "Uang Transport Lembur  : " << uangTransport << endl;

    return 0;
}

double pokok(double gapok){
    return 7500*gapok;
}

double lembur(double gapok){
    return 1.5*gapok;
}

double makan(){
    return 10000;
}

double transport(){
    return 13000;
}
