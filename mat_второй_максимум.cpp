#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b=a[0][0]; /*Максимум */
    int m; /* Второй максимум */
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]>b){
                m=b;
                b=a[i][j];
            }
            else if(a[i][j]<b && a[i][j]>m){ /* Если элемент больше второго максимума, но меньше максимума */
                m=a[i][j];
            }
        }
    }
    cout<<m;


    return 0;
}
