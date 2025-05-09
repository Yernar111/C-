#include <iostream>

using namespace std;

string copy_(string s, string t, int i, int j){
    if (i==s.size())
        return "YES";

    if (j==t.size()){
        j=0;
        return copy_(s,t,i,j);
    }

    if (s[i]!=t[j])
        return "NO";

    return copy_(s, t, i+1,j+1);
}

/* Можно ли внутри строки s вставлять строку t при этом чтобы ничего не изменилось*/
int main(){
    string s,t;
    cin>>t>>s;
    int i=0,j=0;
    if (s.size()%t.size()==0)
        cout<<copy_(s,t,i,j);
    else
        cout<<"NO";

    return 0;
}
