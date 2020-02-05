# Description:
- Expand a pathname that uses `~` to represent the current +r+user's home directory+r+.
- This works on any platform where users have a home directory, including Linux, Mac OS X, and Windows. The returned path does not have a trailing slash

# Example:
Input
```
print(os.path.expanduser("~/Baizenote"))
```
Output
```
/Users/kzmain/Baizenote
```

# Reference:
https://www.bogotobogo.com/python/python_files.php