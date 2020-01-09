# Target
To add `onclick` event to newly added element

# Principle behind
`onclick` and other `onevents` in tags are all attributes of HTML tags, so just use `setAttribute()` to add them

# Example
1. Example 1
```
elemm.onclick = function(){ alert('blah'); };
```

# Reference
https://stackoverflow.com/questions/3316207/add-onclick-event-to-newly-added-element-in-javascript