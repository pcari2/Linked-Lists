test: run

run: a.exe
	./a.exe

a.exe: main.cpp
	g++ main.cpp -o a.exe
