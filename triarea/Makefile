TARGET = triarea.exe
build:
	g++ src/*.cpp -o $(TARGET)

test:
	kattis test

doctest: clean
	g++ src/triangle.cpp tests/*.cpp -o doctest_triarea.exe
	./doctest_triarea.exe

clean:
	find . -name "*.exe" -delete
	find . -name "*gch" -delete
	find . -name "*.out" -delete
	find . -name  "*.o" -delete