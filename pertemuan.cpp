#include <iostream>
#include <vector>

using namespace std;

int main(){


 

    int n;
    int min=0,max=0;string temp;
    cin>>n;
    string arr[n]={};

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = ; j < n; j++){
            if (arr[i].length()<arr[j].length()){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else if (arr[i].length()==arr[j].length()){
                if (arr[i]<arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    


    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    


    
}