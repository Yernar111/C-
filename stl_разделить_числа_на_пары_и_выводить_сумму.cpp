#include <iostream>
#include <vector>
#include <algorithm>
/* –азделить числа на пары по принципу: первый с последним, второй с предпоследним и т.д и вывести сумму каждой пары */
using namespace std;

int main(){
    int n=1;
    vector <int> b;
    while (n!=0){
        cin>>n;
        b.push_back(n);
    }
    b.pop_back();
    int i=0;
    for (;i<b.size()/2;i++){
        cout<<b[i]+b[b.size()-1-i]<<" ";
    }
    if(b.size()%2==1){
        cout<<b[i];
    }
    return 0;
}
