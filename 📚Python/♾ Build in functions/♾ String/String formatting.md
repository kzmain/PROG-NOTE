# Description
Python uses C-style string formatting to create new, formatted strings. 

# Components
The +r+"%" operator+r+ is used to format +r+a set of variables enclosed in a **"tuple"**+r+ (a fixed size list), together with a +r+format string+r+, which contains normal text together with "argument specifiers", special symbols like "%s" and "%d".

# Symbol types
|Symbol					|Meaning                                                                      |
|-----------------------|-----------------------------------------------------------------------------|
|%s    					|String (or any object with a string representation, like numbers)            |
|%d    					|Integers                                                                     |
|%f    					|Floating point numbers                                                       |
|%.<number of digits>f  |Floating point numbers with a fixed amount of digits to the right of the dot.|
|%x/%X                  |Integers in hex representation (lowercase/uppercase)                         |

# Syntax
1. Just one argument
```
"OTHER_STRING_PARTS %SYMBOL" % VARIABLE_INSERT
```

2. More than one arguement
```
"OTHER_STRING_PARTS %SYMBOL1 OTHER_STRING_PARTS %SYMBOL2 ..." % (VARIABLE_INSERT_1, VARIABLE_INSERT_2)
```

# Example
1. Example 1
```
"Hello, %s!" % "John"
```
2. 
```
"%s is %d years old." % ("John", 23)
```

# Reference
https://www.learnpython.org/en/String_Formatting 