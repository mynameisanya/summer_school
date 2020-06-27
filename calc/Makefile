#Makefile for calc

EXECUTABLE_FILES := calc
SOURCE_FILES := calc.c
CC := gcc
.PHONY := clean
CLEAN_COMMAND := rm -rf





$(EXECUTABLE_FILES):$(SOURCE_FILES)
		$(CC) -o $@ $^


$(.PHONY):
		$(CLEAN_COMMAND) $(EXECUTABLE_FILES)


