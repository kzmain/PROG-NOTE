# Description:
Sort list as required method

# Syntax
- reverse
  If true, the sorted list is reversed (or sorted in Descending order)
- key
  function that serves as a key for the sort comparison

```
VAR_LIST.sort(key=..., reverse=...)
```

# Type:
1. Reverse sort, sort a list in descending order
```
  LIST_NAME.sort(reverse=True) 
```
2. Orderd sort, sort a list in ascending order
```
  LIST_NAME.sort() 
```
4. Sort with compare function
```
def COMPARE_FUNCTION(COMPARE_ELEMENT_NAME):
	STATEMENTS

LIST.sort(key=COMPARE_FUNCTION)
```

# Example
1. Sort with compare function
```
# take second element for sort
def takeSecond(elem):
    return elem[1]

# random list
random = [(2, 2), (3, 4), (4, 1), (1, 3)]

# sort list with key
random.sort(key=takeSecond)

# print list
print('Sorted list:', random)
```

Output:
```
[(4, 1), (2, 2), (1, 3), (3, 4)]
```

# Reference:
https://stackoverflow.com/questions/4183506/python-list-sort-in-descending-order
https://www.programiz.com/python-programming/methods/list/sort