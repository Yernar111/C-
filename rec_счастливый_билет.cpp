#include <iostream>
using namespace std;
/* Счастливый билет - сумма цифр которого делится на последнюю цифру */
string check(int n, int k, int m){
    if (n/10==0){
        if (k!=0 && m%k==0)
            return "Yes";
        return "No";
    }
    return check(n/10,k,m+(n/10)%10);
}

int main(){
    int n;
    cin>>n;
    cout<<check(n,n%10,n%10);

	return 0;
}

