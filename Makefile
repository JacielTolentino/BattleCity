CXX = x86_64-w64-mingw32-g++ #Windows
#CXXFLAGS = -g   Linux

runBattleCity : bin/battlecity
	./bin/mascota

bin/battlecity : src/battlecity.cpp include/Enemigo.hpp include/Bullet.hpp include/Menu.hpp include/Nivel.hpp include/Poder.hpp include/Agua.hpp include/Aguila.hpp include/Arbusto.hpp include/Cemento.hpp include/Color.hpp include/Fuerza.hpp include/Granada.hpp include/Ladrillo.hpp include/Piedra.hpp include/Refuerzo.hpp include/Reloj.hpp include/Tanque.hpp include/TanqueAcorazado.hpp include/TanqueFuerte.hpp include/TanqueRapido.hpp include/VidaExtra.hpp
	echo "Compilando el archivo Battlecity."
	g++ src/battlecity.cpp -o bin/battlecity.cpp -I include

RunMascota : bin/mascota
	./bin/mascota

bin/mascota : src/mascota.cpp include/Mascota.hpp
	$(CXX) src/mascota.cpp -o bin/mascota -I include
