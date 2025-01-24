#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a,a+n);
    int mid=n/2;

    int start=0,finish=n;
    while(start<=finish){
        if (a[mid]==k){
            cout<<mid;
            return 0;
        }
        else if (k>a[mid]){
            start=mid+1;
        }
        else{
            finish=mid-1;

        }
        mid=(finish+start)/2;
    }
    cout<<"NO";


	return 0;
}

