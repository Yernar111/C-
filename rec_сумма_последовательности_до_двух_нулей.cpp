#include <iostream>
using namespace std;

int con(int n, int m){
    if (n==0){
        cin>>n;
        if (n==0)
            return m;
        return con(n,n+m);
    }
    cin>>n;
    return con(n,n+m);

}

int main(){
    int n;
    cin>>n;
    cout<<con(n,n);

    return 0;
}
