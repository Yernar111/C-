#include <iostream>
using namespace std;

char func(char c){
    if (c>='a' && c<='z'){
        return char(c-32);
    }
    else{
        return c;
    }

}

int main(){
    char c;
    cin>>c;
    cout<<func(c);

    return 0;
}

