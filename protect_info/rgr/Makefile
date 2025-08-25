CC = g++
CFLAGS = -Wall -Iinclude

LIB_DIR = lib
OBJ_DIR = obj

LIB_SRC = src/graph.cpp src/rsa.cpp src/hamilton_cycle.cpp
LIB_OBJ = $(LIB_SRC:src/%.cpp=$(OBJ_DIR)/%.o)
LIB_NAME = libcrypto.a

APP_SRC = src/main.cpp
APP_OBJ = $(APP_SRC:src/%.cpp=$(OBJ_DIR)/%.o)
BIN = proof

all: $(BIN)

$(BIN): $(APP_OBJ) $(LIB_NAME)
	$(CC) $(CFLAGS) -o $@ $(APP_OBJ) -L$(LIB_DIR) -lcrypto

$(LIB_NAME): $(LIB_OBJ)
	ar rcs $(LIB_DIR)/$@ $^

$(OBJ_DIR)/%.o: src/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(BIN) $(OBJ_DIR) $(LIB_DIR)/* graph.txt

run: $(BIN)
	./$(BIN)

.PHONY: all clean run