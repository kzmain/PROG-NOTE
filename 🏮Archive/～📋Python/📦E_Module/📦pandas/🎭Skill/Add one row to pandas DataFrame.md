# Syntax
`DF_VAR.loc[line_number] = [list_elements]`

# Example
### Example 1
Input
```
import pandas as pd
from numpy.random import randint

df = pd.DataFrame(columns=['lib', 'qty1', 'qty2'])
for i in range(5):
    df.loc[i] = ['name' + str(i)] + list(randint(10, size=2))
df
```
Output
```
     lib qty1 qty2
0  name0    3    3
1  name1    2    4
2  name2    2    8
3  name3    2    1
4  name4    9    6
```

# Appendix
https://stackoverflow.com/questions/10715965/add-one-row-to-pandas-dataframe