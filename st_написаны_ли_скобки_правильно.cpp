#include <iostream>
#include <string>
/* Скобки написаны правильно если для каждой открытой скобки есть закрытая */
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0;
    bool m=true;
    for (int i=0;i<s.size();i++){
        if (s[i]=='('){
            k++;
        }
        else{
            k--;
        }
        if (k<=-1){
            m=false;
            break;
        }
    }
    if (k==0 && m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
