# Description:
1. Get current working directory

# Syntax
```
DIR_VAR = os.getcwd()
```

# Example
```
import os
 
dirpath = os.getcwd()
print("current directory is : " + dirpath)
foldername = os.path.basename(dirpath)
print("Directory name is : " + foldername)
```

# Reference:
https://techibee.com/python/get-current-directory-using-python/2790