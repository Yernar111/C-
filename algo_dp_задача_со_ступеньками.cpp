#include <bits/stdc++.h>
using namespace std;
/* ���� �������� � n �����������, �� ��� ����� ����������� �� k ��������. ������� ���� �������� ��������� �� ����� ��������? */
int main(){
    int n,k;
    cin>>n>>k;
    int dp[n+1]={};
    dp[0]=1; /* ����� �������� ��������� �� 0 ��������� ����� 1 */
    for (int i=1;i<=n;i++){
        int h=min(i,k);
        for (int j=1;j<=h;j++){
            dp[i]+=dp[i-j]; /* ����� �������� ��������� �� i-��� ���������: dp[i-1] + dp[i-2] + ... + dp[i-k] */
        }
    }
    cout<<dp[n];


    return 0;
}
