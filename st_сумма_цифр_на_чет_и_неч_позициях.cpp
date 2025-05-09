#include <iostream>
/* Является ли сумма цифр числа на четных и нечетных позициях одинаковым */
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0,m=0;
    for (int i=0;i<s.size();i++){
        if (i%2==0){
            k+=s[i];
        }
        else{
            m+=s[i];
        }
    }
    if (k==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
