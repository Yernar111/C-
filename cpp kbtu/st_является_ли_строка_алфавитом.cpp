#include <iostream>
/* Является ли строка частью алфавита */
using namespace std;
int main(){
    string s;
    cin>>s;
    char c=s[0];
    for (int i=1;i<s.size();i++){
        if (s[i]!=char(c+i)){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}

