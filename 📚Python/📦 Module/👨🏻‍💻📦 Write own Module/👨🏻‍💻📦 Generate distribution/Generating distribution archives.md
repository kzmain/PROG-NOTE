# Description
- Generate +r+distribution packages+r+ for the package. 
- These are archives that are uploaded to the Package Index and can be installed by `pip`.

{info}
Make sure you have the latest versions of `setuptools` and `wheel` installed
```
python3 -m pip install --user --upgrade setuptools wheel
```
{info}

# Procedures
1. Run following command from the same directory where `setup.py` is located
```
python3 setup.py sdist bdist_wheel
```
2. This command should output a lot of text and once completed should generate two files in the `dist` directory.
```
dist/
  example_pkg_your_username-0.0.1-py3-none-any.whl
  example_pkg_your_username-0.0.1.tar.gz
```
The `tar.gz` file is a +r+source archive+r+ whereas the `.whl` file is a +r+built distribution+r+. 

{info}
Newer `pip` versions preferentially install built distributions, but will fall back to source archives if needed. 
{info}

# Reference
https://packaging.python.org/tutorials/packaging-projects/
