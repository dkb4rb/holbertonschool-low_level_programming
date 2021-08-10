comp : 
	gcc -g -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a

comp-holb :
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a

comp-holb- : 
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

chown : 
	sudo chown dkbarb10 *

clean : 
	rm -f programa *.o *.gch *.out a

run : 
	./a Requiscat

gitt: 
	git add .; git commit -m ""; git push 

