# Description:
Check if given input file exists and is a file not directory.

# Syntax
`os.path.isFile(PATH_OR_FILE_NAME)`

# Example:
Input
```
import os.path
 
print(os.path.isfile("/etc/hosts"))
print(os.path.isfile("/etc"))
```
Output
```
True
False
```
# Reference:
https://tecadmin.net/python-check-file-directory-exists/