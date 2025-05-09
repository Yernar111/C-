#include <iostream>
#include <string>
#include <map>
#include <set>
/* Вывести только те числа у которых есть пары (ровно 2 одинаковых числа) */
using namespace std;
int main(){
    map <int, int> a;
    int n;
    while (cin>>n){
        if (a.count(n)>0){
            if (a[n]==n){
                a.erase(n);
            }
            else{
                a[n]=n;
            }
        }
        else{
            a.insert({n,0});
        }
    }


    map <int, int>::iterator kill;
    for (kill=a.begin();kill!=a.end();kill++){
        if (kill->second==0){
            a.erase(kill->first);
            kill++;
            continue;
        }
        cout<<kill->first<<" "<<kill->second<<endl;
    }

    return 0;
}
