#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    if (n>=6){
        cout<<11+(n-6)<<":00";
    }
    else if(n<6){
        if (n<=4 && n>=-5){
            cout<<"0"<<11-(6-n)<<":00";
        }
        else if (n<-5){
            cout<<23-(abs(n)-6)<<":00";
        }
        else{
            cout<<11-(6-n)<<":00";
        }
    }

    return 0;

}
