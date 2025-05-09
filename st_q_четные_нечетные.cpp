#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
/* Вывести сначала четные числа массива в порядке убывания, а затем нечетные числа в порядке возрастания */
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort (a,a+n);
    queue <int> b;
    stack <int> c;
    for (int i=n-1;i>=0;i--){
        if (a[i]%2==0){
            b.push(a[i]);
        }
        else{
            c.push(a[i]);
        }
    }
    while (!b.empty()){
        cout<<b.front()<<" ";
        b.pop();
    }
    while (!c.empty()){
        cout<<c.top()<<" ";
        c.pop();
    }

    return 0;
}
