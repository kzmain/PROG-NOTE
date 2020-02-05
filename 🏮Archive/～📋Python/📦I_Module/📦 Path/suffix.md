#Intro
The file extension of the final component

# Example
1. Example 1
Input
```
PurePosixPath('my/library/setup.py').suffix
PurePosixPath('my/library.tar.gz').suffix
PurePosixPath('my/library').suffix
```

Output
```
'.py'
'.gz'
''
```

2. Example 2
Input
```
from pathlib import Path

Path('my/library/setup.py').suffix
Path('my/library.tar.gz').suffix
Path('my/library').suffix
```

Output
```
'.py'
'.gz'
''
```

# Reference
https://stackoverflow.com/questions/37896386/how-to-get-file-extension-correctly/37896418
https://docs.python.org/3/library/pathlib.html#pathlib.PurePath.suffix