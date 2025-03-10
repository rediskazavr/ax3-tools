TARGET = ./build/app.run

SRC = \
			./src/main.cpp \
			./src/func/colors.cpp \
			./src/func/design.cpp \

HDRS = \
			 ./src/func/design.hpp \
			 ./src/func/colors.hpp

$(TARGET):
	g++ $(SRC) -I $(HDRS) -o $(TARGET)
