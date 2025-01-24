#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double p=(a+b+c)/2.0;
    double s,t;
    t=p*(p-a)*(p-b)*(p-c);
    s=pow(t,0.5);
    cout<<fixed<<setprecision(2)<<s;


    return 0;
}
