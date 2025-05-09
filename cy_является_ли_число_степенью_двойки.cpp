#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b=1;
    while (b<=a){
        b=b*2;
        if (b==a){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    return 0;
}
