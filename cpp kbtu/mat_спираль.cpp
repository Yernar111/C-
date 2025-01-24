#include <iostream>
using namespace std;

int main(){
    int n,m=1;
    cin>>n;
    int a[n][n];
    int left=0,right=n-1,top=0,bottom=n-1;
    while (left<=right && top<=bottom){
        for (int i=left;i<=right;i++){
            a[top][i]=m;
            m++;
        }
        top++;

        for (int i=top;i<=bottom;i++){
            a[i][right]=m;
            m++;
        }
        right--;

        if (top<=bottom){
            for (int i=right;i>left-1;i--){
                a[bottom][i]=m;
                m++;
            }
            bottom--;
        }
        if (left<=right){
            for (int i=bottom;i>top-1;i--){
                a[i][left]=m;
                m++;
            }
            left++;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


	return 0;
}
