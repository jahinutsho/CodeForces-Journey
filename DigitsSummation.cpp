#include<iostream>
using namespace std;

int main() {
    
    long long N,M;
    cin >> N >> M;

    int last_digit_N = N%10;
    int last_digit_M = M%10;
    cout << last_digit_N+last_digit_M <<endl;
    return 0;}
    
