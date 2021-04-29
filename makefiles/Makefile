libCar:
	g++ -c -fPIC Engine.cpp -o Engine.o
	g++ -c -fPIC Car.cpp -o Car.o
	g++ -shared -o libCar.so Engine.o Car.o

create_dir:
	mkdir new_dir

say_something:
	@echo "something"

clean:
	rm *.o *.so *.exe libCar.so