#include <iostream>

using namespace std;

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    if(a<=31 && b<=12 && a>=1 && b>=1){
        if ((n%4==0 && n%100!=0) || n%400==0){
            if (b==4 || b==6 || b==9 || b==11){
                if (a<=30)
                    cout<<"yes";
                else{
                    cout<<"no";
                }
            }
            else if (b==2 && a>=30){
                cout<<"no";
            }
            else{
                cout<<"yes";
            }
        }
        else{
            if (b==4 || b==6 || b==9 || b==11){
                if (a<=30)
                    cout<<"yes";
                else{
                    cout<<"no";
                }
            }
            else if (b==2 && a>=29){
                cout<<"no";
            }
            else{
                cout<<"yes";
            }
        }
    }

    else{
        cout<<"no";
    }
    return 0;
}
