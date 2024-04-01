CC = g++

build/PACBoy:build/PACBoy.o
	$(CC) $^ -o $@
	./$@

build/PACBoy.o:PACBoy.cpp
	$(CC) -c $< -o $@