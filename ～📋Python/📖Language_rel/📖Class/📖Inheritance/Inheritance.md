## Components
1. Superclass
  - The class from which a class inherits is called the parent or superclass. 
  - Superclasses are sometimes called ancestors as well. 
2. Subclass
  - A class which inherits from a superclass is called a subclass, also called heir class or child class. 

![vehicles_classification](./vehicles_classification.png "vehicles_classification")

## Syntax
```python
class DerivedClassName(BaseClassName):
    pass
```

## Example
Code Segment

```python
class Robot:
    def __init__(self, name):
        self.name = name
        
    def say_hi(self):
        print("Hi, I am " + self.name)
        

class PhysicianRobot(Robot):
    pass


x = Robot("Marvin")
y = PhysicianRobot("James")
print(x, type(x))
print(y, type(y))
y.say_hi()
```

Output

```python
<__main__.Robot object at 0x7fd0080b3ba8> 
<class '__main__.Robot'>
<__main__.PhysicianRobot object at 0x7fd0080b3b70> 
<class '__main__.PhysicianRobot'>
Hi, I am James
```