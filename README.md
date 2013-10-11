[openrobot]() - A Simple Compile-To-C Language For NXT Programming
=========
[![Build Status](https://drone.io/github.com/shrimpboyho/openrobot/status.png)](https://drone.io/github.com/shrimpboyho/openrobot/latest)

```openrobot``` is a simple platform for programming NXT robots built atop of ```NeXT Btye Codes``` (NBC). At it's core, ```openrobot``` takes simple source code as input and generates C output. This C output is then fed into the ```nbc``` compiler where NXT instructions can be generated.

##The Language

```openrobot``` has a language of its own that is heavily based off Python. Here is some sample source code:

```python
# This is a test program to be parsed

speed = 4

def move():
  speed = speed + 1
  print speed

def main():
  move()
```

##How To Use

Setting up ```openrobot``` is quite easy. Make sure you have ```Python 2.7```.

```bash
git clone https://github.com/shrimpboyho/openrobot.git
cd openrobot
```

From here you can run the tests.

```bash
python robotpy tests/test.py
```

##Why?

```openrobot``` was created with education in mind. By exposing students and hobbyists to a simple programming language, the transition from GUI based programming to text based programming can be easily done. ```openrobot``` avoids archaic syntax and represents logic in a manner heavily based off of ```python```.


