# Description:
1. A module for path related operation
2. `os.path` contains functions for manipulating filenames and directory names.

# Usage:
## Get path
1. Combine file path
  `.join()`
2. Get relative path to path from a specific directory
  `.relpath()`
3. Get current user's home dir
  `.expanduser()`
4. Get path common prefix
  `commonprefix([list])`

## Get file name/file extension
1. Get folder/file name by a file path
  `.basename()`
2. Split file name and extension
  `.splittext()`
3. Split file containing folder and file name (include file extension)
  `.split()`

## Get file related info
1. Get creation timee
  `.getctime()`
2. Get modification time
  `.getmtime()`

## Check file, dirs
1. Check if a file/dir is existed
`.exists()`
2. Check if a given path is a file
`isfile()`

# Reference
https://www.bogotobogo.com/python/python_files.php
https://docs.python.org/3.7/library/os.path.html