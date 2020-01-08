objects	= coffbyte_analyzer.o\
          coffbyte_generator.o\
          coffbyte.o

coffbyte:$(objects)
	gcc -o $@ $(objects) -lm
	rm -rf *.o

%.o:	src/%.c
	gcc -c -o $@ $<

.PHONY:	clean

clean:
	rm -rf *.o coffbyte
