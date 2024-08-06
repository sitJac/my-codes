CC := clang
CXX := clang++

objects := main.o

hello: $(objects)
	$(CXX) -o $@ $(objects)

main.o: main.cpp
	$(CXX) -c main.cpp

clean:
	rm -f hello $(objects)
