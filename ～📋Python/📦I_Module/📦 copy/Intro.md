# Intro
- +r+Assignment statements+r+ in Python do +r+not copy+r+ objects, they create +r+bindings between a target and an object. 
- For collections that are mutable or contain mutable items, a copy is sometimes needed so one can change one copy without changing the other. This module provides generic +r+**shallow** and **deep** copy operations+r+

# Interface Summary
1. `copy.copy(x)`
Return a shallow copy of x.

2. `copy.deepcopy(x[, memo])`
Return a deep copy of x.

3. `exception copy.error`
Raised for module specific errors.

# Shadow copy VS Deep copy

# Reference
https://docs.python.org/3.7/library/copy.html
https://stackoverflow.com/questions/3975376/understanding-dict-copy-shallow-or-deep