#include "design.hpp"
#include "colors.hpp"

void printDesign() {
    static const std::string graphics = R"(
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
                  ||     [1] - Start script.py                                [6] - Example                  ||
                  ||     [2] - Example                                        [7] - Example                  ||
                  ||     [3] - Example                                        [8] - Example                  ||
                  ||     [4] - Example                                        [9] - Example                  ||     
                  ||     [5] - Example                                        [10] - Exit                    ||
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
}
