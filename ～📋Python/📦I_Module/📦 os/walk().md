# Description:
The method `walk()` +r+generates the file names in a directory tree+r+ by walking the tree either top-down or bottom-up.

# Syntax
os.walk(top[, topdown=True[, onerror=None[, followlinks=False]]])

* top
    Each directory rooted at directory, yields 3-tuples, i.e., (dirpath, dirnames, filenames)
* topdown
    If optional argument topdown is True or not specified, directories are scanned from top-down. If topdown is set to False, directories are scanned from bottom-up.
* onerror
    This can show error to continue with the walk, or raise the exception to abort the walk.
* followlinks
    This visits directories pointed to by symlinks, if set to true.

# Example
Code segment
```
import os
for root, dirs, files in os.walk(".", topdown=False):
   for name in files:
      print(os.path.join(root, name))
   for name in dirs:
      print(os.path.join(root, name))
```
Output:
```
./.bash_logout
./amrood.tar.gz
./.emacs
./httpd.conf
./www.tar.gz
./mysql.tar.gz
./test.py
./.bashrc
./.bash_history
./.bash_profile
./tmp
./tmp/test.py
```
# Reference:
https://www.tutorialspoint.com/python/os_walk.htm
