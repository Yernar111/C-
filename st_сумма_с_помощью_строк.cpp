#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	string s;
    int k=0,p=-1,w=0,e=-1;
    cin>>s;
    string a[]={"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};
    for (int g=0;s[g]!='+';g=g+3){
        p++;
    }
    int i=0;
    for (;s[i]!='+';i=i+3){
        string t="";
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
    }
    i++;
    for (int g=i;g<s.size();g=g+3){
        e++;
    }
    for (;i<s.size();i=i+3){
        string t="";
        for (int j=0;j<3;j++){
            t+=s[i+j];
        }
        for (int q=0;q<10;q++){
            if (t==a[q]){
                w+=q*pow(10,e);
                e--;
                break;
            }
        }
    }
    int z=w+k;

    int f=z,count=0;
    while (f!=0){
        count++;
        f=f/10;
    }
    string x[count];
    int abc=0;

    while(z!=0){
        x[abc]=a[z%10];
        abc++;
        z=z/10;
    }
    for (int i=count-1;i>=0;i--){
        cout<<x[i];
    }


	return 0;
}
