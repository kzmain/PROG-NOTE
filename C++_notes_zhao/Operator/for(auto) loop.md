# for(auto ... )     // 67

方法： `for(auto elemt : stl)` 
此情况是iterate STL 按顺序每一位的element
   
1. 常见STL: list, vector, map, set

list, vector, set 使用方法一样, 我们假设声明有元素的list/vector/set 为 demos, 则使用方法为
```
for(auto ELEMENT_NAME: demos){
	ELEMENT_NAME.....
}
```

map较为特殊，因为每一组为key,value对
```
for(auto ELEMENT_NAME: demos){
  ELEMENT_NAME.first //为调取key
  ELEMENT_NAME.second //为调取value
 }
```




Appendix: https://stackoverflow.com/questions/22225148/what-does-for-const-auto-s-strs-mean