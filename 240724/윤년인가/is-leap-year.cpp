#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if(a % 4 == 0){
        cout << "true";
    }else {
        if(a % 100 == 0 && a % 400 != 0){
        cout << "true";

        }else {
        cout << "false";

        }
    }
    return 0;
}