#include <iostream>
#include<cstring>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            int m = 2;
            for(int j = 0; j < i; j++)
            {
                for(int k = j+i; k < n; k+=i)
                {
                    if(s[k] != s[j])
                    {
                        m--;
                    }
                }
            }
            if(m > 0)
            {
                cout << i << endl;
                return;
            }
            m = 2;
            for(int j = n-i; j < n; j++)
            {
                for(int k = j-i; k >= 0; k-=i)
                {
                    if(s[k] != s[j])
                    {
                        m--;
                    }
                }
            }
            if(m > 0)
            {
                cout << i << endl;
                return;
            }
        }
    }
}

int main(){
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
}
