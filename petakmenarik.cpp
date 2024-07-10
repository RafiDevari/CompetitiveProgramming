#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    
    int x = 0;
    int y = 0;int z = 0;
    int kx = 0;int ky = 0;int bil1 = 0;int bil2 = 0;int bil3 = 0;int bil4 = 0;
    bool found = false;

    cin >> y >> z >> x;

    int array[y][z]={};

    for (int i = 0; i < y; i++){
        for (int j = 0; j < z; j++){
            cin >> array[i][j];
        }
    }

    for (int j = 0; j < z && !found; j++) {
        for (int i = 0; i < y; i++) {

            bil1 = (i + 1 < y) ? array[i + 1][j] : 1;
            if (bil1 > 10 || bil1 < 1) {
                bil1 = 1;
            }

            bil2 = (i - 1 >= 0) ? array[i - 1][j] : 1;
            if (bil2 > 10 || bil2 < 1) {
                bil2 = 1;
            }

            bil3 = (j + 1 < z) ? array[i][j + 1] : 1;
            if (bil3 > 10 || bil3 < 1) {
                bil3 = 1;
            }

            bil4 = (j - 1 >= 0) ? array[i][j - 1] : 1;
            if (bil4 > 10 || bil4 < 1) {
                bil4 = 1;
            }

            if (bil1 * bil2 * bil3 * bil4 == x) {
                cout << i + 1 << " " << j + 1 << endl;
                found = true;
                break; 
            }
            else if(i == y-1 && j == z-1){
                cout << "0 0" << endl;
            }
        }
    }

}





    
    


    

