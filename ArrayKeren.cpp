#include <iostream>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

double akar(double x) {
    double x1 = sqrt(x);
    if (int(x1) == x1) {
        return x1;
    } else {
        return -1;
    }
}

int main() {
    int x;
    cin >> x;
    vector<double> awal(x);
    vector<vector<double>> hasil;
    set<double> setHasil;


    for (int i = 0; i < x; i++) {
        cin >> awal[i];
    }

    for (double i = 0; i < x - 1; i++) {
        for (double j = i + 1; j < x; j++) {
            if (akar(awal[i] * awal[j]) != -1) {
                hasil.push_back({i, j});
            }
        }
    }

    for (const auto& x : hasil) {
        setHasil.insert(x[0]);
        setHasil.insert(x[1]);
    }

    int k = x-setHasil.size();
    
    for (int i = 1; i < (x-k)+1; i++){
        for (int j = 0; j < setHasil.size(); i++){
            
        }
        
        
    }
    




    for (const auto& x : hasil) {
        cout << awal[x[0]] << " " << awal[x[1]] << endl;
    }
    

    for (const auto& x : setHasil) {
        cout << x << endl;
    }





    

    return 0;
}
