#include <bits/stdc++.h>
/* ƒаютс€ два числа - размеры двух векторов, надо удалить последовательные дубликаты из обеих векторов, затем создать третий вектор с элементами двух имеющихс€: первый элемент с первого, второй со второго и т.д, затем еще раз убрать последовательные дубликаты в третьего вектора */
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector <int> a;
    vector <int> b;
    int k;
    for (int i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    for (int i=0;i<m;i++){
        cin>>k;
        b.push_back(k);
    }

    vector <int>::iterator c=unique(a.begin(),a.end());
    a.erase(c,a.end());

    c=unique(b.begin(),b.end());
    b.erase(c,b.end());

    int g = a.size()>=b.size() ? b.size() : a.size();
    vector <int> d;
    for (int i=0;i<g;i++){
        d.push_back(a[i]);
        d.push_back(b[i]);
    }
    if(a.size()>=b.size()){
        for (int i=g;i<a.size();i++){
            d.push_back(a[i]);
        }
    }
    else{
        for (int i=g;i<b.size();i++){
            d.push_back(b[i]);
        }
    }
    c=unique(d.begin(),d.end());
    d.erase(c,d.end());
    for (int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }

    return 0;
}
