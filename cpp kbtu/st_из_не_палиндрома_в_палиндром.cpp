#include <iostream>
/* Можно ли из не палиндрома сделать палиндром поменяв лишь одну букву */
using namespace std;
int main(){
    string s,t;
    cin>>s;
    int i;
    for (i=0;i<s.size();i++){
        t[i]=s[i];
    }
    t[i-1]=s[0];

    int j=s.size()-1;
    for (int i=0;i<=s.size()/2;i++){
        if (t[i]==t[j]){
            j--;
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


    return 0;
}
