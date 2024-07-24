#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    /*double a,b;
    double c,d;
    cin >> a >> b;
    c = (a+b)/(a-b);
    d = (a+b)%(a-b);
    cout << fixed;
    cout.precision(4);
    cout << c;*/
    double a, b;
    
    // Read input
    cin >> a >> b;
    
    // Calculate the result of (a + b) divided by (a - b)
    double c = (a + b) / (a - b);
    
    // Output the result formatted to four decimal places
    cout << fixed;
    cout.precision(2);
    cout  << c << endl;
    return 0;//13/7
}