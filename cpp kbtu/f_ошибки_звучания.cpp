#include <iostream>
#include <cmath>
using namespace std;
/* Для арабов часто буквы b и p или буквы e и i одинаковые по звучанию, нужно определить являются ли два текста одинаковыми учитывая эти условия */

string check(string s, string t){
    for (int i=0;i<s.size();i++){
        if (s[i]!=t[i]){
            if (abs(s[i]-t[i])==32 || (s[i]=='p' && t[i]=='b')  || (s[i]=='P' && t[i]=='B') || (s[i]=='b' && t[i]=='p') || (s[i]=='B' && t[i]=='P') || (s[i]=='e' && t[i]=='i') || (s[i]=='E' && t[i]=='I') || (s[i]=='i' && t[i]=='e') || (s[i]=='I' && t[i]=='E') ||  (abs(s[i]-t[i])==46 && (s[i]=='B' || s[i]=='p')) || (abs(s[i]-t[i])==18 && (s[i]=='b' || s[i]=='P')) || (abs(s[i]-t[i])==28 && (s[i]=='e' || s[i]=='I')) ||  (abs(s[i]-t[i])==36 && (s[i]=='i' || s[i]=='E'))){
                continue;
            }
            else
                return "No";
        }
    }
    return "Yes";
}

int main(){
    int n;
    string s,t;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>s>>t;
        if (s.size()!=t.size()){
            cout<<"No"<<endl;
            continue;
        }
        cout<<check(s,t)<<endl;
    }

    return 0;
}
