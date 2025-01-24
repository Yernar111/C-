#include <bits/stdc++.h>
using namespace std;
/* Вывести все возможные перестановки чисел в векторе */
int main(){
    int n;
    cin>>n;
    vector <int> a;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        auto m=find(a.begin(),a.end(),k);
        if (m!=a.end())
            continue;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    do {
        for (int n : a){
            cout<<n<<" ";
        }
        cout<<endl;
    } while(next_permutation(a.begin(),a.end()));

    return 0;
}
