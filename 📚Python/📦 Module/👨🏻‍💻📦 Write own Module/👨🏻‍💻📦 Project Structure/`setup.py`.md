# Description
`setup.py` is the build script for [setuptools](https://packaging.python.org/key_projects/#setuptools). It tells `setuptools` about your package (such as the name and version) as well as which code files to include.

# New and Changed setup() Keywords
Include Other 
1. `include_package_data`
  - If set to `True`, this tells `setuptools` to automatically include any data files it finds inside your package directories that are specified by your `MANIFEST.in` file
```
from setuptools import setup, find_packages
setup(
    ...
    include_package_data=True
)
```

2. `package_data`
  - A dictionary mapping package names to lists of glob patterns. 
  {info}
  You do not need to use this option if you are using include_package_data, unless you need to add 
  {info}
```
from setuptools import setup, find_packages
setup(
    ...
    package_data={
        # If any package contains *.txt or *.rst files, include them:
        '': ['*.txt', '*.rst'],
        # And include any *.msg files found in the 'hello' package, too:
        'hello': ['*.msg'],
    }
)
```


# Template
```
import setuptools

with open("README.md", "r") as fh:
    long_description = fh.read()

setuptools.setup(
    name="example-pkg-your-username",
    version="0.0.1",
    author="Example Author",
    author_email="author@example.com",
    description="A small example package",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/pypa/sampleproject",
    packages=setuptools.find_packages(),
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
)
```

# Reference
https://packaging.python.org/tutorials/packaging-projects/
https://setuptools.readthedocs.io/en/latest/setuptools.html#new-and-changed-setup-keywords