#include <iostream>
#include <cmath>

using namespace std;

int check(int i){
    if (i==0)
        return 1;
    return check(i-1)*2;
}

int main(){
    int a,b;
    cin>>a>>b;
    for (int i=a;i<=b;i++){
        cout<<check(i)<<" ";
    }

    return 0;
}
