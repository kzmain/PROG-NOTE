# Description
Sometimes you may need to +r+create custom exceptions that serves your purpose+r+.
- Users can define such exceptions by +r+creating a new class+r+. 
- This exception class has to be +r+derived, either directly or indirectly, +r+from Exception class+r+.

# Syntax
1. Self defined Exception
```
class EXCEPTION_NAME(Exception):
    STATEMENTS
```

# Example
Input
```
# define Python user-defined exceptions
class Error(Exception):
   """Base class for other exceptions"""
   pass

class ValueTooSmallError(Error):
   """Raised when the input value is too small"""
   pass

class ValueTooLargeError(Error):
   """Raised when the input value is too large"""
   pass

# our main program
# user guesses a number until he/she gets it right

# you need to guess this number
number = 10

while True:
   try:
       i_num = int(input("Enter a number: "))
       if i_num < number:
           raise ValueTooSmallError
       elif i_num > number:
           raise ValueTooLargeError
       break
   except ValueTooSmallError:
       print("This value is too small, try again!")
       print()
   except ValueTooLargeError:
       print("This value is too large, try again!")
       print()

print("Congratulations! You guessed it correctly.")
```

Output
```
Enter a number: 12
This value is too large, try again!

Enter a number: 0
This value is too small, try again!

Enter a number: 8
This value is too small, try again!

Enter a number: 10
Congratulations! You guessed it correctly.
```

# Reference
https://www.programiz.com/python-programming/user-defined-exception