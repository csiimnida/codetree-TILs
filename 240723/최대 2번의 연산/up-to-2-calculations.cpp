#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a;
    if (a % 2 == 0){
        a = a/2;
    }else{
        a= (a+1)/2;
    }
    cout << a;
    return 0;
}