#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int> a;
    int n,m;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>m;
        a.insert(m);
    }
    a.size()==n ? cout<<"YES" : cout<<"NO";
    return 0;
}
