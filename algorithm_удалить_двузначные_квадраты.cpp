#include <bits/stdc++.h>
/* ���� ������ ��������� �� ����, ���� ��� ���������������� ����� �������� ���������� �������(16,25 � �.�.), �� ���� ������� ��� ����� �� ������, ����� ��� ��� ��������� ������ �� ������� ����� ������������������, ���� � ������ ��������� ����� ����� ���� �������� �� ���� ������� ��� ����� � �������� ������� */
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> a;
    a.push(s[0]);
    for (int i=1;i<s.size();i++){
        a.push(s[i]);
        if (a.size()>1){
            char b=a.top();
            a.pop();
            char c=a.top();
            int k=(int(c-48)*10)+(int(b-48));
            if (sqrt(k)==int(sqrt(k))){
                a.pop();
            }
            else{
                a.push(b);
            }
        }
    }
    if (a.size()>0){
        while(!a.empty()){
            cout<<a.top();
            a.pop();
        }
    }
    else{
        cout<<"Stack is empty";
    }

    return 0;

}
