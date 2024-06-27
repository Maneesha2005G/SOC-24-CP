    #include <iostream>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
        for(int l=1;l<=t;l++) {
            int n;
            cin >> n;
            long long x = 0, y = 0;
            for (int i = 1; i <= n; ++i) {
                int a;
                cin >> a;
                if (i % 2 == 1) {
                    x += a;
                } else {
                    y += a;
                }
            }
            if (n % 2 == 1 || x <= y) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
        return 0;
    }
