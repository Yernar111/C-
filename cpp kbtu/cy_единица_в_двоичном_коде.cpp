#include <iostream>
using namespace std;
/*��_�����_�������_�����_������_�������_�_��������_����*/

int main(){
    int n,i=0;
    cin>>n;
    int a[n];
    while(n!=0){
        a[i]=n%2;
        i++;
        n=n/2;
    }
    for (int j=0;j<=i-1;j++){
        if (a[j]==1){
            cout<<j;
            break;
        }
    }


    return 0;
}
