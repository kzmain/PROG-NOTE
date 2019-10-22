# Target
Remove all child elements of a DOM node in JavaScript

# Methods
1. Use .innerHTML (much slower)
```
var myNode = document.getElementById("foo");
myNode.innerHTML = '';
```

2. Use loop to remove child elements (much faster)
```
var myNode = document.getElementById("foo");
while (myNode.firstChild) {
    myNode.removeChild(myNode.firstChild);
}
```

# Reference
https://stackoverflow.com/questions/3955229/remove-all-child-elements-of-a-dom-node-in-javascript