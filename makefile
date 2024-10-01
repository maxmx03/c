build:
	clear
	# gcc main.c -o ./bin/program
	gcc main.c -lncurses -o ./bin/program
	./bin/program
