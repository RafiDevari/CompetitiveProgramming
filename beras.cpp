#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;
    int x,y;
    cin >> x;
    y=x;
    float arr[n]={};
    float res[n]={};
    float temp;
    float hasil=0;

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
    
    

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for (int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }

    cout<<endl;

    cout<<hasil<<endl;
    


    
}