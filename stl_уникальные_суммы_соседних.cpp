#include <iostream>
#include <set>
/* Количество уникальных сумм соседних элементов(a[i]+a[i+1]) */
using namespace std;
int main(){
    set <int> b;
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++){
        b.insert(a[i]+a[i+1]);
    }
    cout<<b.size();
    return 0;
}
