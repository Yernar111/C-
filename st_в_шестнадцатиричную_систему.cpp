#include <iostream>

using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    char a[n];
    while(n!=0){
        if (n%16>=10 && n%16<=15){
            a[i]=char(65+n%16%10);
            i++;
        }
        else{
            a[i]=n%16+48;
            i++;
        }
        n=n/16;
    }
    for (int j=i-1;j>=0;j--){
        cout<<a[j];
    }

	return 0;
}
