# Target
Iterate over a Javascript dictionary

# Methods
1. Use `for...in` loop
```
for (var key in yourobject) {
   if (yourobject.hasOwnProperty(key)) {
      console.log(key, yourobject[key]);
   }
}
```

# Reference
https://stackoverflow.com/questions/14379274/how-to-iterate-over-a-javascript-object