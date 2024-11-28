CXX          = g++
CXX_FLAFS    = -Wall -Werror -std=c++23
INCLUDE_DIRS = -I include

BUILD_DIR = build
SRCS      = $(wildcard *.cpp)
OBJS      = $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRCS))
TARGET    = $(BUILD_DIR)/main


# makeを実行すると最初のターゲットが実行される。
all: clean build run

# @-をつけると実行するコマンドを表示しない
clean:
	@-echo '---------- start $@ ----------'
	rm -rf $(BUILD_DIR)
	@-echo '---------- end $@ ----------'

build: $(OBJS)
	@-echo '---------- start $@ ----------'
	$(CXX) -o $(TARGET) $^ $(CXX_FLAFS) $(LIB_DIRS) $(LIBS)
	@-echo '---------- end $@ ----------'

$(BUILD_DIR)/%.o: %.cpp
	@-mkdir -p $(BUILD_DIR)
	$(CXX) -o $@ -c $^ $(CXX_FLAFS) $(INCLUDE_DIRS)

run:
	$(TARGET)
