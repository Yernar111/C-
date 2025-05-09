#include <bits/stdc++.h>
using namespace std;
/* Проверить возможно ли создать из заданных чисел палиндром */
bool check(vector <int> a, int i, int n){
    if (i>=n)
        return true;
    if (a[i]!=a[n])
        return false;
    return check(a,i+1,n-1);
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
    sort(a.begin(),a.end());
    do{
        if (check(a,0,a.size()-1)){
            for (int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            return 0;
        }
    } while(next_permutation(a.begin(),a.end()));
    cout<<"Impossible";

    return 0;
}
