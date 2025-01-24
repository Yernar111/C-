#include <iostream>
/* Встречается ли символ с в строке s ровно n раз */
using namespace std;
int main(){
    string s;
    char c;
    int n;
    cin>>s>>c>>n;
    int k=0;
    for (int i=0;i<s.size();i++){
        if (s[i]==c){
            k++;
        }
    }
    if (k==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}

