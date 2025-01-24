#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        int k=0;
        for (int j=0;j<i;j++){
            if (a[i]==a[j]){
                k++;
                break;
            }
        }
        if (k==0){
            cout<<a[i]<<" ";
        }
    }


    return 0;
}
