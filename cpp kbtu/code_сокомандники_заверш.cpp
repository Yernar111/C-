#include <iostream>

/* Есть три числа, описывающих колво баллов у каждого члена команды, надо приравнять эти значения за минимальное количество операции, при этом за одну операцию можно увеличить колво балллов только у одного сокомандника и только на 1 или 5  */

using namespace std;
int main(){
    long long n,k,m,q=0;
    cin>>n>>k>>m;

    if (n==k && k==m){
        cout<<0;
        return 0;
    }


    long long g=max(n,max(k,m));
    long long h=min(n,min(k,m));

    long long e=h;
    long long r=g;

    long long s=0,t=1;

    while (s!=t){
        if (g-h>=4){
            h=h+5;
            q++;
        }
        else if(g<h){
            g++;
            q++;
        }
        else{
            h=h+1;
            q++;
        }
        s=max(g,h);
        t=min(g,h);

    }
    long long w;

    if ((n==k && k!=m) || (k==m && m!=n) || (n==m && m!=k)){
        w=e;
    }
    else if (n!=r && n!=e){
        w=n;
    }
    else if (k!=r && k!=e){
        w=k;
    }
    else{
        w=m;
    }
    long long x=0;
    while(s!=w){
        if (s-w>=4){
            w=w+5;
            q++;
        }
        else if(s<w){
            s++;
            x++;
        }
        else{
            w=w+1;
            q++;
        }
    }
    if (s!=t){
        cout<<x*2+q;
    }
    else{
        cout<<q;
    }

    return 0;

}
