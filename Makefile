exec = tammr.build
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g -Wall -lm -ldl -fPIC -rdynamic

$(exec): $(objects)
	gcc $(objects) $(flags) -o ./build/$(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o ./build/$@

clean:
	-rm ./build/*.build
	-rm ./build/*.a
	-rm ./build/*.o
	-rm ./build/src/*.o

lint:
	clang-tidy src/*.c src/include/*.h
