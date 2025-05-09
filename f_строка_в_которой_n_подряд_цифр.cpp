#include <iostream>
/* Является ли строка таковым, что в ней содержится n или больше подряд идущих цифр */
using namespace std;

string check(string s, int n){
    for (int i=0;i<s.size();i++){
        if (s[i]>='0' && s[i]<='9'){
            int k=0;
            while(s[i]>='0' && s[i]<='9'){
                k++;
                i++;
            }
            if (k>=n)
                return "Valid";
        }
    }
    return "Not valid";
}


int main(){
    string s;
    int n;
    cin>>s>>n;
    cout<<check(s,n);
    return 0;
}
