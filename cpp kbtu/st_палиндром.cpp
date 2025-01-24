#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int j=s.size()-1;
    for (int i=0;i<=s.size()/2;i++){
        if (s[i]==s[j]){
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
