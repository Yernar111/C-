#include <iostream>
int main(){
    using namespace std;
    int a;
    cin>>a;
    if (a%10==1 && a!=11){
        cout<<a<<" "<<"korova";
    }
    else if ((a%10==2 || a%10==3 || a%10==4)&& a!=12 && a!=13 && a!=14){
        cout<<a<<" "<<"korovy";
    }
    else{
        cout<<a<<" "<<"korov";
    }


    return 0;

}
