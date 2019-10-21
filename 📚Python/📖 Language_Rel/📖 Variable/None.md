# Description
There's no `null` in Python, instead there's `None`.

{danger}
As stated already the most accurate way to test that something has been given None as a value `is` to use the is identity operator

```
if VAR_TEST is None:
  STATEMENTS
```
{danger}

# Example
Input
```
foo is None
foo = 'bar' 
foo is None
```

Output
```
True
False
```

# Reference
https://stackoverflow.com/questions/3289601/null-object-in-python