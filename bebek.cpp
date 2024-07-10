#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, q, x, y;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> x >> y;

        int low = upper_bound(arr, arr + n, x) - arr;
        int high = upper_bound(arr, arr + n, y) - arr;

        int temp = high - low;

        cout << temp << endl;
    }

    return 0;
}
