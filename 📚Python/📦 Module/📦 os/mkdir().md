# Description
- The method `mkdir()` +r+create a directory+r+ named path with numeric mode mode. 
- The default mode is +r+0777+r+ (octal). 

# Syntax
- Path: This is the path, which needs to be created.
- Mode: his is the mode of the directories to be given.
```
os.mkdir(path[, mode])
```

# Example
1. Example 1
```
#!/usr/bin/python

import os, sys

# Path to be created
path = "/tmp/home/monthly/daily/hourly"

os.mkdir( path, 0755 );

print "Path is created"
```

# Reference
https://www.tutorialspoint.com/python/os_mkdir.htm