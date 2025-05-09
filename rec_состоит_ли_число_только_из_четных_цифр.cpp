#include <iostream>
#include <algorithm>
using namespace std;

string valid(int a){
    if (a==0)
        return "Valid";

    else if (a%2!=0)
        return "Not valid";

    return valid(a/10);
}

int main(){
    int n;
    cin>>n;
    cout<<valid(n);

	return 0;
}

