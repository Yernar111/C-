#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if (n>7 || m>7){
        cout<<"Impossible";
        return 0;
    }
    int a[8][8];
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            if (i==n && j==m){
                cout<<"1 ";
            }
            else if(i==n || j==m || (i-j)==(n-m) || (i+j)==(n+m)){
                cout<<"2 ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

	return 0;
}
