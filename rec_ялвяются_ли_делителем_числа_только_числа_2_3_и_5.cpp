#include <iostream>
using namespace std;

bool isUsual(int n){
    if (n%2==0)
        return isUsual(n/2);
    else if (n%3==0)
        return isUsual(n/3);
    else if (n%5==0)
        return isUsual(n/5);
    if (n>1){
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if (isUsual(n)){
        cout<<"Yes";
    }
    else
        cout<<"No";

	return 0;
}
