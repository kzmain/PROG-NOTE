# Description
To append (an) html element(s) to an html node

# Structure
`FATHER_NODE.appendChild(CHILD_NODE)`

# Example
```
var dateSpan = document.createElement('span')
dateSpan.innerHTML = dateString;
var li = document.createElement('li');
li.appendChild(dateSpan);
```

# Reference
https://stackoverflow.com/questions/5802663/create-a-span-element-inside-another-element-using-javascript