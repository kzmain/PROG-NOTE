# Description
Serialize `obj` to a JSON formatted `str` using this [conversion table][https://docs.python.org/3.7/library/json.html#py-to-json-table].

{note}
- Keys in key/value pairs of JSON are always of the type `str`. 
- When a dictionary is converted into JSON, all the keys of the dictionary +r+are coerced to strings+r+ 
- As a result of this, if a dictionary is converted into JSON and then back into a dictionary, the dictionary +r+may not equal the original one+r+.
{note}

# Refernce
https://docs.python.org/3.7/library/json.html