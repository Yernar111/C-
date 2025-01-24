#include <iostream>
/* Является ли строка t подстрокой s */
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    for (int i=0;i<=s.size()-t.size();i++){
        int j;
        for (j=0;j<t.size();j++){
            if (s[i+j]!=t[j]){      /* Если символ большой строки не совпадает */
                break;             /* с символом маленькой строки, то переходим на следующий символ */
            }
        }
        if (j==t.size()){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}
