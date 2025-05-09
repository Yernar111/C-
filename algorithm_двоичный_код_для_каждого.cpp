#include <bits/stdc++.h>
using namespace std;
/* Двоичный код для каждого числа в последовательности */
void check(int n){
    stack <int> a;
    while(n!=0){
        a.push(n%2);
        n/=2;
    }
    while (!a.empty()){
        cout<<a.top();
        a.pop();
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector <int> a;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    for_each(a.begin(),a.end(),check);
    return 0;
}
