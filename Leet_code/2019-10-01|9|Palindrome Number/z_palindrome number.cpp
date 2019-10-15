#include <iostream>

int in = 123;

bool isPalindrome(int x) {
    if(x < 0) return false;   //所有负数 回文后 都不可能为true   -121 ——> 121-
    int res = 0;
    int quotient = x;
    while(quotient != 0){
        int pop = quotient % 10;
        quotient = quotient / 10;     //前面已经声明过，此处不需再 'int'
        if(res > INT_MAX / 10 || (res == INT_MAX / 10 && pop > 7))
            return false;
        if(res < INT_MIN / 10 || (res == INT_MIN / 10 && pop < -8))
            return false;
        res = res * 10 + pop;
    }
    return x == res;  // x==res 为真—— 返回bool —— true
}


int main() {
//    std::cout << "Hello, World!" << std::endl;
    auto a = isPalindrome(in);
    return 0;
}