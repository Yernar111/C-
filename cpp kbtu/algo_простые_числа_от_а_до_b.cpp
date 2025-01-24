#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    for (int i=n;i<=k;i++){
        bool m=false;
        for (int j=2;j*j<=i;j++){
            if (i%j==0){
                m=true;
                break;
            }
        }
        if (!m){
            cout<<i<<" ";
        }
    }

	return 0;
}
