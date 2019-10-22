# Description
The method `listdir()` returns a list containing the names of the entries in the directory given by path. The list is in arbitrary order.

{caution}
It does not include the special entries '.' and '..' even if they are present in the directory.
{caution}

# Example
1. Example 1
```
#!/usr/bin/python

import os, sys

# Open a file
path = "/var/www/html/"
dirs = os.listdir( path )

# This would print all the files and directories
for file in dirs:
   print file
```

# Reference
https://www.tutorialspoint.com/python/os_listdir.htm