libCar:
	g++ -c -fPIC Engine.cpp -o Engine.o
	g++ -c -fPIC Car.cpp -o Car.o
	g++ -shared -o libCar.so Engine.o Car.o

clean:
	rm *.o *.so *.exe libCar.so