#include <iostream>
using namespace std;

int tern(int x,int y){
    return (x>0 ? (y>0 ? 1 : 4 ) : (y>0 ? 2 : 3));
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<tern(x,y);

	return 0;
}
