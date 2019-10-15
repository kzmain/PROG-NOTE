# substring 

1. 参数：两个 pos len
This function takes two values pos and len as an argument and returns a newly constructed string object with its value initialized to a copy of a sub-string of this object. 

Copying of string start from pos and done till pos+len means [pos, pos+len).
从pos开始，到pos+len的位置

2. 注意
1）If pos is equal to the string length, the function returns an empty string.
2）If pos is greater than the string length, it throws out_of_range. If this happen, there are no changes in the string.
3）If for the requested sub-string len is greater than size of string, then returned sub-string is [pos, size()).

3. 举例



Appendix: https://www.geeksforgeeks.org/substring-in-cpp/