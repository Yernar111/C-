#include <iostream>
#include <string>
#include <map>
#include <set>
/* Дается пустой документ и N запросов, запрос set означает добавление элемента в документ, после этого запроса необходимо ввести ключ и значение, get значит получить значение по ключу, необходимо ввести название ключа, если такой ключ есть, вывести значение, иначе ошибку */
using namespace std;
int main(){
    int n;
    cin>>n;
    map <string, string> a;
    string s,t,m,g;
    for (int i=0;i<n;i++){
        cin>>s;
        if (s=="set"){
            cin>>s>>t;
            a[s]=t;
        }
        else if (s=="get"){
            cin>>s;
            if (a.count(s)>0){
                cout<<a[s]<<endl;
            }
            else{
                cout<<"KE: no key "<<s<<" found in the document"<<endl;
            }
        }
    }

    return 0;
}
