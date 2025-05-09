#include <iostream>
using namespace std;

string f(int n){
    if (n==1){
        return "YES";
    }
    if (n%2==1){
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

