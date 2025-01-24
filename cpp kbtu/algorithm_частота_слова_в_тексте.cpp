#include <bits/stdc++.h>
using namespace std;
/* Дается текст, надо посчитать количество каждого слова, затем вывести слово и соотвествующее число(сколько раз слово встретилось в тексте), надо выводить числа в порядке убывания, но слова в алфавитном порядке */
bool compared(pair<int, string> a, pair<int, string> b){
    if (a.first!=b.first)
        return a>b;
    return a.second<b.second;
}

int main(){
    map <string, int> a;
    string s;
    while (cin>>s){
        if (a.count(s)>0){
            a[s]++;
        }
        else{
            a[s]=1;
        }
    }
    map <string, int>::iterator b;
    vector <pair<int, string>> c;
    for (b=a.begin();b!=a.end();b++){
        c.push_back({b->second, b->first});
    }
    sort(c.begin(),c.end(),compared);
    for (int i=0;i<c.size();i++){
        cout<<c[i].second<<" : "<<c[i].first<<endl;
    }

    return 0;
}
