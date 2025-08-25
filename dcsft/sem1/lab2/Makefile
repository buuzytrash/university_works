CC = gcc
LIB_DIR = liblab
OBJ_DIR = obj
CFLAGS = -Wall -Wextra -I$(LIB_DIR) -fPIC

LIB_SRC = $(wildcard $(LIB_DIR)/*.c)
LIB_OBJ = $(patsubst $(LIB_DIR)/%.c, $(OBJ_DIR)/%.o, $(LIB_SRC))
LIB_NAME = liblab.so

APP_SRC = main.c
APP_OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(APP_SRC))
BIN = tasks

all: $(BIN)

$(BIN) : $(APP_OBJ) $(LIB_NAME)
	$(CC) $(CFLAGS) -o $@ $(APP_OBJ) -L. -llab


$(LIB_NAME): $(LIB_OBJ)
	$(CC) -shared -o $@ $^

$(OBJ_DIR)/%.o: $(LIB_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(BIN) $(OBJ_DIR) $(LIB_NAME)

run_1024:
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_500.dat 1024 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_1000.dat 1024 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_1500.dat 1024 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_2000.dat 1024 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_2500.dat 1024 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_3000.dat 1024 NFDH

	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_500.dat 1024 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_1000.dat 1024 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_1500.dat 1024 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_2000.dat 1024 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_2500.dat 1024 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_1024/input_tasks_3000.dat 1024 FFDH
	

run_4096:
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_500.dat 4096 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_1000.dat 4096 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_1500.dat 4096 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_2000.dat 4096 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_2500.dat 4096 NFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_3000.dat 4096 NFDH

	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_500.dat 4096 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_1000.dat 4096 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_1500.dat 4096 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_2000.dat 4096 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_2500.dat 4096 FFDH
	export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH && ./$(BIN) data_4096/input_tasks_3000.dat 4096 FFDH
	

.PHONY: all clean run