#include <iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s>>n;
    for (int i=0;i<s.size();i++){
        if (s[i]-n<65){
        cout<<char(s[i]+26-n);
        }
        else{
        cout<<char(s[i]-n);
        }
    }


    return 0;
}
