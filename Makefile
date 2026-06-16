INC_DIRS = ./Include
INCLUDE = $(addprefix -I, $(INC_DIRS))
CC = g++
CC_FILES = ./Main.cc
CC_OUTPT_DIR = ./Build
CC_OUTPT = Atoms.production
CC_BUILD_OPTS = -O3 -Wall -Wextra -Wpedantic 
CC_DEBUG_OPTS = -O0 -g -Wall -Wextra -Wpedantic
CC_OUTPT_DEBUG = Atoms.debug

.PHONY: all build debug
all: build debug 

build: 
	mkdir -p ${CC_OUTPT_DIR}
	${CC} ${CC_BUILD_OPTS} ${INCLUDE} -o ${CC_OUTPT_DIR}/${CC_OUTPT} ${CC_FILES}

debug:
	mkdir -p ${CC_OUTPT_DIR}
	${CC} ${CC_DEBUG_OPTS} ${INCLUDE} -o ${CC_OUTPT_DIR}/${CC_OUTPT_DEBUG} ${CC_FILES}