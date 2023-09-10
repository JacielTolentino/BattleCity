bin/battlecity : src/battlecity.cpp include/Enemigo.hpp include/Bullet.hpp include/Menu.hpp include/Nivel.hpp include/Poder.hpp include/Agua.hpp include/Aguila.hpp include/Arbusto.hpp include/Cemento.hpp include/Color.hpp include/Fuerza.hpp include/Granada.hpp include/Ladrillo.hpp include/Piedra.hpp include/Refuerzo.hpp include/Reloj.hpp include/Tanque.hpp include/TanqueAcorazado.hpp include/TanqueFuerte.hpp include/TanqueRapido.hpp include/VidaExtra.hpp
	echo "Compilando el archivo Battlecity."
	g++ src/battlecity.cpp -o bin/battlecity.cpp -I include

runBattleCity : bin/battlecity
	./bin/mascota
