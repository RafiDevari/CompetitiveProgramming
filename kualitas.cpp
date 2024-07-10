#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main(){


    int n;
    cin>>n;
    vector<float> arr;
    int temp;

    for (int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    float x = static_cast<float>(n)/2;


    if (n%2==0){
        cout << fixed << setprecision(1) << (arr[x-1]+arr[x])/2<< endl;

    }
    else{

        cout << fixed << setprecision(1) << arr[x] << endl;

    }
    
    


    
}