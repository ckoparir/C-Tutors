PKG=abstract 

CFLAGS= -std=c++14 -Wall -Werror

$(PKG): main.cpp shape.h circle.cpp circle.h
	g++ -o $(PKG) main.cpp circle.cpp circle.h shape.h $(CFLAGS)
