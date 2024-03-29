#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    const int DIV = 1000000000;
    const int MAX = 101;
    long D[MAX][10] = {};
    for(int i=1; i<10; i++){ // n이 1일 때 1~9로 끝나는 경우의 수 저장
        D[1][i] = 1;
    }

    for(int i=2; i<n+1; i++){
        for(int j=0; j<10; j++){
            if(j==0) D[i][j] = D[i-1][1]; 
            else if(j == 9) D[i][j] = D[i-1][8];
            else D[i][j] = D[i-1][j-1] + D[i-1][j+1];
            D[i][j] %= DIV;
        }
    }
    
    long res = 0;
    for(int i=0; i<10; i++){
        res += D[n][i];
    }

    cout << res%DIV;
    return 0;
}