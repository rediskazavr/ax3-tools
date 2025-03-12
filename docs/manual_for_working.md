# Manual for working with ax3-tools
In this documentation we will look at using the tool in your simple C++ console programs.

## Content:
* Redesigning your program
* Description of the available functions that you can use
* Configuration etc

## Redesigning your program:
* Go to ./src/func/design.cpp, this file contains the main design of your program that is displayed in the terminal. In the line ``` static const std::string graphics = R"()" ``` you can create. Change the ASCII art to your own, change the frame with the function selection, etc.

* Go to ./src/func/colors.cpp you can change the path to the configuration file, and the color scheme that displays your program [see the documentation for the project code]()

## Description of the available functions that you can use
* Function ``` return; ``` terminates the program. 
Example:
```
case 10:
    return;
    break;
 ```

* Function ``` system("") ``` executes a command in the terminal, connected from the standard library stdio.h.
Example:
```
case 1:
    system("python3 ./scripts/script.py");
    break;
```

## Configuration etc



> Documentation author: rediskazavr, current as of 03/13/2025