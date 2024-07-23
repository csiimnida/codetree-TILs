#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    double c;
    cin >> a >> b;
    c = (10000*b)/(a* a);
    cout << fixed;
    cout.precision(1);
    cout << c;
    if(c >= 25){
        cout << "\nobesity";
    }
    return 0;
}