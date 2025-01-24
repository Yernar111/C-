#include <iostream>
#include <vector>
#include <algorithm>
/* Найти число без пары */
using namespace std;

int without_pair(vector <int> a,int i){
    if (i==a.size()-1)
        return a.back();
    if (a[i]!=a[i-1] && a[i]!=a[i+1])
        return a[i];
    return without_pair(a,i+1);
}

int main(){
    int n,m;
    cin>>n;
    vector <int> a;
    for (int i=0;i<n;i++){
        cin>>m;
        a.push_back(m);
    }
    sort(a.begin(),a.end());
    if (a[0]!=a[1]){
        cout<<a[0];
        return 0;
    }
    cout<<without_pair(a,1);


    return 0;
}
