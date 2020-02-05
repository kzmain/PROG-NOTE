# Description:
1. A function for file copy

# Structure:
```
import shutil
shutil.copy(resource_file, destination_file)
```

# Example:
1. copy()
  ```
  import shutil
  for item in fileList:
    shutil.copy(item[0], "/Users/username/Desktop/testPhotos")
  ```

# Reference:
https://stackoverflow.com/questions/52851994/copy-a-file-from-one-location-to-another-in-python