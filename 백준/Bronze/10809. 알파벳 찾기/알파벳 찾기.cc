#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(char i=97; i<123; i++){
        cout << (int) s.find(i) << ' ';
    }

    return 0;
}