#include <iostream>
/* Буква в строке которая встречается ровно два раза */
using namespace std;

int main(){
    string s;
    char c;
    cin>>s;
    for (int i=0;i<s.size();i++){
        int k=0;
        for (int j=0;j<s.size();j++){
            if (s[i]==s[j]){
                k++;
            }
            if (k>2)
                break;
        }
        if (k==2){
            c=s[i];
            cout<<c;
            break;
        }
    }

    return 0;
}
