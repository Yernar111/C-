#include <iostream>
#include <string>
using namespace std;
int main(){
	string s,t="@gmail.com";
    int n;
    cin>>n;
    for (int q=0;q<n;q++){
        cin>>s;
        string m="";
        for (int i=0;i<s.size();i++){
        if (s[i]!='@')
            m+=s[i];
        else if (s[i]=='@'){
            int j=0;
            for (;j<10;j++){
                if (t[j]!=s[i]){
                    i++;
                    break;
                }
                i++;
            }
            if (j==10 && i==s.size()){
                cout<<m<<endl;
            }
        }
        }

    }

	return 0;
}
