#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int x[3][3]={};



void o(int p , int x, int y){
    if(p==3){
        cout<<"A";
    }
    else if(p==2){
        cout<<"B";
    }
    else if(p==1){
        cout<<"C";
    }
    else{
        cout<<"O";
    }
}



int main(){
    int n=3;int mx=0;int Xs,Ys;
    char temp;
    int X=0;int Y=0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>temp;
            if (temp=='A') x[i][j]=3;
            else if (temp == 'B') x[i][j]=2;
            else if (temp == 'C') x[i][j]=1;   
        }   
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (x[i][j] > mx) {
                mx = x[i][j];
                X = i;
                Y = j;
            }
        }
    }
    mx = 0;
    o(x[X][Y], X, Y);
    x[X][Y] = 0;





     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((x[i][j] > mx) && ((i == X+1 && j == Y)||(i == X-1 && j == Y)||(i == X && j == Y+1)||(i == X && j == Y-1)||(i == X+1 && j == Y+1)||(i == X-1 && j == Y+1)||(i == X+1 && j == Y-1)||(i == X-1 && j == Y-1)) ){
                mx = x[i][j];
                Xs = i;
                Ys = j;
            }
        }
    }
    
    
    
    X = Xs;
    Y = Ys;
    o(x[X][Y], X, Y);
    x[X][Y] = 0;
    mx = 0;



    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((x[i][j] > mx) && ((i == X+1 && j == Y)||(i == X-1 && j == Y)||(i == X && j == Y+1)||(i == X && j == Y-1)||(i == X+1 && j == Y+1)||(i == X-1 && j == Y+1)||(i == X+1 && j == Y-1)||(i == X-1 && j == Y-1)) ){
                mx = x[i][j];
                Xs = i;
                Ys = j;
            }
        }
    }
    
    
    X = Xs;
    Y = Ys;
    o(x[X][Y], X, Y);
    x[X][Y] = 0;
    mx = 0;

    
    
}