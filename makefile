pyramid: main.o threeDShape.o pyramid.o
	g++ -o pyramid main.o threeDShape.o pyramid.o

main.o: threeDShape.h main.cpp
	g++ -c main.cpp

threeDShape.o: threeDShape.h threeDShape.cpp
	g++ -c threeDShape.cpp

pyramid.o: pyramid.h pyramid.cpp threeDShape.h
	g++ -c pyramid.cpp

clean:
	rm *.o pyramid