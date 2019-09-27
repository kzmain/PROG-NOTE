#include <iostream>

int input = -321;

int reverse(int x) {
    int result = 0;
    int quotient = x;
    int reminder;
    do{
        reminder = quotient % 10;
        quotient = quotient / 10;
        result = result * 10 + reminder;
    }while((abs(quotient) > 0));
    return result;
}

int main() {
    reverse(input);
    return 0;
}
