#include <bits/stdc++.h>
using namespace std;
/* Fixed point это точка в массиве где p[i]=i, найти количество перестановок массива в котором будет ровно k fixed points */
int check(){
    static int n=0;
    n++;
    return n;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    generate(a.begin(),a.end(),check);
    int m=0;
    do{
        int t=0;
       for (int i=0;i<n;i++){
            if (a[i]==i+1)
                t++;
       }
       if (t==k)
            m++;
    }while(next_permutation(a.begin(),a.end()));
    cout<<m;
    return 0;
}
