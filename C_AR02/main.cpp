#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int arr[6];
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    reverse(arr, arr + 6);
    for (int i = 0; i < 6; i++) {
        cout << arr[i];
        if (i < 5) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}