# Description:
Join one or more path components intelligently.

# Caution
{danger}
If a component is an *absolute path, all previous components are thrown away* and joining continues from the absolute path component.

Input
```
print(os.path.join(os.getcwd(), "/test.py"))
```

Output
```
/test.py"
```
{danger}

# Example:
1. Example 1
Input
```
print(os.path.join(os.getcwd(), "test.py"))
```
Output
```
/Users/kzmain/_Repository/BaiZeNote/test.py
```

# Reference:
https://www.bogotobogo.com/python/python_files.php