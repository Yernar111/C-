#include <iostream>
/* Если символ встречается в строке 1 раз, вывести индекс, если больше одного раза, вывести индекс первого и последнего */
using namespace std;

int main(){
    string s;
    char c;
    cin>>s>>c;
    int k=0,m;
    for (int i=0;i<s.size();i++){
        if (c==s[i]){
            k++;
            m=i;
        }
    }
    if (k==1){
        cout<<m;
    }
    else if(k>1){
        for (int i=0;i<s.size();i++){
            if (c==s[i]){
                cout<<i<<" "<<m;
                break;
            }
        }
    }

	return 0;
}
