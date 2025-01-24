#include <iostream>
using namespace std;
/* Если число четное: n/2, если нечетное: 3n+1. Посчитать длину рекурсивной последовательности */
int check(int n, int i){
    if (n==1)
        return i;
    if (n%2==1)
        return check(3*n+1, i+1);
    return check(n/2,i+1);
}

int main(){
    int n;
    cin>>n;
    cout<<check(n,1);

    return 0;
}
