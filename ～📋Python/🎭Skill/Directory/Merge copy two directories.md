# Target
Merge copy two directories and its containing files, e.g. copy `~/Test1/a` and `~/Test2/a` to `~/Test3/a`

# Difficulites
Use `shutil` to copy file will show `FileExistError`

# Solution
```
def tree_merge_copy(source_dir, dest_dir):
    # 如果源文件夹不存在，返回false
    # If source dir is not exist, return false
    if not os.path.exists(source_dir):
        return False
    # 如果目标文件夹不存在，创建目标文件夹
    # If destination dir is not exist, create destination dir
    if not os.path.exists(dest_dir):
        os.mkdir(dest_dir)
    for source_path, dirs, files in os.walk(source_dir):
        # 获得相对路径
        # Get relative path
        relative_path = os.path.relpath(source_path, source_dir)
        # 获得目标子路径
        # Get destination's sub-folder path
        dest_path = os.path.join(dest_dir, relative_path)
        # 如果子路径不存在，创建子文件夹
        # If destination's sub-folder does not exist, create sub-folder
        if not os.path.exists(dest_path):
            os.makedirs(dest_path)
        # 处理每个子路径下的所有
        # Copy all files in sub-folder
        for file in files:
            dest_file = os.path.join(dest_path, file)
            source_file = os.path.join(source_path, file)
            if os.path.isfile(dest_file):
                logging.warning("Skipping existing file: " + os.path.join(relative_path, file))
                continue
            shutil.copy(source_file, dest_file)
    return True
```

# Reference
https://stackoverflow.com/questions/22588225/how-do-you-merge-two-directories-or-move-with-replace-from-the-windows-command