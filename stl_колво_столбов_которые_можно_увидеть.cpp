#include <iostream>
#include <vector>
#include <algorithm>
/* Дается число N количество столбов стоящих в одну линию, и число Q количество запросов включающих в себя отрезок L и R, надо найти сколько всего будет видно столбов на каждом отрезке, столб видно если он выше всех предыдущих на отрезке */
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int q,l,r;
    vector <int> b;
    cin>>q;
    for (int i=0;i<q;i++){
        cin>>l>>r;
        int k=1,max_=a[l];
        for (int j=l+1;j<=r;j++){
            if(a[j]>max_){
                max_=a[j];
                k++;
            }
        }
        b.push_back(k);
    }
    for (int i=0;i<b.size();i++){
        cout<<b[i]<<endl;
    }

    return 0;
}
