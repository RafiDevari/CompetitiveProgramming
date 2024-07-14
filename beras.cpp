#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){

    int n;
    cin>>n;
    int x,y;
    cin >> x;
    y=x;
    double arr[n]={};
    double res[n]={};
    double temp;
    double hasil=0;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        cin>>temp;
        res[i]=temp/arr[i];
    }

    for (int i=0;i<n;i++){
        for (int j = i + 1 ; j < n; j++){
            if (res[j]>res[i]){
                swap(res[i],res[j]);
                swap(arr[i],arr[j]);
            }
        }
    }


    for (int i = 0; i < n ; i++){
        if (y-arr[i]>=0){
            y=y-arr[i];
            hasil=hasil+(res[i]*arr[i]);
        }

        else{
            hasil+=res[i]*y;
            break;
        }
        
    }
    
    

    
    cout<< fixed << setprecision(5)<<hasil<<endl;
    


    
}