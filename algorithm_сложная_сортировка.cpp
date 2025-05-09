#include <bits/stdc++.h>
using namespace std;
/* Есть количество строк, первое число каждой строки описывает длину строки не считая первое число, отсортировать строки сначала по сумме чисел в строке, если они равны тогда по размеру строки, если они равны то по соответствующим элементам строки */
int check(vector <int> a){
    int n=0;
    for (int i=0;i<a.size();i++){
        n+=a[i];
    }
    return n;
}

int main(){
    int n;
    cin>>n;
    vector <vector<int> > a;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        vector <int> b;
        for (int j=0;j<m;j++){
            int k;
            cin>>k;
            b.push_back(k);
        }
        a.push_back(b);
    }
    sort(a.begin(),a.end(),[](vector <int> e,vector <int> f){
        int c=check(e);
        int d=check(f);
        if (c==d){
            if(e.size()==f.size()){
                return e.at(0)<f.at(0);
            }
            return e.size()<f.size();
        }
        return c<d;
    });
    vector <vector<int> >::iterator g;
    vector <int>::iterator h;
    for (auto g : a){
        for (auto h : g){
            cout<<h<<" ";
        }
        cout<<endl;
    }

    return 0;

}
