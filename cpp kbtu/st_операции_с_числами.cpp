#include <iostream>
#include <string>
#include <cmath>
/* ������� ��������� ��������,��������� ��� ��������� ����� ������ */
using namespace std;
int main(){
	string s;
    char operation;
    cin>>s;
    string a[]={"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};
    /* ��������� ����� �������� ������ */
    for (int i=0;i<s.size();i++){
        if (s[i]=='+'){
            operation='+';
            break;
        }
        else if (s[i]=='*'){
            operation='*';
            break;
        }
        else if(s[i]=='-'){
            operation='-';
            break;
        }
    }
    /* p ���������� ���� � ������ ����� */
    int p=-1;
    int g=0;
    while (s[g]!='+' && s[g]!='*' && s[g]!='-'){
        p++;
        g+=3;
    }
    int i=0;
    int k=0; /* ������ �� �������� � ���� ����� */
    while (s[i]!='+' && s[i]!='*' && s[i]!='-'){
        string t="";
         /* � ������ t ������ ����� � ���� ������ �� ����� */
        for (int j=0;j<3;j++){
            t+=s[i+j];
        }
        for (int q=0;q<10;q++){
            if (t==a[q]){
                k+=q*pow(10,p);
                p--;
                break;
            }
        }
        i+=3;
    }
    i++;
    p=-1;
    for (int g=i;g<s.size();g=g+3){
        p++;
    }
    /* ����� ����� ����� ������� ���������� ���� ��� �� ������ ����� */
    int w=0; /* ������ ����� �������� � ���� ����� */
    for (;i<s.size();i=i+3){
        string t="";
        for (int j=0;j<3;j++){
            t+=s[i+j];
        }
        for (int q=0;q<10;q++){
            if (t==a[q]){
                w+=q*pow(10,p);
                p--;
                break;
            }

        }
    }
    int final_number; /* ����� ������������ ����� �������� */
    if (operation=='+')
        final_number=k+w;
    else if(operation=='*')
        final_number=k*w;
    else
        final_number=k-w;

    int f=final_number,count=0; /* ���������� ���� � ��������� ����� */
    while (f!=0){
        count++;
        f=f/10;
    }
    string str_number[count];
    int str_element=0;
    /* � ����� ������� ���������� ��������� ������������� ���������� ���� � ����� */

    while(final_number!=0){
        str_number[str_element]=a[final_number%10];
        str_element++;
        final_number/=10;
    }
    for (int i=count-1;i>=0;i--){
        cout<<str_number[i];
    }

	return 0;
}
