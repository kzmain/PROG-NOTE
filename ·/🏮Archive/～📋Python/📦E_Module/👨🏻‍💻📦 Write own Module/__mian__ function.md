# Description
Function (main function) entry point of module

# Principle Behind
When the +r+ Python interpreter reads a source file, it executes all of the code +r+ found in it.

Before executing the code, it will define a few special variables. 
* If Python is running the file +r+ as the main program +r+ then Python will create a `__name__` variable +r+ with the value of main +r+. 
* If python is importing the file as an import into an already running main the `__name__` variable will be +r+ set to the module’s name in the modules scope +r+.


# Basic structure
```
if __name__ == '__main__':
    STATEMENT_1
    STATEMENT_2
    ....
```

# Code segment
```
hello_world():
    print("Hello World")

if __name__ == '__main__':
    hello_world()
```

# Reference:
https://developer.rhino3d.com/guides/rhinopython/python-remote-local-module/