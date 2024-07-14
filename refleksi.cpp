#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin>>n>>n;
    
    int matriks1[n][n]={};
    int matriks2[n][n]={};
    int temp[n][n]={};

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matriks1[i][j];
        }
    }

    cin>>n>>n;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matriks2[i][j];
        }
    }

    
    if (matriks1[0][0]==matriks2[n-1][0] && matriks1[0][n-1]==matriks2[n-1][n-1] && matriks1[n-1][0]==matriks2[0][0] && matriks1[n-1][n-1]==matriks2[0][n-1] ){
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (matriks1[i][j]==matriks2[n-1-i][j]){
                    continue;
                }
                else{
                    goto endloop1;
                }
            }
        }
        cout<<"horisontal"<<endl;
        return 0;
        endloop1:;
        
    }

    if (matriks1[0][0]==matriks2[0][n-1] && matriks1[0][n-1]==matriks2[0][0] && matriks1[n-1][0]==matriks2[n-1][n-1] && matriks1[n-1][n-1]==matriks2[n-1][0] ){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (matriks1[i][j]==matriks2[i][n-1-j]){
                    continue;
                }
                else{
                    goto endloop;
                }
            }
        }
        
        cout<<"vertikal"<<endl;
        return 0;
        endloop:;
    }

    if (matriks1[0][0]==matriks2[n-1][n-1] && matriks1[0][n-1]==matriks2[0][n-1] && matriks1[n-1][0]==matriks2[n-1][0] && matriks1[n-1][n-1]==matriks2[0][0] ){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (matriks1[i][j]==matriks2[n-1-j][n-1-i]){
                    continue;
                }
                else{
                    goto endloop2;
                }
            }
        }

        cout<<"diagonal kiri bawah"<<endl;
        return 0;
        endloop2:;
    }

    if (matriks1[0][0]==matriks2[0][0] && matriks1[0][n-1]==matriks2[n-1][0] && matriks1[n-1][0]==matriks2[0][n-1] && matriks1[n-1][n-1]==matriks2[n-1][n-1] ){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (matriks1[i][j]==matriks2[j][i]){
                    continue;
                }
                else{
                    goto endloop3;
                }
            }
        }
        cout<<"diagonal kanan bawah"<<endl;
        return 0;
        endloop3:;

    }
    if (matriks1[0][0]==matriks2[0][0] && matriks1[0][n-1]==matriks2[0][n-1] && matriks1[n-1][0]==matriks2[n-1][0] && matriks1[n-1][n-1]==matriks2[n-1][n-1] ){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (matriks1[i][j]==matriks2[i][j]){
                    continue;
                }
                else{
                    goto endloop4;
                }
            }
        }    
        cout<<"identik"<<endl;
        return 0;
        endloop4:;
    }
    else{
        cout<<"tidak identik"<<endl;
        return 0;
    }
    
    
        












    //ini tes liat matiksnya

    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         cout<<matriks1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;

    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         cout<<matriks2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
}