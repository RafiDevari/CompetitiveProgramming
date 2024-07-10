#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=20;int x=1;int y=0;bool z=true;

    for (int i = 1; i < n; i=i*10){
        
        y++;
        
    }

    cout << y << endl;

    
    
    for (int i = 1; i <= y; i++){
        
        if (   (n % static_cast<int>(pow(10, i)))/static_cast<int>(pow(10, i-1)) != (n % static_cast<int>(pow(10, y-(i-1)) ))/static_cast<int>(pow(10, y-i))   ){
            z= false;
            break;
        }

        cout << (n % static_cast<int>(pow(10, i)))/static_cast<int>(pow(10, i-1)) << " " << (n % static_cast<int>(pow(10, y-(i-1)) ))/static_cast<int>(pow(10, y-i)) << endl;
        

        if (i == y){
            z= true;
        }
        
    }
    
    cout << z << endl;
    

}