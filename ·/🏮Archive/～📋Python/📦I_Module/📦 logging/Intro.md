# Intro
- Logging is a means of +r+tracking events+r+ that happen when some software runs. 
- The software’s developer adds logging calls to their code to indicate that certain events have occurred.

# Common functions
1. `debug()`
  Report events that occur during normal operation of a program (e.g. for status monitoring or fault investigation)
2. `info()`
  Report events that occur during normal operation of a program (e.g. for status monitoring or fault investigation)
3. `warning()`
  Issue a warning regarding a particular runtime event
4. `error()`
  Report suppression of an error without raising an exception
5. `critical()`
  Report suppression of an error without raising an exception

# Example
1. Simple logging
```
import logging

logging.warning('Watch out!')  # will print a message to the console
logging.info('I told you so')  # will not print anything
```
2. Logging to a file
```
import logging

logging.basicConfig(filename='example.log',level=logging.DEBUG)
logging.debug('This message should go to the log file')
logging.info('So should this')
logging.warning('And this, too')
```

# Reference
https://docs.python.org/3/howto/logging.html#logging-basic-tutorial