#include <iostream>
#include <set>
#include <string>
#include <vector>
/* Какие символы встречаются во всех N строках */
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <string> strings(N);


    for (int i = 0; i < N; ++i) {
        cin>>strings[i];
    }

    set <char> commonChars(strings[0].begin(), strings[0].end());

    for (int i = 1; i < N; ++i) {
        set<char> currentChars(strings[i].begin(), strings[i].end());

        set<char> intersection;
        for (char ch : commonChars) {
            if (currentChars.count(ch) > 0) {
                intersection.insert(ch);
            }
        }
        commonChars = intersection;
    }
    if (commonChars.size()==0){
        cout<<"NO COMMON CHARACTERS";
        return 0;
    }

    for (char ch : commonChars) {
        cout << ch << ' ';
    }

    return 0;
}
