#include <bits/stdc++.h>

using namespace std;

void check(int a[], int m){ /* указываем в параметре тип данных и название массива с скобкой */
    for (int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<m;
    return;
}

void check2(vector <int> b, int n){
    for (int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return;
}

void check3(set <int> a, set <int>::iterator b){
    for (b=a.begin();b!=a.end();b++){
        cout<<*b<<" ";
    }
    return;
}

void check4(map <string, int> a){
    map <string, int>::iterator b;
    for (b=a.begin();b!=a.end();b++){
        cout<<b->first<<" "<<b->second<<endl;
    }
    return;
}

int main(){
	int a[]={1,2,3,4,5,6};
	int m=sizeof(a)/sizeof(a[0]); /* Размер массива это суммарное количество байтов деленное на количество байтов в одном элементе*/
	check(a,m); /*Вызываем функцию с названием массива */

    cout<<endl;
	vector <int> b{7,8,9};
	check2(b,b.size());

	cout<<endl;
	set <int> c{4,2,4,3,1};
	set <int>::iterator give;
	check3(c,give); /* Функция с итератором в аргументе */

	cout<<endl;
	map <string, int> d{{"abcd", 12},{"efgh",13}};
    check4(d);

    cout<<endl;


	return 0;
}
