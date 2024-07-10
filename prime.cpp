#include <iostream>
#include <cmath>


using namespace std;


int main(){
    int x=0;
    cin >> x;
    int prima[77777]={};
    int k[x]={};
    prima[0]=2;
    prima[1]=3;
    prima[2]=5;
    prima[3]=7;
    int n=4;
    int max=0;


    for (int i = 0; i < x; i++){
        cin >> k[i];
        if (k[i] > max){
            max = k[i];
        }
    }



    for (int i = 11; n < max; i+=2){
        for (int j = 3; j < i; j+=2){
            if (i % j == 0){
                break;
            }
            else if (j*j >= i-2){
                prima[n]=i;
                n++;
                break;
            }
        }
        
    }
    


    for (int i = 0; i < x; i++){
            cout << prima[k[i]-1] << endl;
        
    }
    
    




    return 0;
    
}