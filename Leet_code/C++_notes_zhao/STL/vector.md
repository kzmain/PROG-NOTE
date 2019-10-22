#vector : is an ordered list of items of a given data type
使用时需添加： #include <vector>

1. 格式/ declaration： vector<datatype> vectorName;
2. 调用里面的参数： （以数组的格式）：vectorName[0]  或者 vectorName.at(0)/ (1)/ (2)/ ...  
3. 获取其长度可用：vectoeName.size()
4. initialization: 
  1) Ex: vector<int> myVector(3, -1); creates a vector named myVector with three elements, each with value -1.
  2) Ex: vector<int> carSales = {5, 7, 11}; creates a vector of three integer elements initialized with values 5, 7, and 11. 
5. 给vector添加新元素：push_back
  Ex: dailySales.push_back(521) creates a new element at the end of the vector dailySales and assigns that element with the value 521.

6. resize      -26
  ex: `nums.resize(offset + 1)`

  
  Appendix: https://www.geeksforgeeks.org/vector-in-cpp-stl/
  			http://www.cplusplus.com/reference/vector/vector/resize/