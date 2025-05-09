#include <bits/stdc++.h>
/* Есть команда с именами двух участников и очки которые набрал каждый участник по отдельности, если и имена и сумма очков одинаковая, то это одна команда написанная второй раз, иначе это другая команда. Вывести все уникальные команды */
using namespace std;
int main(){
    int n;
    cin>>n;
    string a,b;
    int m,k;
    map <pair<pair<string, string>,pair<int, int>>, int> c;
    for (int i=0;i<n;i++){
        cin>>a>>m>>b>>k;
        if (!c.count(make_pair(make_pair(a,b),make_pair(m,k)))){
            c.insert({{{a,b},{m, k}},m+k});
        }
    }
    map <pair<pair<string, string>,pair<int, int>>, int>::iterator d;
    for (d=c.begin();d!=c.end();d++){
        cout<<d->first.first.first<<" and "<<d->first.first.second<<" "<<d->second<<endl;
    }
    return 0;
}
