#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s; 

    set<string> arr; //str 저장할 set 선언 

    string str = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            str += s[j];
            arr.insert(str); //str을 저장하기
        }
        str = "";
    }

    cout << arr.size();
}
