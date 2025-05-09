#include <iostream>
using namespace std;

int main(){
    int b=1,n=0;
    while (b!=0){
        cin>>b;
        n+=b;
        if (b==0){
            cin>>b;
            n+=b;
            if (b==0){
                break;
            }
        }
    }
    cout<<n;


    return 0;
}
