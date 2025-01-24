#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string a;
    cin>>a;
    int k=0,j=7;
    for (int i=0;i<8;i++){
        k+=(a[i]-48)*pow(2,j);
        j--;
    }
    cout<<k;


    return 0;
}
