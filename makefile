CC := gcc

CFLAGS := -Wall -Wextra

INSTALL_DIR := /usr/local/bin

TARGET := stormpack
SRC := storm-pack.c
OBJ := $(SRC:.c=.o)

.PHONY: all clean install

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

install: $(TARGET)
	install -m 755 $(TARGET) $(INSTALL_DIR)

clean:
	rm -f $(OBJ) $(TARGET)
