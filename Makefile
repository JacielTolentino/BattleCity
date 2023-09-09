bin/battlecity : src/battlecity.cpp include/Enemigo.hpp
	echo "Compilando el archivo Battlecity."
	g++ src/battlecity.cpp -o bin/battlecity.cpp -I include

runBattleCity : bin/battlecity
	./bin/mascota
