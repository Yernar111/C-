#include <bits/stdc++.h>
using namespace std;
/* Сначала перевернуть массива начиная с M элемента, затем отзеркалить */
int main(){
    vector <int> a;
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    rotate(a.begin(),a.begin()+m,a.end());
    reverse(a.begin(),a.end());
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
