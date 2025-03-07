TARGET = ./build/app.run

SRC = \

HDRS = \

$(TARGET):
	g++ $(SRC) -I $(HDRS) -o $(TARGET)
