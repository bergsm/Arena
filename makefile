all:
	g++ -g -std=c++0x Barbarian.cpp BlueMen.cpp CreatureBase.cpp Die.cpp HarryPotter.cpp input_validation.cpp main.cpp Medusa.cpp menu.cpp random.cpp Vampire.cpp -o Project3

clean:
	rm -f *.o *~ *.out Project3