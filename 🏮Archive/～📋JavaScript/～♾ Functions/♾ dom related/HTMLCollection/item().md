# Description
- The `item()` method +r+returns the element at the specified index+r+ in an HTMLCollection.
{info}
The Elements are sorted as they appear in the source code, and the index starts at 0.
{info}

# Examples
1. Example 1
```
var x = document.getElementsByTagName("P")[0];
```

2. Example 2
```
function myFunction() {
  var x = document.getElementsByTagName("P").item(0);
  alert(x.innerHTML);
}
```

# Reference
https://www.w3schools.com/jsref/met_htmlcollection_item.asp