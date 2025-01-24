#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n][n];
    for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (i>=j){
                    a[i][j]='#';
                }
                else{
                    a[i][j]='.';
                }
            }
        }
    if (n%2==0){
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    else{
        for (int i=0;i<n;i++){
            for (int j=n-1;j>=0;j--){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }

	return 0;
}
