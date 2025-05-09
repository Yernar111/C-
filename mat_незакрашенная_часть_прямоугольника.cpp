#include <iostream>
#include <algorithm>
#include <string>
/* x1,y1 и x2,y2 являются координатами левого нижнего и правого верхнего угла закрашенного прямоугольника на координатной плоскости, w и h являются шириной и высотой всего прямоугольника, n колво закрашенных прямоугольников */
using namespace std;

int main(){
    int w,h,n;
    cin>>w>>h>>n;
    int a[100][100]={0};
    int x1,y1,x2,y2;
    for (int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        for (int j=y1;j<y2;j++){
            for (int m=x1;m<x2;m++){
                a[j][m]=1;
            }
        }
    }
    int q=0;
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            if (a[i][j]==0){
                q++;
            }
        }
    }
    cout<<q;

    return 0;
}
