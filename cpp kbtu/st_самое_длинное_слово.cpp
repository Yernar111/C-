#include <iostream>
using namespace std;
int main(){
    string s,k;
    int b=0;
    while(cin>>s){
        if (b<s.size()){
            b=s.size();
            k=s;
        }
    }
    cout<<k;

    return 0;

}

