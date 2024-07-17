#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> kode(n);
    vector<int> skor(n, 0);
    int a, b;

    for (int i = 0; i < n; i++) {
        cin >> kode[i];
    }

    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            cin >> a >> b;
            // cout << a << " " << b << endl;
            if (a > b) {
                skor[j] += 3;
                skor[k] -= 1;
            } else if (a < b) {
                skor[k] += 3;
                skor[j] -= 1;
            } else { 
                skor[j] += 1;
                skor[k] += 1;
            }
        }
    }

    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if ((skor[i] > skor[max_index]) || (skor[i] == skor[max_index] && kode[i] < kode[max_index])) {
            max_index = i;
        }
    }

    cout << kode[max_index] << endl;
    // for (int i = 0; i < n; i++){
    //     cout << " " << skor[i];
    // }
    return 0;
}
