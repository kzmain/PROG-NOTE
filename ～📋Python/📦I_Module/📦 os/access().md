# Description:
1. Check if file readable

# Syntax
|Permission type| Meaning|
|---------------|---------|
|os.F_OK        | Value to pass as the mode parameter of access() to test the existence of path.|
|os.R_OK        | Value to include in the mode parameter of access() to test the readability of path.| 
|os.W_OK        | Value to include in the mode parameter of access() to test the writability of path.| 
|os.X_OK        | Value to include in the mode parameter of access() to determine if path can be executed.| 

```
RETURN_VAR = os.access(FILE_PATH, PERMISSION)
```

# Example
1. Example 1
```
import os.path

if os.path.isfile('/etc/hosts') and os.access('/etc/hosts', os.R_OK):
    print("File exists and is readable")
else:
    print("Either file is missing or is not readable")
```
2. Exampl 2
Input
```
>>> os.access("C:\Program Files\Android", os.W_OK | os.X_OK)
>>> os.access("C:\Program Files\kjkjieikjd", os.W_OK | os.X_OK)
>>> os.access("C:\Program Files", os.W_OK | os.X_OK)
```
Output
```
True
False
True
```


# Reference:
https://techibee.com/python/get-current-directory-using-python/2790
https://www.tutorialspoint.com/python/os_access.htm