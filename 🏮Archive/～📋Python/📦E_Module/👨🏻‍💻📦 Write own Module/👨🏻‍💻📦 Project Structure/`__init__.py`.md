# Description
- The `__init__.py` files are required to make Python +r+treat directories containing the file as packages+r+. 
  This prevents directories with a common name, such as string, unintentionally hiding valid modules that occur later on the module search path.

# Location
Every sub-folder of a module

# Reference
https://docs.python.org/3/tutorial/modules.html