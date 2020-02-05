# Description
To exchange data to/from a web server. 
Parse the data with `JSON.parse()`, and the data becomes a JavaScript object.

# Structure
```
var OBJ_NAME = JSON.parse(RAW_DATA)
```

# Example
```
<script>
var txt = '{"name":"John", "age":30, "city":"New York"}'
var obj = JSON.parse(txt);
document.getElementById("demo").innerHTML = obj.name + ", " + obj.age;
</script>
```

# Reference
https://www.w3schools.com/js/tryit.asp?filename=tryjson_parse
https://www.w3schools.com/js/js_json_parse.asp