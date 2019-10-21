Get path of root project structure

1. Type 1:
Use sys.modules property
```
import os
import sys
sys.modules['__main__'].__file__
```

2. Type 2:
use sys.path
```
sys.path[0]
```

3. Type 3:
Define a variable to the Project Root from a file that is in the top-level of the project.e.g.
```
project/
    configuration.conf
    definitions.py
    main.py
    utils.py
```

In definitions.py you can define (this requires import os):
```
ROOT_DIR = os.path.dirname(os.path.abspath(__file__))
```

# Reference
https://stackoverflow.com/questions/25389095/python-get-path-of-root-project-structure