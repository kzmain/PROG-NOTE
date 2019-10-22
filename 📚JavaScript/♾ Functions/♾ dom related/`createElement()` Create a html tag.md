# Description
To create an HTML element.

# Structure
`let VAR_NAME = document.createElement('TAG_TYPE')`

# Example
```
var dateSpan = document.createElement('span')
dateSpan.innerHTML = dateString;
var li = document.createElement('li');
li.appendChild(dateSpan);
```

# Reference
https://stackoverflow.com/questions/5802663/create-a-span-element-inside-another-element-using-javascript