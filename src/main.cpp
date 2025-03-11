#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "./func/design.hpp"
#include "./func/colors.hpp"
#include "./cmd/line.hpp"

using namespace std;
bool UseColors = true;

int main() {
    srand(time(nullptr));

    readConfigFile();
    printDesign();
    line();

    return 0;
}
