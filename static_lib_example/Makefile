#chenxf make file
#some notice
#target: prerequisites - the rule head
#$@ - means the target
#$^ - means all prerequisites
#$< - means just the first prerequisite

SEC_LIB = libstatic_lib_example.a

LIB_SRC := static_lib_example.c

TEMP_O := static_lib_example.o

$(TEMP_O): $(LIB_SRC)
	@gcc -c -o $@ $^

LOCAL_PATH := $(shell pwd)

all:  $(SEC_LIB)


$(SEC_LIB): $(TEMP_O)
	@ar rcs $@ $^ 
clean:
	@rm -r *.a *.o

