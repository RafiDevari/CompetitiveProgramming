#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,y;
    cin >> n >> y;
    int x[n], selisih[n], cur, hasil[n], a = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (x[i] < y) {
            selisih[i] = y - x[i];
        } else if (x[i] > y) {
            selisih[i] = x[i] - y;
        } else {
            selisih[i] = 0;
        }    
    }

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (cur > selisih[i-1])
            {
                hasil[a] = x[i];
            } 
            
        } else {
            if (cur < selisih[i+1])
            {
                hasil[a] = x[i];
            }else if (cur == selisih[i+1]) {
                hasil[a] = x[i];
                n++;
            }
        }
    }
    
    for(int i = 0; i < a; i++){
cout << hasil[a] << endl;
    }
    

    return 0;
}