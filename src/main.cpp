#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//colors
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";

std::string getRandomColor() {
    const std::string colors[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
    
    return colors[rand() % sizeof(colors)/sizeof(colors[0])];
}

void printAsciiArt(const std::string& asciiArt) {
    for(char c : asciiArt) {
        if(c == ' ') {
            std::cout << getRandomColor() << c << RESET;
        } else if(c == '\t') {
            std::cout << getRandomColor() << "    " << RESET;
        } else {
            std::cout << getRandomColor() << c << RESET;
        }
    }
}

int main(){
  srand(time(nullptr));

  //main window
  std::string graphics = R"(
  
                                                                                         
                    @@@@@@   @@@  @@@  @@@@@@               @@@@@@@   @@@@@@    @@@@@@   @@@        @@@@@@   
                    @@@@@@@@  @@@  @@@  @@@@@@@             @@@@@@@  @@@@@@@@  @@@@@@@@  @@@       @@@@@@@   
                    @@!  @@@  @@!  !@@      @@@               @@!    @@!  @@@  @@!  @@@  @@!       !@@       
                    !@!  @!@  !@!  @!!      @!@               !@!    !@!  @!@  !@!  @!@  !@!       !@!       
                    @!@!@!@!   !@@!@!   @!@!!@   @!@!@!@!@    @!!    @!@  !@!  @!@  !@!  @!!       !!@@!!    
                    !!!@!!!!    @!!!    !!@!@!   !!!@!@!!!    !!!    !@!  !!!  !@!  !!!  !!!        !!@!!!   
                    !!:  !!!   !: :!!       !!:               !!:    !!:  !!!  !!:  !!!  !!:            !:!  
                    :!:  !:!  :!:  !:!      :!:               :!:    :!:  !:!  :!:  !:!   :!:          !:!   
                    ::   :::   ::  :::  :: ::::                ::    ::::: ::  ::::: ::   :: ::::  :::: ::   
                    :   : :   :   ::    : : :                 :      : :  :    : :  :   : :: : :  :: : :                                                
                  ||=========================================================================================||
                  ||                                                                                         || 
                  ||                                                                                         || 
                  ||     [1] - Example                                        [6] - Example                  ||
                  ||     [2] - Example                                        [7] - Example                  ||
                  ||     [3] - Example                                        [8] - Example                  ||
                  ||     [4] - Example                                        [9] - Example                  ||     
                  ||     [5] - Example                                        [10] - Example                 ||
                  ||                                                                                         ||
                  ||                                                                                         ||
                  ||                                                                                         ||
                  ||                                                                                         ||
                  ||                                                                                         ||
                  ||                                                                                         || 
                  ||                                  $rediskazavr                                           ||
                  ||                                  $ver.:1.0                                              ||
                  ||=========================================================================================||     
                                              |================================|           
                                              |github.com/rediskazavr/ax3-tools|
                                              |================================|
                                                        
  )";
  printAsciiArt(graphics);
  std::cout << std::endl;
  return 0;
}
