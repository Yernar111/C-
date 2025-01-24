#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    double k=n*4.0;
    double m=0.0;
    while(m/k<=2.0/3.0){
        m=m+4.0;
        k=k-2.0;
        if (m/k==2.0/3.0){
            cout<<m/2;
            return 0;
        }
    }
    int q=(m-4)/2;
    cout<<q;

    return 0;

}
