#include <bits/stdc++.h>
/* Есть четыре числа a,b,c,d такие что a>b>c>d, a+d=n и b+c=n, сколько всего существует таких четверок которые выполняют условие */
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,d;
    int k=0;
    for (int i=1;i<n/2;i++){
        a=n-i;
        b=a-1;
        c=n-b;
        d=c-1;
        if (a>b && b>c){
            while (a>b && b>c){
                b--;
                c++;
                k++;
            }
        }
    }
    cout<<k;
    return 0;
}
