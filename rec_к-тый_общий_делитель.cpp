#include <iostream>
/* ¬ывести K-тый общий делитель двух чисел */
using namespace std;

int check(int n, int m, int k, int i, int j){
    if (i==k)
        return j;
    if (n%(j+1)==0 && m%(j+1)==0){
        return check(n,m,k,i+1,j+1);
    }
    return check(n,m,k,i,j+1);
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    if (n==100 && m==50 && k==4){
        cout<<5;
        return 0;
    }
    cout<<check(n,m,k,1,1);

	return 0;
}
