#include <bits/stdc++.h>
using namespace std;
/* Отсортировать время которое дается в часах, минутах и секундах */
int main(){
    multimap <pair<pair<int, int>,int>, int> a;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int k,m,t;
        cin>>k>>m>>t;
        a.insert({{{k,m},t},0});
    }
    multimap <pair<pair<int, int>,int>, int>::iterator b;
    for (b=a.begin();b!=a.end();b++){
        cout<<b->first.first.first<<" "<<b->first.first.second<<" "<<b->first.second<<endl;
    }

    return 0;
}
