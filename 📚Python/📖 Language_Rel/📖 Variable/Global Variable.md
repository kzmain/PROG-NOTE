# Description:
* A special variable for +r+global+r+ use.
* Not for only for a class/function

# Structure
```
g_var = ""

def some_func():
	global g_var
	OTHER_STATEMENTS

def anotheer_func():
	global g_var
	OTHER_STATEMENTS
```

# Example
```
myglobal = "UGHWTF"

def main():
    global myglobal # prevents creation of a local variable called myglobal
    myglobal = "yu0 = fail it"
    anotherfunc()

def anotherfunc():
    print myglobal
```

# Reference
https://stackoverflow.com/questions/16502377/global-variable-inside-main-function-python