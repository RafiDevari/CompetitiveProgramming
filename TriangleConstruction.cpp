#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
    int n=0;
    int temp;
    long long result=0;
    int pb=0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> temp;
        result += temp;
        if (temp>pb){
            pb = temp;
        }
        
    }


    if ((result-pb) *2 < pb ){
        cout<<result-pb<<endl;
    }

    else{
        cout<<result/3<<endl;
    }
    
    


    

    
}