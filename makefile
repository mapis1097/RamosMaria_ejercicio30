data10.dat : ejercicio30.x
	./ejercicio30.x 10 > data10.dat
data30.dat : ejercicio30.x
	./ejercicio30.x 30 > data30.dat
ejercicio.x : c++ ejercicio.cpp
	c++ ejercicio.cpp -o ejercicio.x