# Description:
1. Get file name or dir name from a path

# Example:
1. Get file name:
  Input
  `print(os.path.basename("/Users/kzmain/_Repository/BaiZeNote/__main__.py"))`
  Output
  `__main__.py`
2. Get dir name:
  Input:
  `print(os.path.basename("/Users/kzmain/_Repository/BaiZeNote"))`
  Output:
  `BaiZeNote`

{danger}
If get directory name DO NOT add slash "/" at the end, or I will get nothing
* NO slash input:
  `print(os.path.basename("/Users/kzmain/_Repository/BaiZeNote/"))`
  Output:
  `BaiZeNote`

* With slash input:
  `print(os.path.basename("/Users/kzmain/_Repository/BaiZeNote/"))`
  Output:
{danger}

# Reference:
https://stackoverflow.com/questions/52851994/copy-a-file-from-one-location-to-another-in-python
https://www.bogotobogo.com/python/python_files.php