# Code Documentation

This documentation describes how each code in the project works.

## Content
* Compile
* Function
* Config

## Compile
The project contains one file for compilation.

```./makefile```

<details>
  <summary>Makefile</summary>

1. TARGET:
The TARGET variable specifies the name of the executable file that will be obtained after all source files (SRC) have been successfully compiled. In this case, the executable will be named ax3, and it will be located in the ./build directory.

2. SRC:

The SRC variable contains a list of all .cpp source files that will be used to compile the program. There are four files: main.cpp, colors.cpp, design.cpp, and line.cpp. Each is located in a specific subfolder within the src directory.

3. HDRS:
The HDRS variable stores a list of header files (.hpp) needed to compile the program. These files contain function declarations, class declarations, and other necessary definitions used in the source files. Three headers are listed here: design.hpp, colors.hpp, and line.hpp.

Compilation:
This line describes the rule for the g++ compiler that is used to create the target file (TARGET). The compiler builds together all the specified source files (SRC) and attaches header files (HDRS) using the -I option. The -o option tells the compiler where to save the resulting executable file.
</details>


## Function
* Colors
Code element responsible for rendering text in the terminal

```./src/func/colors.cpp```
<details>
  <summary>Colors.cpp</summary>
  Header files

```#include "colors.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
```
The following header files are connected here:

"colors.hpp" is a custom header file containing the definition of colors.
```
<iostream> — standard I/O.
<cstdlib> — standard library functions with.
<ctime> — working with time.
<fstream> — working with I/O files.
Constants and global variables

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
```
These lines are ANSI codes for changing the color of the text in the console. RESET resets the text color back to the default one.

Enumeration of coloring schemes

```enum ColorScheme {
    RANDOM_COLOR,
    RED_SCHEME,
    GREEN_SCHEME,
    YELLOW_SCHEME,
    BLUE_SCHEME,
    MAGENTA_SCHEME,
    CYAN_SCHEME,
    WHITE_SCHEME
};
```
The ColorScheme enumeration represents the various coloring schemes available for text output. Each scheme corresponds to one of the colors used.

Global flags

bool useColors = true;

ColorScheme colorScheme = RANDOM_COLOR;

useColors: A flag that determines whether to use colors when displaying text.

colorScheme: The currently selected coloring scheme is initially
 set to a random color selection.
Functions

getRandomColor function

```std::string getRandomColor() {
    const std::string colors[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
    
    switch(colorScheme) {
        case RANDOM_COLOR:
            return colors[rand() % sizeof(colors)/sizeof(colors[0])];
        case RED_SCHEME:
            return RED;
        case GREEN_SCHEME:
            return GREEN;
        case YELLOW_SCHEME:
            return YELLOW;
        case BLUE_SCHEME:
            return BLUE;
        case MAGENTA_SCHEME:
            return MAGENTA;
        case CYAN_SCHEME:
            return CYAN;
        case WHITE_SCHEME:
            return WHITE;
        default:
            return "";
    }
}
```
This function returns a string with a color code depending on the selected color scheme. If the RANDOM_COLOR scheme is selected, a random color is returned from the colors array.

The readConfigFile function

```void readConfigFile() {
    std::ifstream configFile("./config/config.conf");
    if(configFile.is_open()) {
        std::string line;
        while(getline(configFile, line)) {  
            if(line.find("$rainbow_colors") != std::string::npos) { 
                size_t pos = line.find('=');
                if(pos != std::string::npos) {
                    std::string value = line.substr(pos + 1);
                    if(value == "true") {
                        useColors = true;
                    } else if(value == "false") {
                        useColors = false;
                    }
                }
            }
            if(line.find("$color_scheme") != std::string::npos) {
                size_t pos = line.find('=');
                if(pos != std::string::npos) {
                    std::string value = line.substr(pos + 1);
                    if(value == "random") {
                        colorScheme = RANDOM_COLOR;
                    } else if(value == "red") {
                        colorScheme = RED_SCHEME;
                    } else if(value == "green") {
                        colorScheme = GREEN_SCHEME;
                    } else if(value == "yellow") {
                        colorScheme = YELLOW_SCHEME;
                    } else if(value == "blue") {
                        colorScheme = BLUE_SCHEME;
                    } else if(value == "magenta") {
                        colorScheme = MAGENTA_SCHEME;
                    } else if(value == "cyan") {
                        colorScheme = CYAN_SCHEME;
                    } else if(value == "white") {
                        colorScheme = WHITE_SCHEME;
                    } else {
                        colorScheme = RANDOM_COLOR; 
                    }
                }
            }
        }
        configFile.close();
    } else {
        std::cerr << "$Error, file config.conf not found" << std::endl;
    }
}
```
The function reads the config.conf configuration file and adjusts the text output parameters according to the contents of the file. The $rainbow_colors and $color_scheme parameters define the use of colors and the coloring scheme, respectively.

printAsciiArt function

```void printAsciiArt(const std::string& asciiArt) {
    for(char c : asciiArt) {
        if(useColors) {
            if(c == ' ') {
                std::cout << getRandomColor() << c << RESET;
            } else if(c == '\t') {
                std::cout << getRandomColor() << "    " << RESET;
            } else {
                std::cout << getRandomColor() << c << RESET;
            }
        } else {
            std::cout << c;
        }
    }
}
```
The function outputs ASCII art text, applying colors depending on the current coloring scheme. If the useColors flag is set to true, each character is output using a random color, otherwise the characters are output unchanged.
</details>