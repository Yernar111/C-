#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // Find the largest gcd of any pair of two distinct numbers in the array
    int max_gcd = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x = a[i], y = a[j];
            while(y){
                int temp = y;
                y = x % y;
                x = temp;
            }
            if(x > max_gcd){
                max_gcd = x;
            }
        }
    }
    cout << max_gcd << endl;
    return 0;
}