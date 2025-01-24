#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
/* ��������� � ������ */
int main(){
    cout<<"Vector"<<endl;
    vector <int> a(5,1); /* ������ � ������� 5 ��������� ������ �� ������� ����� 1 */
    for (int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    vector <int> b {1,3,5,7,9};
    cout<<b.front()<<" "<<b.back()<<" "<<b.at(2); /* 1 9 5 */ /* ������� ������ � ��������� ������� ������� � �������� �������� � �������� 2 */

    cout<<endl;
    int head=10;
    b.insert(b.begin()+2, head); /* {1,3,10,5,7,9} */
    b.pop_back(); /* ������� ��������� ����������� ������� */
    b.erase(b.begin()+3); /* {1,3,10,7} */ /* ��������� �� 2 ������ ������� head, ����� ������� ��������� ������� ������� � ������� � �������� 3 */
    for (auto i : b){
        cout<<i<<" ";
    }

    cout<<endl;
    vector <int>::iterator check=b.begin(); /* ��������� �������� � ������ �� ������ ������� ������� */
    cout<<*check; /* 1 */ /* ������������� ��������� ����� �������� ������ � �������� �������� */

    cout<<endl;
    check++; /* ����������� �������� �� ��������� ������� */
    *check=94; /* ������ �������� �������� ��� ���������� */
    for (int i=0;i<b.size();i++){
        cout<<b[i]<<" "; /* {1,94,10,7} */
    }

    cout<<endl;
    vector <int> c{21, 45, 16, 93, 50};
    vector <int>::iterator soap;
    for (soap=c.begin();soap!=c.end();soap++){ /* ��� ���� ������ �������� �� ��������� ���������� � ������� ��������� */
        cout<<*soap<<" ";
    }

    cout<<endl;
    sort(c.begin(), c.end()); /* ������������� ������ */
    for (int i : c){
        cout<<i<<" ";
    }

    cout<<endl<<"Set"<<endl;
    set <int> d{3,1,5,31}; /* Set ��� ��������� ������ ������� �������� �������� � ������������ */
    d.insert(17);
    d.insert(17);/* ���������� ��������, ���� ������� ��� ���� �� ��������� �� ���������� */
    d.erase(3); /* ������� ������� � ��������� 3 */
    int n=d.size(); /* ���������� ��������� */
    for (int i : d){
        cout<<i<<" "; /* {1,5,17,31} */
    }

    cout<<endl;
    if (d.count(5)>0){ /* ������� ��������� ���� �� ����� 5 � set, ���� ���� ���������� 1, ����� 0  */
        cout<<"YES";
    }

    cout<<endl;
    set <int>::iterator bone;
    for (bone=d.begin();bone!=d.end();bone++){ /* �������� �� ��������� set � ������� ��������� */
        cout<<*bone<<" ";
    }

    cout<<endl;
    unordered_set <int> f{4,2,7,5}; /* �� ������������� set */
    f.insert(3);
    f.insert(9); /* ��������� ������� � ������ set */
    unordered_set <int>::iterator call;
    for (call=f.begin();call!=f.end();call++){
        cout<<*call<<" "; /* {9,3,4,2,7,5} */
    }

    cout<<endl<<"Map"<<endl;
    map <int, char> e; /* Map ��� ��������� ������� ������ � ���� ���� ����-��������(������ ���� �������� � �������� ����������� �� ������), ��� �������� ������ �������� �������� �� ������ */
    e.insert({1, 'b'});
    e.insert({3, 'w'}); /* ���������� ����� � �������� */
    e[3]='t'; /* ���� ����� ���� ��� ���������� ����� �������� ���������� �� ����� */
    e[7]='s';
    e[5]='v'; /* ���� �������� ��� ������������ ���� � ������� insert �� ���� � �������� �� ���������, ���� �� ��� ������� ����� a[key]=value �� ���� �������� ���� �������� �� ����� */
    e[2]='h';
    e.erase(7); /* ������� ������� � ������ 7 */
    if (e.count(5)>0){
        cout<<"YES"<<" "<<e[5]<<endl; /* ���� ���� 5 ���� � map �� ������� YES � �������� � ������ 5 */
    }
    int fall=e.size();
    for (auto h : e){ /* ���������� h ����� ��������� ������� �������� � ���������� ������� � ������ � �� ����� ���������� */
        cout<<h.first<<" "<<h.second<<endl; /* {{1, b},{2, h},{3, t},{5, v}} */
    }

    cout<<endl;
    map <int, char>::iterator went;
    for (went=e.begin();went!=e.end();went++){ /* �������� ������ ������� map(� ������ � ���������) � ������� ��������� */
        cout<<went->first<<" "<<went->second<<endl;
    }

    cout<<endl;
    map <int, string> g{ /* Map � ������� ������������ ���������� */
        {11,"drink"},
         {10,"food"},
         {12,"air"}
        };
    map <int,string>::iterator door;
    for (door=g.begin();door!=g.end();door++){
        cout<<door->first<<"\t"<<door->second<<"\n";
    }

    cout<<"Stack"<<endl;
    stack <int> h; /* Stack ��������� ������ ����������� �� �������� last-in-first-out, ��������� ����������� ������� ��������� ������ */
    h.push(11);
    h.push(6); /* ���������� ��������� */
    h.push(3);
    h.pop(); /* ������� ���������, �� ���� 3 */
    cout<<h.top(); /* ������� ���������, �� ���� 6 */

    cout<<endl;
    h.push(4);
    h.push(8);
    h.push(5);
    while (!h.empty()){ /* 5,8,4,6,11 */ /* ���� �� ������ */
        cout<<h.top()<<" ";
        h.pop();
    }

    cout<<endl<<"Queue"<<endl;
    queue <char> i; /* Queue ��������� ������ ����������� �� �������� first-in-first-out, ������ ����������� ������� ��������� ������ */
    i.push('q');
    i.push('a');
    i.push('c');
    i.pop(); /* ������� ������ ������� */
    cout<<i.front();

    cout<<endl<<"Pair"<<endl;
    string slow="abcd";
    int fast=11;
    pair <string, int> j(slow,fast); /* Pair ��������� ������� ������ � ���� ��� ��������� ����� ����� ������ */
    cout<<j.first<<" "<<j.second; /* abcd, 11 */

    cout<<endl;
    vector <pair<char, int>> k{{'g',99},{'z',100}}; /* Pair ��������� ������ ������� �������� ��� ������ ������� ������� �������� � ���� ��� ��� �������� */
    k.push_back({'b',13});
    k.push_back({'a',9});
    for (int i=0;i<k.size();i++){
        cout<<k[i].first<<" "<<k[i].second<<endl;
    }

    vector<pair<char, int>>::iterator pool;
    for (pool=k.begin();pool!=k.end();pool++){
        cout<<pool->first<<" "<<pool->second<<endl;
    }

    cout<<endl;
    map <string, pair<int, int>> l; /* Pair ��������� � �������� map, �������� map �������� ��� �������� */
    l.insert({"look", {15,7}});
    l.insert({"king", {41,2}});
    l.insert({"fine", {19, 22}});
    map <string, pair<int, int>>::iterator hold;
    for (hold=l.begin();hold!=l.end();hold++){
        cout<<hold->first<<" "<<hold->second.first<<" "<<hold->second.second<<endl;
    }

    cout<<endl;
    map <pair<string, char>, pair<int, int>> m{{{"efgh",'w'},12},{{"efgh",'r'},33}}; /* Pair ��������� � ���� � �������� map, � ���� � �������� �������� ��� ��������, ���� ����������� ������� �� �������, ����� �� ������� ��������, ���� � ������ � ������ ������� ����� ���� ������ map ����� ���������� �� �������� �������� map ���������� �� ����� */
    m.insert({{"ball",'q'},{33,21}});
    m.insert({{"feel",'e'},{9,55}});
    if (m.count({"efgh",'w'})){
        cout<<"YES"<<endl;
    }
    map <pair<string, char>, pair<int, int>>::iterator tree;
    for (tree=m.begin();tree!=m.end();tree++){
        cout<<tree->first.first<<" "<<tree->first.second<<" "<<": "<<tree->second.first<<" "<<tree->second.second<<endl;
    }

    vector <pair<pair<int, int>,pair<int, int>>> p; /* ������ � ����� ������ pair, ������� � ���� ������� ������ ��� ��� ��������� pair */
    p.push_back({{1,2},{3,4}});
    cout<<p[0].first.first<<" "<<p[0].first.second<<" "<<p[0].second.first<<" "<<p[0].second.second;



	return 0;
}
