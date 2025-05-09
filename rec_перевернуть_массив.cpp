#include <iostream>
#include <stack>
using namespace std;

void check(int a[],int i, int n,  stack <int> b){
    if (i==n){
        while(!b.empty()){
            cout<<b.top()<<" ";
            b.pop();
        }
        return;
    }
    b.push(a[i]);
    return check(a,i+1,n,b);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    stack <int> b;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    check(a,0,n,b);


    return 0;
}

