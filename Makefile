bin/test : src/tanque.cpp include/*
			c++ src/tanque.cpp -o bin/test -I include -lcurses

run : bin/test
	./bin/test
# #CXX = x86_64-w64-mingw32-g++ #Windows
# #CXXFLAGS = -g   Linux
