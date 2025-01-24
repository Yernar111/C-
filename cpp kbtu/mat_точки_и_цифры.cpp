#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int k=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i+j+1==n){
                cout<<k;
                k++;
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }


    return 0;
}
