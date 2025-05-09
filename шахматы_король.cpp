#include <iostream>
int main(){
    using namespace std;
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if ((abs(a-x)==1 || abs(a-x)==0) && (abs(b-y)==1 || abs(b-y)==0)){
            cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;

}
