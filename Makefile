PROJECT_NAME = BOX

Src = test.c\
box.c

BUILD = build

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

all: $(Src)
	gcc -g -Wall -o box box.c
event: $(SRC) $(BUILD)
	gcc -Iinc $(Src) -o $(PROJECT_OUTPUT).exe

clean: $(BUILD)
	rm .*build

$(BUILD):
	mkdir build

build:
	gcc -Iinc $(Src)-o box.out