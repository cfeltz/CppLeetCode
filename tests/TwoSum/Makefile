CC = g++

all: twosum

.PHONY: twosum

# TwoSum
TWOSUM_TARGET = TwoSum_Test.exe
TWOSUM_TEST_SRC = TwoSum_Test.cpp 
TWOSUM_SRC_DIR = ../../TwoSum/
TWOSUM_SRC = $(TWOSUM_SRC_DIR)TwoSum.cpp
TWOSUM_OBJ = $(TWOSUM_SRC:.cpp=.o)

twosum: $(TWOSUM_TARGET)

$(TWOSUM_TARGET): $(TWOSUM_TEST_SRC) $(TWOSUM_OBJ)
	$(CC) $^ -o $@

$(TWOSUM_OBJ): $(TWOSUM_SRC)
	$(CC) -c $< -o $@

clean:
	rm -f $(TWOSUM_TARGET) $(TWOSUM_OBJ)