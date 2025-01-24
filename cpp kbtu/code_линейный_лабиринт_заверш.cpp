#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
/* Есть линейный лабиринт в котором M комнат, N из них с развилкой. Если войти в комнату с развилкой 1-ый,3-ий,5-ый и т.д. раз, то развилка приведет в начало лабиринта. Посчитать количество комнат которые надо посетить чтобы выйти из лабиринта */
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <pair<int, int>> a;
    for (int i=0;i<m;i++){
        int t;
        cin>>t;
        a.push_back({t,1});
    }
    int j=0;
    int k=0;
    for (int i=1;i<=n;i++){
        if (i==a[j].first){
            if (a[j].second%2==1){
                i=1;
                j=0;
                a[j].second++;
                k++;
                continue;
            }
            else if(a[j].second%2==0){
                j++;
                a[j].second=1;
            }
        }
        k++;
    }
    cout<<k;
    return 0;
}
