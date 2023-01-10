main: $(wildcard ./src/*.c)
	$(CC) $^ -I./include -o ./bin/tyr.exe