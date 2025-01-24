#include <iostream>
/* Встречается ли символ с в строке s ровно n раз */
using namespace std;

string check(string s, char c, int n, int k, int i){
    if (i==s.size()){
        if (k==n)
            return "YES";
        return "NO";
    }
    if (s[i]==c)
        k++;
    return check(s, c, n, k, i+1);
}

int main(){
    string s;
    char c;
    int n;
    cin>>s>>c>>n;
    cout<<check(s,c,n,0,0);

    return 0;
}
