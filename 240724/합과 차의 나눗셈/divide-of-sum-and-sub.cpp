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
        int a, b;
    
    // Read input
    std::cin >> a >> b;
    
    // Calculate sum and difference
    int sum = a + b;
    int diff = a - b;
    
    // Calculate the result of sum divided by diff to two decimal places
    double result = static_cast<double>(sum) / diff;
    
    // Output the result formatted to two decimal places
    std::cout << std::fixed << std::setprecision(2) << result << std::endl;
    return 0;//13/7
}