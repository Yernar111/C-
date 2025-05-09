#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
/* Дается N студентов и дни в которые они пришли на занятие, для каждого студента если присутсвовал как минимум в 3 разных днях надо вывести +1, иначе NO BONUS. */
using namespace std;

int main(){
    multimap <string, int> a;
    int n;
    cin>>n;
    int c;
    string b;
    cin>>b>>c;
    a.insert({b,c});
    map <string, string> d;
    d[b]="NO BONUS";
    for (int i=1;i<n;i++){
        cin>>b>>c;
        int k=1;
        int u=0;
        if (a.count(b)>0){
            multimap <string, int>::iterator cloud;
            for (cloud=a.begin();cloud!=a.end();cloud++){
                cloud->first!=b ?  true : cloud->second!=c  ? k++ : u++;
            }
            if (k>2){
                d[b]="+1";
            }
        }
        if (k<=2){
            d[b]="NO BONUS";
        }
        if (u>0){ /* u нужен чтобы проверить существует ли уже в контейнере точно такие же значения, если существуют то мы не будем их добавлять */
            continue;
        }
        a.insert({b,c});

    }
    map <string, string>::iterator ice;
    for (ice=d.begin();ice!=d.end();ice++){
        cout<<ice->first<<" "<<ice->second<<endl;
    }

    return 0;
}
