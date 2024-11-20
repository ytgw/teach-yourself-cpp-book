BUILD_DIR = build
TARGET    = $(BUILD_DIR)/main


# makeを実行すると最初のターゲットが実行される。
all: clean build run

# @-をつけると実行するコマンドを表示しない
clean:
	@-echo '---------- start $@ ----------'
	rm -rf $(BUILD_DIR)
	@-echo '---------- end $@ ----------'

build: main.c hello.cpp
	@-echo '---------- start $@ ----------'
	@-mkdir -p $(BUILD_DIR)
	g++ -o $(BUILD_DIR)/hello.o -c hello.cpp
	gcc -o $(BUILD_DIR)/main.o -c main.c
	g++ -o $(TARGET) $(BUILD_DIR)/hello.o $(BUILD_DIR)/main.o
	@-echo '---------- end $@ ----------'

run:
	$(TARGET)
