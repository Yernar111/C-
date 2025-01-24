#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i=0;i<s.size();i++){
        string t="";
        int k=0;
        while(s[i]!=' ' && i<s.size()){
            if (s[i]>='0' && s[i]<='9'){
                k++;
            }
            else
                t=t+s[i];
            i++;
        }
        if (k==0)
            cout<<t<<endl;
    }

    return 0;
}
