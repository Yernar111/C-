#include <iostream>
/* Сколько строк из массива а равна строке s */
using namespace std;
int main(){
    int n,m=0;
    string s;
    cin>>n;
    string a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    for (int i=0;i<n;i++){
        if (a[i]==s){
            m++;
        }
    }
    cout<<m;

    return 0;
}
