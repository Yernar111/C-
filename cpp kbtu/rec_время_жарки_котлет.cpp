#include <iostream>
/* Время которое уходит на жарку котлет */
using namespace std;

int time_to_cook(int n,int m,int k,int t){
    if (n<=0){
        return t;
    }
    return time_to_cook(n-m,m,k,t+2*k);
}

int main(){
    int num_of_meat,num_of_space,time;
    cin>>num_of_meat>>num_of_space>>time;
    cout<<time_to_cook(num_of_meat,num_of_space,time,0);


    return 0;
}
