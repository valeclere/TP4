SRC=Cercle.cpp Forme.cpp Point.cpp Rectangle.cpp tests_catch.cpp
#SRC=$(wildcard *.cpp)  
EXE=cpp4

CXXFLAGS+=-Wall -Wextra -MMD -g -O2
LDFLAGS= #-lSDL

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)
