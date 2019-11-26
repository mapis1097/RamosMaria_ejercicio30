maximo.py: data10.dat data50.dat data100.dat
	python maximo.py
data10.dat data50.dat data100.dat : ejercicio.x
	./ejercicio.x 100 > data100.dat
	./ejercicio.x 50 > data50.dat
	./ejercicio.x 10 > data10.dat
ejercicio.x : ejercicio30.cpp
	c++ ejercicio30.cpp -o ejercicio.x