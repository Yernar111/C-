#include <iostream>
/* Ѕуква в строке котора€ встречаетс€ ровно два раза */
using namespace std;

char check(string s, char c, int i, int j, int k){
    if (i==s.size())
        return ' ';
    if (j==s.size() || k>2){
        if (k==2){
            c=s[i];
            return c;
        }
        j=0,k=0;
        return check(s, c, i+1, j, k);
    }
    if (s[i]==s[j]){
        k++;
    }
    return check(s, c, i, j+1, k);

}

int main(){
    string s;
    char c=' ';
    int i=0,j=0,k=0;
    cin>>s;
    cout<<check(s,c,i,j,k);


    return 0;
}
