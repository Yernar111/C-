#include <iostream>
#include <string>
#include <map>
#include <set>
/* ������ ������ �������� � N ��������, ������ set �������� ���������� �������� � ��������, ����� ����� ������� ���������� ������ ���� � ��������, get ������ �������� �������� �� �����, ���������� ������ �������� �����, ���� ����� ���� ����, ������� ��������, ����� ������ */
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
