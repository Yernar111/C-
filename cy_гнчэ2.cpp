#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    int m=0;
    for (int i=1;i<=n;i++){
        for (k=1;k<=i;k++){
            cout<<i<<" ";
            m++;
            if (m==n){
                break;
            }
            }
    if (m==n){
        break;
    }
    }
    return 0;

}
