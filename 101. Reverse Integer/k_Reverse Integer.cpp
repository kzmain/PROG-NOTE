#include <iostream>

int input = 123;

int reverse(int x) {
    int result = 0;
    int quotient = x;
    int reminder;
    do{
        reminder = quotient % 10;
        quotient = quotient / 10;
        if(reminder == 0) break;
        result = result * 10 + reminder;
    }while(reminder != 0);
    std::cout<<result<<std::endl;
    return result;
}

int main() {
    reverse(input);
    return 0;
}
