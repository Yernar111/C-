#include <iostream>
using namespace std;

string func(string s){
    string t;
    int k=0;
    for (int i=0;i<s.size();i++){
        if (s[i]!='a'){
            t[k]=s[i];
            k++;
        }
    }
    for (int i=0;i<=k;i++){
        cout<<t[i];
    }

}

int main(){
    string s;
    cin>>s;

    func(s);


    return 0;
}

