#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
/* Вывести список студентов которые набрали больше всего процентов в порядке убывания */
using namespace std;
int main(){
    int num_of_students;
    map <string, int> list_of_students;
    cin>>num_of_students;
    string name_of_student;
    int points;
    double sum;
    cin>>name_of_student>>points;
    list_of_students[name_of_student]=points;
    sum=points;
    for (int i=1;i<num_of_students;i++){
        cin>>name_of_student>>points;
        sum+=points;
        if (list_of_students.count(name_of_student)>0){
            points+=list_of_students[name_of_student];
        }
        list_of_students[name_of_student]=points;
    }
    multimap <double, string> d;
    multimap <string, int>::iterator cool;
    for (cool=list_of_students.begin();cool!=list_of_students.end();cool++){
        d.insert({cool->second/sum*100, cool->first});
    }
    vector <string> f;
    vector <double> g;
    map <double, string>::iterator hand;
    for (hand=d.begin();hand!=d.end();hand++){
        g.push_back(hand->first);
        f.push_back(hand->second);
    }
    for (int i=g.size()-1;i>=0;i--){
        cout<<f[i]<<" "<<g[i]<<"%"<<endl;
    }

    return 0;
}
