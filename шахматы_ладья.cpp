#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    int b,y;
    string a,x;
    cout<<"¬ведите позицию на котором будет сто€ть ладь€: "<<endl;
    cin>>a>>b;
    cout<<"¬ведите еще одну позицию: "<<endl;
    cin>>x>>y;
    if (a==x || b==y){
        cout<<"Ћадь€ может попасть на эту позицию";
    }
    else{
        cout<<"Ћадь€ не может попасть на эту позицию";
    }


}
