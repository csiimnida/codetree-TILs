#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    double c;
    cin >> a >> b;
    c = (a+b)%(a-b);
    cout << (a+b)/(a-b);
    cout << fixed;
    cout.precision(4);
    cout <<c;
    return 0;
}