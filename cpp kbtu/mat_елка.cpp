#include <iostream>
using namespace std;
int main(){
    int n,w=1;
    cin>>n;
    for (int j=n;j>0;j--){
        for (int i=1;i<=j;i++){
            if (i==j){ /* Если доходим до середины */
                for (int q=0;q<w;q++){ /* Выводим количество звездочек */
                    cout<<"*";
                }
                w=w+2; /* Количество звездочек увеличиваем на 2, чтобы получился треугольник */
                for (int k=1;k<j;k++){ /* Выводим оставшееся количество точек */
                    cout<<".";
                }
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }

    return 0;
}
