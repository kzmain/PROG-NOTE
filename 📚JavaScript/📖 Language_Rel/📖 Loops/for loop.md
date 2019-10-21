# Description:
- for loop: loops through a block of code a number of times
- for...in: loops through the properties of an object

# Syntax
### for loop
- Statement 1 - Optional
  is executed (one time) before the execution of the code block. (Can initalize none or many values)
- Statement 2 - Optional
  defines the condition for executing the code block.
  If it returns +r+true, the loop will start over+r+ again
  If it returns +r+false, the loop will end+r+.
- Statement 3 - Optional
  is executed (every time) after the code block has been executed.
```
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```

{danger}
- If you +r+omit statement 2+r+, you +r+must provide a break inside the loop+r+. Otherwise the loop will never end.
{danger}

### for...in loop
```
for (ELEMENT in ITER_OBJ) {
  // code block to be exectuted
}
```

# Example
1. for loop
```
for (i = 0; i < 5; i++) {
  text += "The number is " + i + "<br>";
}
```
2. for..in loop
```
var person = {fname:"John", lname:"Doe", age:25}; 

var text = "";
var x;
for (x in person) {
  text += person[x];
}
```

# Reference
https://www.w3schools.com/js/js_loop_for.asp