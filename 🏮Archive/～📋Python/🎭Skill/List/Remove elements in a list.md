# Target
Remove empty elements in a list, e.g. list = ['Caramanico Terme', ' ', 'Castellafiume', ' ', ' '] and I need ['Caramanico Terme', 'Castellafiume',]

# Principle behind
Uses ternary conditional operator, `[on_true] if [expression] else [on_false]`. Use a for loop as `on_ture` part, add a `if` condition, and did not use `else` condition

# Solution
1. Solution 1
```
lst = ['Caramanico Terme', ' ', 'Castellafiume', ' ', 'Castelvecchio Subequo',    ' ', 'Falesia di ovindoli', ' ', 'Fara San Martino', ' ', "L'Aquila - Madonna      d'Appari", ' ', 'La Palma Pazza (Bisegna AQ)', ' ', 'Liscia Palazzo', ' ', 'Luco dei marsi', ' ', 'Montebello di Bertona', ' ', 'Monticchio', ' ', 'Palena', ' ', 'Pennadomo', ' ', 'Pennapiedimonte', ' ', 'Pescomarrino', ' ', 'Petrella', ' ', 'Pianezza', ' ', 'Pietrasecca', ' ', ' ', 'PietrePiane', ' ', 'Pizzi di Lettopalena (loc. Fonte della Noce)', ' ', 'Placche di Bini', ' ', 'Roccamorice', ' ', 'Sasso di Lucoli', ' ', 'Villetta Barrea', ' ']

filtered = [x for x in lst if len(x.strip()) > 0]
```
2. Solution 2
```
lst = ['Caramanico Terme', ' ', 'Castellafiume', ' ', 'Castelvecchio Subequo',    ' ', 'Falesia di ovindoli', ' ', 'Fara San Martino', ' ', "L'Aquila - Madonna      d'Appari", ' ', 'La Palma Pazza (Bisegna AQ)', ' ', 'Liscia Palazzo', ' ', 'Luco dei marsi', ' ', 'Montebello di Bertona', ' ', 'Monticchio', ' ', 'Palena', ' ', 'Pennadomo', ' ', 'Pennapiedimonte', ' ', 'Pescomarrino', ' ', 'Petrella', ' ', 'Pianezza', ' ', 'Pietrasecca', ' ', ' ', 'PietrePiane', ' ', 'Pizzi di Lettopalena (loc. Fonte della Noce)', ' ', 'Placche di Bini', ' ', 'Roccamorice', ' ', 'Sasso di Lucoli', ' ', 'Villetta Barrea', ' ']

filtered = [x for x in lst if x.strip()]
```
# Reference
https://stackoverflow.com/questions/22588225/how-do-you-merge-two-directories-or-move-with-replace-from-the-windows-command