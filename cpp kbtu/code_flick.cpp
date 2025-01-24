#include <iostream>
using namespace std;

int j=1;
string comb(string s){
    if (s=="flick"){
        j=j^1;
        if (j==1){
            return "True";
        }
        else{
            return "False";
        }
    }
    else{
        if (j==1){
            return "True";
        }
        else{
            return "False";
        }
    }
}

int main(){
    string s;
    while(cin>>s){
        cout<<comb(s);
    }

	return 0;
}
