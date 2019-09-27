# Reverse Integer intro:
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
```
Input: 123
Output: 321
```
Example 2:
```
Input: -123
Output: -321
```
Example 3:
```
Input: 120
Output: 21
```
# Reverse Integer notes:
没有特别的笔记 挺简单的？（打脸了，没考虑溢出）
1. MAX_INT = 2,147,483,647
但其反整数 R_MAX_INT (746,384,741,2)>>MAX_INT 不能够储存在int中 

# Appendix
https://leetcode.com/problems/reverse-integer/