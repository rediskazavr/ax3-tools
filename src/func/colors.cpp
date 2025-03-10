#include "colors.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";

bool useColors = true;

std::string getRandomColor() {
    const std::string colors[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
    
    return colors[rand() % sizeof(colors)/sizeof(colors[0])];
}

void readConfigFile() {
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
                break;
            }
        }
        configFile.close();  
    } else {
        std::cerr << "Cannot file open config.conf." << std::endl;
    }
  }

void printAsciiArt(const std::string& asciiArt) {
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

