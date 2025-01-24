#include <iostream>
/* Является ли количество каждой отдельной буквы одинаковой в двух строках */
using namespace std;
int main(){
	string s,t;
	int k=0,m=0;
	cin>>s>>t;
	for (int i=0;i<s.size();i++){
		k+=int(s[i]);
	}
	for (int i=0;i<t.size();i++){
		m+=int(t[i]);
	}
	if (k==m)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
