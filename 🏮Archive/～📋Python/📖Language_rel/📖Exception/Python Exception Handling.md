# Python Exception Handling Procedure
- Python has many built-in exceptions which forces your program to output an error when something in it goes wrong.
- When these exceptions occur, it causes the current +r+process to stop and passes it to the calling process **until it is handled**+r+. 
- If +r+not handled+r+, our program will +r+crash.+r+

# Syntax
1. Catch all exceptions
```
try:
	STATEMENTS
except:
	STATEMENTS DEAL WITH EXCEPTION
```

2. Catch specific exceptions
```
try:
	STATEMENTS
except EXCEPTION_NAME_1:
	DEAL WITH EXCEPTION
except EXCEPTION_NAME_2:
	DEAL WITH EXCEPTION
```

3. try...finally
{info}
Generally used to release external resources.
{info}
```
try:
	STATEMENTS
except EXCEPTION_NAME_1:
	DEAL WITH EXCEPTION
except EXCEPTION_NAME_2:
	DEAL WITH EXCEPTION
finally:
   STATEMENTS FOR ALL CIRCUMSTANCE THAT FINALLY DO
```

# Examples
1. All exception
Input
```
# import module sys to get the type of exception
import sys

randomList = ['a', 0, 2]

for entry in randomList:
    try:
        print("The entry is", entry)
        r = 1/int(entry)
        break
    except:
        print("Oops!",sys.exc_info()[0],"occured.")
        print("Next entry.")
        print()
print("The reciprocal of",entry,"is",r)
```
Output
```
The entry is a
Oops! <class 'ValueError'> occured.
Next entry.

The entry is 0
Oops! <class 'ZeroDivisionError' > occured.
Next entry.

The entry is 2
The reciprocal of 2 is 0.5
```
2. Catching Specific Exceptions
```
>>> raise KeyboardInterrupt
Traceback (most recent call last):
...
KeyboardInterrupt

>>> raise MemoryError("This is an argument")
Traceback (most recent call last):
...
MemoryError: This is an argument

>>> try:
...     a = int(input("Enter a positive integer: "))
...     if a <= 0:
...         raise ValueError("That is not a positive number!")
... except ValueError as ve:
...     print(ve)
...    
Enter a positive integer: -2
That is not a positive number!

```
3. Try finally
```
try:
   f = open("test.txt",encoding = 'utf-8')
   # perform file operations
finally:
   f.close()
```

# Reference
https://www.programiz.com/python-programming/exception-handling