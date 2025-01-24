#include <iostream>
/* ƒаетс€ число в виде строки и еще одно число k, первое число необходимо минимизировать путем перестановки двух соседних цифр и эту операцию можно сделать не более k раз */
using namespace std;
int main(){
    int n,m;
    string s;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>s>>m;
        if (s.size()==1 || m==0){
            cout<<s<<endl;
            continue;
        }
        char c;
        for (int k=0;k<m;k++){
            for (int j=0;j<s.size()-1;j++){
                if (s[j]>s[j+1]){
                    c=s[j+1];
                    s[j+1]=s[j];
                    s[j]=c;
                    k++;
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
