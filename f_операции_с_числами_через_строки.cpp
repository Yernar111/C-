#include <iostream>
#include <string>
#include <cmath>
/* Вывести результат сложения,вычитания или умножения через строки */
using namespace std;

char sign(string s){
    for (int i=0;i<s.size();i++){
        if (s[i]=='+')
            return '+';
        else if(s[i]=='*')
            return '*';
        else if(s[i]=='-')
            return '-';
    }
}

int num_of_digits(string s, int g, int n){
    if (s[g]=='+' || s[g]=='*' || s[g]=='-')
        return n;
    return num_of_digits(s,g+3,n+1);
}

int sec_num_of_digits(string s, int g, int n){
    if (g==s.size())
        return n;
    return sec_num_of_digits(s,g+3,n+1);
}

int main(){
	string s;
    char operation;
    cin>>s;
    string a[]={"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};
    operation=sign(s); /* Проверяем какую операцию делать */
    int p=num_of_digits(s,0,-1); /* p количество цифр в первом числе */
    int i=0;
    int k=0; /* строка до операции в виде числа */
    while (s[i]!='+' && s[i]!='*' && s[i]!='-'){
        string t=""; /* в строку t вводим цифры в виде строки до знака */
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
    p=sec_num_of_digits(s,i,-1); /* после знака опять считаем количество цифр уже во втором числе */
    int w=0; /* строка после операции в виде числа */
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
    int final_number; /* Число получившееся после операции */
    final_number=operation=='+' ? k+w : operation=='*' ? k*w : k-w;

    int f=final_number,count=0; /* количество цифр в финальном числе */
    while (f!=0){
        count++;
        f=f/10;
    }
    string str_number[count]; /* В новом массиве количество элементов соответствует количеству цифр в числе */
    int str_element=0;

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
