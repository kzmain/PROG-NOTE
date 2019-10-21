# Description:
Check if given input file exists and is a file not directory.

# Syntax
`os.path.exists(PATH_OR_FILE_NAME)`

# Example:
Input
```
import os.path

print os.path.exists("/etc/hosts")
print os.path.exists("/etc")
print os.path.exists("/does/not/exist")
```
Output
```
True
True
False
```
# Reference:
https://tecadmin.net/python-check-file-directory-exists/