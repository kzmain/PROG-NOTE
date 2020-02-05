# Get key by value in dictionary
```
mydict = {'george':16,'amber':19}
print(list(mydict.keys())[list(mydict.values()).index(16)])
```

# Principle
1. Use `dict.values()` to get all dictionary's values as a list
2. Use `list.index(FIND_TARGET)` to find `FIND_TARGET`'s order number (index) in dict
3. Use `dict.values()` to get all dictionary's values as a list
4. Get key by value number

# Reference
https://stackoverflow.com/questions/8023306/get-key-by-value-in-dictionary
