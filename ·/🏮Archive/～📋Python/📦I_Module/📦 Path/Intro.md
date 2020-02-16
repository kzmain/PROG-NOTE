# Intro
This module offers classes representing +r+filesystem paths+r+ with semantics appropriate for different operating systems. 

# Types:
Path classes are divided between 
- pure paths, which provide +r+purely computational operations+r+ without I/O
- concrete paths, which +r+inherit+r+ from pure paths but also +r+provide I/O operations+r+.

# Location
`from pathlib import Path`

# Properties
1. Parent folder
`.parent` or `.parents`

2. Get file extension
`.suffix` or `.suffixs`