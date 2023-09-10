bin/battlecity : src/battlecity.cpp include/Enemigo.hpp include/Bullet.hpp include/Menu.hpp include/Nivel.hpp inclue/Poder.hpp
	echo "Compilando el archivo Battlecity."
	g++ src/battlecity.cpp -o bin/battlecity.cpp -I include

runBattleCity : bin/battlecity
	./bin/mascota
