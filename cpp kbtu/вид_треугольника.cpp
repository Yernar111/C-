#include <iostream>
int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    if (a>b && a>c){
        if (a*a<b*b+c*c){
            std::cout<<"acute";
        }
        else if (a*a==b*b+c*c){
            std::cout<<"right";
        }
        else{
            std::cout<<"obtuse";
        }}
    else if (b>a && b>c){
        if (b*b<a*a+c*c){
            std::cout<<"acute";
        }
        else if (b*b==a*a+c*c){
            std::cout<<"right";
        }
        else{
            std::cout<<"obtuse";
        }}
    else if (c>a && c>b){
        if (c*c<a*a+b*b){
            std::cout<<"acute";
        }
        else if (c*c==a*a+b*b){
            std::cout<<"right";
        }
        else{
            std::cout<<"obtuse";
        }}
    else if (a>b+c && b>a+c && c>a+b){
        std::cout<<"impossible";
    }

    return 0;
}
