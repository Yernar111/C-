#include <iostream>
using namespace std;
int main(){
    int n,w=1;
    cin>>n;
    for (int j=n;j>0;j--){
        for (int i=1;i<=j;i++){
            if (i==j){ /* ���� ������� �� �������� */
                for (int q=0;q<w;q++){ /* ������� ���������� ��������� */
                    cout<<"*";
                }
                w=w+2; /* ���������� ��������� ����������� �� 2, ����� ��������� ����������� */
                for (int k=1;k<j;k++){ /* ������� ���������� ���������� ����� */
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
