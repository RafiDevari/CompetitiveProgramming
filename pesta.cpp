#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;string temp;string cur;
    cin>>n;
    string arr[n]={};

    for (int i=0;i<n;i++){
        if (i==0){
            cin>>arr[i];
            cout<<1<<endl;

        }

        
        else{
            cin>>arr[i];
            cur=arr[i];
            
                for (int j = 0; j < i+1; j++){
                    if (arr[i]<arr[j]){
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
                cout<<upper_bound(arr,arr+i+1,cur)-arr<<endl;

            
        }
    }

    


    


    
}