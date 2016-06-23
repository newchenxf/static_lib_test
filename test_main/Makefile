OUT_EXE = test_main

SRC := test_main.c

LOCAL_PATH := $(shell pwd)

all:  $(OUT_EXE)


$(OUT_EXE): $(SRC)
        @gcc -g -O3 -Wall $^ -o $@ -static  -I/home/chenxf/ffmpeg_sources/chenxf/use_static_lib_test/static_lib_sample/ -L/home/chenxf/ffmpeg_sources/chenxf/use_static_lib_test/static_lib_sample -lstatic_lib_example -lpthread

clean:
        @rm -r $(OUT_EXE)
