#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int a, b;
        cin >> a >> b;
        
        int count = 0;
 
        if(a % b == 0) {
            cout << count << endl;
        } else {
            int remainder = a % b;
            int addition = b - remainder;
            cout << addition << endl;
        }
    }
 
    return 0;
}
