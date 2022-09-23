#include <iostream>
using namespace std;

int countDigit(int n) {
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

void countDigit(string c) {
    countDigit( c );
}

int main() {
    cout << "숫자 12345의 자릿수는? : " << countDigit(12345) << endl;
    cout << "문자열 12345의 자릿수는? : " << countDigit(12345) << endl;
}