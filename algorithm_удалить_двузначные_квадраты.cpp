#include <bits/stdc++.h>
/* Есть строка состоящая из цифр, если две последовательные цифры образуют двузначный квадрат(16,25 и т.д.), то надо удалить эти цифры из строки, затем еще раз проверить строку на наличие такой последовательности, если в строке останутся цифры после всех операции то надо вывести эти цифры в обратном порядке */
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
