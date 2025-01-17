build/transbank.o: src/transbank.h src/transbank.c build/TransbankSerialUtils.o
	cc -c -g src/transbank.c -o build/Transbank.o

build/TransbankSerialUtils.o: src/transbank_serial_utils.h src/transbank_serial_utils.c
	cc -c -g src/transbank_serial_utils.c -o build/TransbankSerialUtils.o

run: build build/transbank.o build/TransbankSerialUtils.o
	cc -c -g examples/$(example).c -o build/$(example).o -I./src
	cc -o build/$(example) build/$(example).o build/Transbank.o build/TransbankSerialUtils.o -lserialport
	./build/$(example)

debug: build
	export LIBSERIALPORT_DEBUG=1 && ./build/$(example) && unset LIBSERIALPORT_DEBUG

Version:=$(shell grep 'FileVersion' version.rc | grep -o '[0-9]\.[0-9]\.[0-9]')

sojava:
	swig -java -o wrapper/transbank_wrap.c -package cl.transbank.pos.utils src/transbank_java.i
	cd build && gcc -fpic -c ../src/transbank.c ../wrapper/transbank_wrap.c ../src/transbank_serial_utils.c -I../src -I$(JAVA_HOME)/include -l$(JAVA_HOME)
	gcc -shared build/transbank.o build/transbank_wrap.o build/transbank_serial_utils.o -o build/libTransbankWrap.so -lserialport
	sudo cp build/libTransbankWrap.so /usr/local/lib

dylibjava:
	swig -java -o wrapper/transbank_wrap.c -package cl.transbank.pos.utils src/transbank_java.i
	cd build && cc -fpic -c ../src/transbank.c ../wrapper/transbank_wrap.c ../src/transbank_serial_utils.c -I../src -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/darwin
	cc -dynamiclib -current_version $(Version) -compatibility_version $(Version) build/transbank.o build/transbank_wrap.o build/transbank_serial_utils.o -o build/libTransbankWrap.dylib -lserialport
	sudo cp build/libTransbankWrap.dylib /usr/local/lib

dlljava:
	swig -java -o wrapper/transbank_wrap.c src/transbank_java.i
	windres.exe version.rc -o build/version.o
	cd build && cc -fpic -c ../src/transbank.c ../wrapper/transbank_wrap.c ../src/transbank_serial_utils.c -I../src
	cc -shared build/transbank.o build/transbank_wrap.o build/transbank_serial_utils.o build/version.o -o build/TransbankWrap.dll -lserialport -Wl,--subsystem,windows
	cp build/TransbankWrap.dll /c/msys64/mingw64/bin

dylibdotnet:
	swig -csharp -o wrapper/transbank_wrap.c -namespace Transbank.POS.Utils src/transbank_dotnet.i
	cd build && cc -fpic -c ../src/transbank.c ../wrapper/transbank_wrap.c ../src/transbank_serial_utils.c -I../src
	cc -dynamiclib -current_version $(Version) -compatibility_version $(Version) build/transbank.o build/transbank_wrap.o build/transbank_serial_utils.o -o build/TransbankWrap.dylib -lserialport

dlldotnet:
	swig -csharp -o wrapper/transbank_wrap.c -namespace Transbank.POS.Utils src/transbank_dotnet.i
	windres.exe version.rc -o build/version.o
	cd build && cc -fpic -c ../src/transbank.c ../wrapper/transbank_wrap.c ../src/transbank_serial_utils.c -I../src
	cc -shared build/transbank.o build/transbank_wrap.o build/transbank_serial_utils.o build/version.o -o build/TransbankWrap.dll -lserialport -Wl,--subsystem,windows
	cp build/TransbankWrap.dll /c/msys64/mingw64/bin

cmocka-test:
	make
	cc -o build/test_transbank build/transbank.o build/TransbankSerialUtils.o test/test_transbank.c -lcmocka -lserialport -I./src -Wl,--wrap=write_message,--wrap=read_ack,--wrap=read_bytes,--wrap=sp_input_waiting,--wrap=reply_ack
	cc -o build/test_transbank_serial_utils build/TransbankSerialUtils.o test/test_transbank_serial_utils.c -lcmocka -lserialport -I./src -Wl,--wrap=sp_blocking_write
	echo -e "\nRuning Transbank Test\n" && ./build/test_transbank && echo -e "\nRuning Serial Utils Test\n" && ./build/test_transbank_serial_utils

clean:
	rm -rf build/*
	rm -rf wrapper/*
