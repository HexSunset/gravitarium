CC := gcc
CFLAGS := -Wall -Wextra -lm

BUILD_DIR := ./build
SRC_DIR := ./src

TARGET_BIN := grav

# Find all .c files in SRC_DIR
SRCS := $(shell find $(SRC_DIR) -name *.c)
# replace SRC_DIR/%.c with BUILD_DIR/%.o
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# Building the final executable
$(BUILD_DIR)/$(TARGET_BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

# Building an object file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rvf $(BUILD_DIR)/*
