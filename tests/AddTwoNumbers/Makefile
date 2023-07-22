
CC = g++

all: addtwonumbers

.PHONY: addtwonumbers

# AddTwoNumbers
ADDTWONUMBERS_TARGET = AddTwoNumbers_Test.exe
ADDTWONUMBERS_TEST_SRC = AddTwoNumbers_Test.cpp 
ADDTWONUMBERS_SRC_DIR = ../../Problems/AddTwoNumbers/
ADDTWONUMBERS_SRC = $(ADDTWONUMBERS_SRC_DIR)AddTwoNumbers.cpp
ADDTWONUMBERS_OBJ = $(ADDTWONUMBERS_SRC:.cpp=.o)

addtwonumbers: $(ADDTWONUMBERS_TARGET)

$(ADDTWONUMBERS_TARGET): $(ADDTWONUMBERS_TEST_SRC) $(ADDTWONUMBERS_OBJ)
	$(CC) $^ -o $@

$(ADDTWONUMBERS_OBJ): $(ADDTWONUMBERS_SRC)
	$(CC) -c $< -o $@

clean:
	rm -f $(ADDTWONUMBERS_TARGET) $(ADDTWONUMBERS_OBJ)