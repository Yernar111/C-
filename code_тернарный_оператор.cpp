#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<(x>y ? (x>z ? (x):(z)):(z>y ? (z):(y)));

	return 0;
}
