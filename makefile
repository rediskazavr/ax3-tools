TARGET = ./build/ax3

SRC = \
			./src/main.cpp \
			./src/func/colors.cpp \
			./src/func/design.cpp \
			./src/cmd/line.cpp \

HDRS = \
			./src/func/design.hpp \
			./src/func/colors.hpp \
			./src/cmd/line.hpp \

$(TARGET):
	g++ $(SRC) -I $(HDRS) -o $(TARGET)
