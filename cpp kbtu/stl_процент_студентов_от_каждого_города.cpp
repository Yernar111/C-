#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
/* Дается число N(количество дней) и N чисел(a[1],a[2]...,a[n]), a[i] число означает колво студентов пришедших из разных городов в i-тый день. Вычислить процент студентов от каждого города */
int main(){
    int n;
    map <string, double> a;
    cin>>n;
    double t=0; /* Общее колво студентов */
    for (int i=0;i<n;i++){
        int m;
        string s; /* Название города */
        double k; /* Колво студентов из этого города */
        cin>>m;
        for (int j=0;j<m;j++){
            cin>>s>>k;
            if (a.count(s)>0){
                a[s]=k+a[s];
            }
            else{
                a[s]=k;
            }
            t+=k;
        }
    }
    map <string, double>::iterator b;
    for (b=a.begin();b!=a.end();b++){
        cout<<b->first<<" "<<(b->second/t)*100.0<<endl;
    }

	return 0;
}
