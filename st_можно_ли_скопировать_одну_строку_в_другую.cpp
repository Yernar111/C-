#include <iostream>
/* Можно ли внутри строки s вставлять строку t при этом чтобы ничего не изменилось*/
using namespace std;
int main(){
    string t,s;
    cin>>t>>s;
    if (s.size()%t.size()==0){
        for (int i=0;i<s.size();){
            for (int j=0;j<t.size();j++){
                if (t[j]==s[i]){
                    i++;
                }
                else{
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    else{
        cout<<"NO";
        return 0;
    }

    cout<<"YES";


    return 0;
}

