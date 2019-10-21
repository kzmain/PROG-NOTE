# Description:
1. Module entry point from +r+console+r+ 
	
2. `__main__.py` is used for python programs in zip files.

# Example:
1. Console mode:
  `python MODULE_NAME"`
2. Python programs in zip files:
  The __main__.py file will be executed when the zip file in run.
  For example, if the zip file was as such:
  ```
  test.zip
       __main__.py
  ```
  and the contents of `__main__.py` was
  ```
  import sys
  print "hello %s" % sys.argv[1]
  ```
  If we run `python test.zip world` we would get `hello world` out

# Reference:
https://stackoverflow.com/questions/4042905/what-is-main-py