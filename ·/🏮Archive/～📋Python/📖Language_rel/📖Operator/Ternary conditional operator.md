# Description:


# Structure
```
[on_true] if [expression] else [on_false] 
```

# Example
1. Example 1
```
a = 1
b = 2

1 if a > b else -1 
# Output is -1

1 if a > b else -1 if a < b else 0
# Output is -1
```

2. Example 2
```
# Python program to demonstrate nested ternary operator 
a, b = 10, 20
  
print ("Both a and b are equal" if a == b else "a is greater than b"
        if a > b else "b is greater than a") 
```

# Reference
https://stackoverflow.com/questions/394809/does-python-have-a-ternary-conditional-operator
https://www.geeksforgeeks.org/ternary-operator-in-python/