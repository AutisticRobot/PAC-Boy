CC = g++

build/PACBoy:build/PACBoy.o build/soundObj.o
	$(CC) $^ -o $@
	clear
	./$@

build/PACBoy.o:PACBoy.cpp
	$(CC) -c $< -o $@

build/soundObj.o: soundObj.cpp headers/soundObj.hpp
	$(CC) -c $< -o $@