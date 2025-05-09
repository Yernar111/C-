#include <iostream>
#include <vector>
using namespace std;
/* Удалить одинаковые элементы чтобы в конце остался лишь уникальный набор элементов */
void check(int a[], vector <int> b,int n, int i, int j){
    if (i==n){
        for (int h=0;h<b.size();h++){
            cout<<b[h]<<" ";
        }
        return;
    }
    if (i==j){
        b.push_back(a[i]);
        return check(a,b,n,i+1,0);
    }
    if (a[i]==a[j])
        return check(a,b,n,i+1,0);

    return check(a,b,n,i,j+1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    vector <int> b;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    b.push_back(a[0]);
    check(a,b,n,1,0);

    return 0;
}
