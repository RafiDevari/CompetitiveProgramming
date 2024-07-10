#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){
    int n=0,x = 0;
    cin >> n >> x;
    int closest = -9999999;
    int temp = 0;

    for (int i = 0; i < n; i++){
        cin >> temp;
        if (abs(temp-x) < abs(closest-x)){
            closest = temp;
        }
        else if (abs(temp-x) == abs(closest-x)){
            if (temp < closest){
                closest = temp;
            }
        }
    }


    cout << closest << endl;

    
    
    return 0;
}