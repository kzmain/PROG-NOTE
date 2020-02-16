# Methods
1. Use set() and then set comparision
```
>>> a = [1, 3, 5]
>>> b = [1, 3, 5, 8]
>>> c = [3, 5, 9]
>>> set(a) <= set(b)
True
>>> set(c) <= set(b)
False

>>> a = ['yes', 'no', 'hmm']
>>> b = ['yes', 'no', 'hmm', 'well']
>>> c = ['sorry', 'no', 'hmm']
>>> 
>>> set(a) <= set(b)
True
>>> set(c) <= set(b)
False
```

2. Use all()
{info}
Start `for` lopp first with `x`, then check if `x` is in `one`
{info}
```
one = [1, 2, 3]
two = [9, 8, 5, 3, 2, 1]

all(x in two for x in one)
```

# Reference
https://stackoverflow.com/questions/16579085/python-verifying-if-one-list-is-a-subset-of-the-other