#include <iostream>
using namespace std;

string f(int n){
    if (n==2){
        return "YES";
    }
    if (n==5 || n==3){
        return "NO";
    }
    return f(n/2);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}

