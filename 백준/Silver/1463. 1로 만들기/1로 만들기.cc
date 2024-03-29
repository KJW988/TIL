#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int D[n+1];
    D[1] = 0;
 
    for(int i = 2; i < n+1; i++){
        D[i] = D[i-1] + 1;
        if(i%2 == 0) D[i] = min(D[i], D[i/2]+1);
        if(i%3 == 0) D[i] = min(D[i], D[i/3]+1);
    }

    cout << D[n];
    return 0;
}