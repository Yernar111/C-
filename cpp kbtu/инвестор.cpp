#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n;
    int k;
    cin>>n>>k;
    for (int i=0;i<k;i++){
        n=n*2.0;
    }
    cout<<fixed<<setprecision(4)<<n;


    return 0;
}
