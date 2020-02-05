#Intro
An immutable sequence providing access to the logical ancestors of the path

# Example
Input
```
>>> p = PureWindowsPath('c:/foo/bar/setup.py')
>>> p.parents[0]
>>> p.parents[1]
>>> p.parents[2]
```

Output
```
PureWindowsPath('c:/foo/bar')
PureWindowsPath('c:/foo')
PureWindowsPath('c:/')
```

# Reference
https://stackoverflow.com/questions/2860153/how-do-i-get-the-parent-directory-in-python
https://docs.python.org/3/library/pathlib.html