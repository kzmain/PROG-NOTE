# Intro
`splitlines()` method is used to split the lines at line boundaries. The function returns +r+a list of lines in the string+r+, including the line break(optional).

# Syntax
KEEPENDS_FLAG: If including the line break? `True`/`False`

```
string.splitlines(KEEPENDS_FLAG)
```

# Example
Input
```
# Python code to illustrate splitlines() 
string = "Welcome everyone to\rthe world of Geeks\nGeeksforGeeks"
  
# No parameters has been passed 
print (string.splitlines( )) 
  
# A specified number is passed 
print (string.splitlines(0)) 
  
# True has been passed  
print (string.splitlines(True)) 
```
Output
```
['Welcome everyone to', 'the world of Geeks', 'GeeksforGeeks']
['Welcome everyone to', 'the world of Geeks', 'GeeksforGeeks']
['Welcome everyone to\r', 'the world of Geeks\n', 'GeeksforGeeks']
```

# Reference
https://www.geeksforgeeks.org/python-string-splitlines/