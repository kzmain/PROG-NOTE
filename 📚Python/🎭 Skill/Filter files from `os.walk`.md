# Filter files from `os.walk`
```
files = [ fi for fi in files if not fi.endswith(".dat") ]
```

# Principle behind
Ternary conditional operator