# Intro
Return the +r+longest path prefix (taken character-by-character)+r+ that is a prefix of all paths in list. If list is +r+empty+r+, return the +r+empty string ('')+r+.

# Syntax
```
os.path.commonprefix(A_PATH_LIST)
```
{danger}
Argument is a LIST!!!
{danger}

# Example
Input
```
>>> os.path.commonprefix(['/usr/lib', '/usr/local/lib'])
>>> os.path.commonpath(['/usr/lib', '/usr/local/lib'])
```

Output
```
'/usr/l'
'/usr'
```

# Reference
https://docs.python.org/3/library/os.path.html