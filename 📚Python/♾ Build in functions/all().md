# Description
The `all()` method returns `True` when +r+**all** elements in the given iterable are true+r+. If not, it returns `False`.

{danger}
0 will regard as False!
{danger}

# Syntax
iterable: any iterable (list, tuple, dictionary, etc.) which contains the elements
`all(iterable)`

# Example
1. Lists
Input
```
# all values true
l = [1, 3, 4, 5]
print(all(l))

# all values false
l = [0, False]
print(all(l))

# one false value
l = [1, 3, 4, 0]
print(all(l))

# one true value
l = [0, False, 5]
print(all(l))

# empty iterable
l = []
print(all(l))
```

Output
```
True
False
False
False
True
```

2. Dictionary
Input
```
s = {0: 'False', 1: 'False'}
print(all(s))

s = {1: 'True', 2: 'True'}
print(all(s))

s = {1: 'True', False: 0}
print(all(s))

s = {}
print(all(s))

# 0 is False
# '0' is True
s = {'0': 'True'}
print(all(s))
```
Output
```
False
True
False
True
True
```

3. With for loop
{info}
Start `for` lopp first with `x`, then check if `x` is in `one`
{info}
```
one = [1, 2, 3]
two = [9, 8, 5, 3, 2, 1]

all(x in two for x in one)
```

# Reference
https://www.programiz.com/python-programming/methods/built-in/all
https://stackoverflow.com/questions/16579085/python-verifying-if-one-list-is-a-subset-of-the-other
