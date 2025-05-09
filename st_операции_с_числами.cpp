#include <iostream>
#include <string>
#include <cmath>
/* Вывести результат сложения,вычитания или умножения через строки */
using namespace std;
int main(){
	string s;
    char operation;
    cin>>s;
    string a[]={"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};
    /* Проверяем какую операцию делать */
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
    /* p количество цифр в первом числе */
    int p=-1;
    int g=0;
    while (s[g]!='+' && s[g]!='*' && s[g]!='-'){
        p++;
        g+=3;
    }
    int i=0;
    int k=0; /* строка до операции в виде числа */
    while (s[i]!='+' && s[i]!='*' && s[i]!='-'){
        string t="";
         /* в строку t вводим цифры в виде строки до знака */
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
    /* после знака опять считаем количество цифр уже во втором числе */
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
    if (operation=='+')
        final_number=k+w;
    else if(operation=='*')
        final_number=k*w;
    else
        final_number=k-w;

    int f=final_number,count=0; /* количество цифр в финальном числе */
    while (f!=0){
        count++;
        f=f/10;
    }
    string str_number[count];
    int str_element=0;
    /* В новом массиве количество элементов соответствует количеству цифр в числе */

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
