#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int c,d;
    cin >> a >>b >> c >>d;
    if(a == c){
        if(b > d){
            cout << "A";
        }else {
            cout << "B";
        }
    }else if(a >c){
        cout << "A";
    }else{
        cout << "B";
    }
    return 0;
}