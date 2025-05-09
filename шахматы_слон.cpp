#include <iostream>
int main(){
    using namespace std;
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if (abs(a-x)==abs(b-y)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;

}
