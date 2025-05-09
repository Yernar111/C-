#include <bits/stdc++.h>
using namespace std;
/* Представить что отрицательные числа тоже могут быть простыми и вывести количество простых чисел учитывая это */
bool check(int a){
    int n=abs(a);
    if (n==0 || n==1)
        return false;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    int t=count_if(a.begin(),a.end(),check);
    cout<<t;
    return 0;
}
