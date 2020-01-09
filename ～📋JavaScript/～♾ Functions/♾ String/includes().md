# Description
Determines whether a string contains the characters of a specified string.

# Syntax
| Parameter | Required|Usage|
|-----------|---------|-----|
|searchvalue| Required| The string to search for|
|start	    | Optional| Default 0. At which position to start the search|
```
STRING_VAR_NAME.includes(searchvalue)
STRING_VAR_NAME.includes(searchvalue, start)
```

# Example
```
var str = "Hello world, welcome to the universe.";
var n = str.includes("world", 12);
```

# Reference
https://www.w3schools.com/jsref/jsref_includes.asp