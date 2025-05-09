#include <iostream>

using namespace std;
int main(){
    int n,i=0,k=0;
    cin>>n;
    while(n!=0){
        if (k==7){
            i++;
            k=0;
            continue;
        }
        if (n%2==0){
            n=n-4;
            i++;
            k++;
        }
        else if(n%2!=0){
            n=n+3;
            i++;
            k++;
        }
    }
    cout<<i<<"k";
    return 0;
}
