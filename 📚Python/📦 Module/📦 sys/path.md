# Intro
- A list of strings that specifies the +r+search path for modules+r+.
- As initialized upon program startup, the first item of this list, `path[0]`, is the +r+directory+r+ containing the script that was used to +r+invoke the Python interpreter+r+.

# Example
1. Example 1
File structure:
```
Main folder
|
|__subfoler
|  |
|  |__sub_sys_test.py
|
|__sys_test.py
```

In `sub_sys_test.py`:
```
import sys


def test():
    print(sys.path[0])

```

In `sys_test.py`:
```
import sys
import subfolder.sub_sys_test as a

print(sys.path[0])
a.test()

```

Output:
```
/Users/kzmain/_Repository/Python_Learning
/Users/kzmain/_Repository/Python_Learning
```

# Reference
https://docs.python.org/3/library/sys.html#sys.path
https://stackoverflow.com/questions/4934806/how-can-i-find-scripts-directory-with-python