CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp \
	center.h \
	center.cpp \
	colors.h \
	coordinate.cpp \
	coordinate.h \
	corner.cpp \
	corner.h \
	face.cpp \
	face.h \
	edge.cpp \
	edge.h \
	piece.h \
	pieceBase.h

OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=rubiks

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
		$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

# dont look for a clean.* file name - use this command
.PHONY: clean
clean:
	rm *.o
