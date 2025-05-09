#include <iostream>
#include <string>

using namespace std;
int main(){
	string s;
    cin>>s;
    char c=s[0];
    int m=1;
    for (int i=1;i<s.size();){
        int k=1;
        if (s[i]==s[i-1]){
            while(s[i]==s[i-1] && i<s.size()){
                k++;
                i++;
            }
            if (k>m){
                m=k; /* Максимальное количество одинаковых букв */
                c=s[i-1]; /* Какая это буква */
            }
        }
        else{
            i++;
        }
    }
    cout<<c<<" "<<m;

	return 0;
}
