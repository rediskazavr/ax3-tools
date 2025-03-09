TARGET = ./build/app.run

SRC = \
			./src/main.cpp

HDRS = \

$(TARGET):
	g++ $(SRC) -I $(HDRS) -o $(TARGET)
