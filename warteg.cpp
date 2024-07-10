#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int pelanggan = 0;
    int nomor = 1;
    int nama, cari;
    cin >> nama >> cari;

    unordered_map<string, string> pelangganToNomor;
    string hasil[cari];

    for (int i = 0; i < nama; i++) {
        string pelangganStr, nomorStr;
        cin >> pelangganStr >> nomorStr;
        pelangganToNomor[pelangganStr] = nomorStr;
    }

    for (int i = 0; i < cari; i++) {
        cin >> hasil[i];
    }

    for (int i = 0; i < cari; i++) {
        if (pelangganToNomor.find(hasil[i]) != pelangganToNomor.end()) {
            cout << pelangganToNomor[hasil[i]] << endl;
        } else {
            cout << "NIHIL" << endl;
        }
    }

    return 0;
}
