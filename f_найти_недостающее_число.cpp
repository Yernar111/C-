#include <iostream>
/* В массиве из натуральных уникальных чисел надо найти n-ное недостающее число для непрерывной последовательности*/
using namespace std;

int find_id(int a[],int m, int i){
    int b[1000]={0};
    for (int j=0;j<i;j++){
        b[a[j]]++;
    }
    int k=0,j=1;
    while (k!=m){
        if (b[j]==0)
            k++;
        j++;
    }
    return j-1;

}

int main(){
    int i=0;
    int a[1000]={0};
    while(cin>>a[i]){
        i++;
    }
    int m=a[i-1];
    a[i-1]=0;
    cout<<find_id(a,m,i-1);

    return 0;
}
