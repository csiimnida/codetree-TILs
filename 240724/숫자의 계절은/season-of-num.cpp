#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if (a >= 3 && a <=5){
        cout << "봄";
    }else if (a >= 6 && a <=8){
        cout << "여름";
    }else if (a >= 9 && a <=11){
        cout << "가을";
    }else if (a >= 12 && a <=2){
        cout << "겨울";
    }
    return 0;
}