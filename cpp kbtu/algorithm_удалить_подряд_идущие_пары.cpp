#include <bits/stdc++.h>
using namespace std;
/* Удалить одно число из подряд идущих пар */
int main(){
    int n;
    cin>>n;
    vector <int> a;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    vector<int>::iterator b=unique(a.begin(),a.end());
    a.erase(b,a.end());
    for (int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
