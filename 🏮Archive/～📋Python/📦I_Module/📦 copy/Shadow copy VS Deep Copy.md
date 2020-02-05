# Difference:
- Shallow copy 
  constructs a +r+new compound object+r+ and then (to the extent possible) +r+inserts references+r+ into it to the objects found in the original.

- Deep copy 
  constructs a +r+new compound object+r+ and then, recursively, +r+inserts copies+r+ into it of the objects found in the original.

{danger}
The difference between shallow and deep copying is +r+only relevant for compound objects+r+ (objects that contain other objects, like lists or class instances):
{danger}

# Example
1. Assigment
`b = a`: Reference assignment, Make `a` and `b` points to the same object.
![assignment]("./assignment.png")
2. Shadow copy
`b = a.copy()`: Shallow copying, `a` and `b` will become two isolated objects, but their contents still share the same reference
![shadow_copy]("./shadow_copy.png")
3. Deep copy
`b = copy.deepcopy(a)`: Deep copying, `a` and `b`'s structure and content become completely isolated.
![deep_copy]("./deep_copy.png")

# Reference
https://docs.python.org/3.7/library/copy.html
https://stackoverflow.com/questions/3975376/understanding-dict-copy-shallow-or-deep