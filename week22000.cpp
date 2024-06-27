#include <iostream>
using namespace std;

int n, a[1000];

int smallest(int arr[], int n, int value) {
    int low = 0, high = n;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < value) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int change(int arr[], int n){
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[m++] = arr[i];
        }
    }
    return m;
}

int main() {  
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        
        int m = change(a, n);

        int ans = 0;
        for (int i = 0; i < m; ++i) {
            int pos = smallest(a, m, a[i] + n);
            ans = max(ans, pos - i);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}

