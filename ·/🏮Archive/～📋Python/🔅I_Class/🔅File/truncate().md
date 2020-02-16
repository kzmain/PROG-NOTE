# Intro
The method truncate() truncates the file's size. 
- If the optional +r+size argument is present+r+, the file is truncated to +r+(at most) that size+r+.
- The size +r+defaults to the current position+r+. The current file position is not changed. 

{info}
Note that if a specified size exceeds the file's current size, the result is platform-dependent.
{info}
{danger}
This method would not work in case file is opened in read-only mode.
{danger}

# Syntax
Size : File size after truncate is optional
```python
FILE_OBJ.truncate(SIZE)
```

# Example
1. Python replace and overwrite instead of appending
```python
import re
#open the xml file for reading:
with open('path/test.xml','r+') as f:
    #convert to string:
    data = f.read()
    f.seek(0)
    f.write(re.sub(r"<string>ABC</string>(\s+)<string>(.*)</string>",r"<xyz>ABC</xyz>\1<xyz>\2</xyz>",data))
    f.truncate()
```

# Reference
https://www.tutorialspoint.com/python/file_truncate.htm
https://stackoverflow.com/questions/11469228/python-replace-and-overwrite-instead-of-appending/11469328