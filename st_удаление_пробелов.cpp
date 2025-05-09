#include <iostream>
using namespace std;
int main(){
    string s,t;
    getline (cin,s);
    for (int i=0;i<s.size();i++){
        if (s[i]== ' ' && s[i-1]==' ')
            continue;
        else{
            t+=s[i];
        }
    }
    cout<<t;

    return 0;
}
