CX = g++ -std=c++17

main.out : points.o
	$(CX) points.o -o main.out

points.o : points.cpp 
	$(CX) points.cpp -o points.o

clean:
	rm -f *.o main.out

