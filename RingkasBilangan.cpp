#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void sortAndRemoveDuplicates(int arr[], int& size) {
    sort(arr, arr + size);
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[newSize++] = arr[i];
        }
    }
    size = newSize;
}


int main() {
    int arr[] = {1 ,2 ,3, 1, 1 ,2 ,6 ,6 ,2 ,5 ,7 ,10, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sortAndRemoveDuplicates(arr, size);

    for (int i = 0; i < size; ++i) {
        int now = arr[i];
        int x = 0;
        while (arr[i] == now+1){
            now++;
        }
        
    }
    cout << endl;

    return 0;
}