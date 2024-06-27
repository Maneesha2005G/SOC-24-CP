#include <iostream>
using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int remove(int a[], int n, int s, int skip) {
    int remaining[1000];
    int remainingSize = 0;
    for (int i = 0; i < n; ++i) {
        if (i != skip) {
            remaining[remainingSize++] = a[i];
        }
    }
    sortArray(remaining, remainingSize);
    int count = 0;
    for (int i = 0; i < remainingSize; ++i) {
        if (s >= remaining[i]) {
            s += remaining[i];
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {    
    int t;
    cin >> t; 
    for(int l=1;l<=t;l++) {
        int n;
        cin >> n;
        int a[1000];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int results[1000];
        for (int i = 0; i < n; ++i) {
            results[i] = remove(a, n, a[i], i);
        }
        for (int i = 0; i < n; ++i) {
            cout << results[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

