#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if (a >= 100){
        cout << "pass"; 
    }else{
        cout << 100 - a << " more score";
    }
    return 0;
}