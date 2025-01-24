#include <iostream>
#include <set>
#include <string>
#include <vector>
/* Найти и вывести уникальные пароли в которых содержатся большие и маленькие буквы и цифры */
using namespace std;
int main(){
    set <string> a;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        string m;
        cin>>m;
        a.insert(m);
    }
    set <string> f;
    int num=0;
    for (auto i : a){
        int b=0,c=0,d=0;
        for (int j=0;j<i.size();j++){
            if (i[j]>=65 && i[j]<=90)
                b++;
            else if(i[j]>=97 && i[j]<=122)
                c++;
            else if(i[j]>='0' && i[j]<='9')
                d++;

        }
        if (b>0 && c>0 && d>0){
            num++;
            f.insert(i);
        }
    }
    cout<<num<<endl;
    for (auto i : f){
        cout<<i<<endl;
    }
    return 0;
}
