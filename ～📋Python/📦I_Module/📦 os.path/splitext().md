# Description:
Splits a +r+filename+r+ and returns a +r+tuple+r+ containing the +r+filename and the file extension+r+.

# Syntax
`os.path.splitext(PATH_NAME)`

{info}
Unlike most manual string-splitting attempts, `os.path.splitext` will correctly treat `/a/b.c/d `as having no extension instead of having extension `.c/d`
{info}

# Example:
1. Example 1
Input
```
print(os.path.splitext("/Users/kzmain/_Repository/BaiZeNote/test.py"))
```
Output
```
('/Users/kzmain/_Repository/BaiZeNote/test', '.py')
```

2. Example 2
```
os.path.splitext('/a/b.c/d')
os.path.splitext('.bashrc')
```
Output
```
('/a/b.c/d', '')
('.bashrc', '')
```

# Reference:
https://www.bogotobogo.com/python/python_files.php
https://stackoverflow.com/questions/541390/extracting-extension-from-filename-in-python