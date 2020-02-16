#Intro
A list of the path’s file extensions

# Example
1. Example 1
Input
```
PurePosixPath('my/library.tar.gar').suffixes
PurePosixPath('my/library.tar.gz').suffixes
PurePosixPath('my/library').suffixes
```

Output
```
['.tar', '.gar']
['.tar', '.gz']
[]
```

2. Example 2
Input
```
from pathlib import Path

Path('my/library.tar.gar').suffixes
Path('my/library.tar.gz').suffixes
Path('my/library').suffixes
```
Output
```
['.tar', '.gar']
['.tar', '.gz']
[]
```

# Reference
https://stackoverflow.com/questions/37896386/how-to-get-file-extension-correctly/37896418
https://docs.python.org/3/library/pathlib.html#pathlib.PurePath.suffixs