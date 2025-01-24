#include <iostream>
#include <vector>
#include <cmath>
/* ƒаетс€ два числа N и K. –азмер матрицы и количество мест в автобусе. јвтобус едет по маршруту слева направо по каждой строке, на a[i][j] €чейке стоит пассажир который хочет добратьс€ от i строки до j строки(i<j). Ќайти количество заходов которые должен сделать автобус чтобы каждый пассажир добралс€ до своего места. ƒругими словами, пока все элементы матрицы не будут 0 */
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int c=1;
    int q;
    while (true){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (k!=0 && a[i][j]!=0){
                if (a[i][j]>=k){
                    a[i][j]=a[i][j]-k;
                    k=0;
                }
                else if(a[i][j]<k){
                    a[i][j]=0;
                    k=k-a[i][j];
                }
            }

        }

    }

    k=a[i][i+c];
    c++;
    }

    return 0;
}
