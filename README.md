# static_lib_test
create static lib, which will use a shared lib(libpthread.so). Then another test program named "test_main" will call the static lib.
this test is to proive:
    "if static lib (libXXX.a) use shared lib(libBB.so), then any program who use libXXX.a, still need to link libBB.so"

test PASS under linux environment.

