# Description:
To get file/folder's modification time

# Syntax
`os.path.getmtime(PATH_OR_FILE_NAME)`

# Example:
Input
```
import time, os.path
print(time.ctime(os.path.getmtime("/Users/kzmain/_Repository/BaiZeNote/test.py")))
```
Output
```
Thu Jun 13 04:00:09 2019
```
# Reference:
https://stackoverflow.com/questions/237079/how-to-get-file-creation-modification-date-times-in-python