CFLAGS = -Wall -O2

all: main.o prompts.o
	$(CC) $(CFLAGS) -o ./zeckupdate main.o prompts.o
	mkdir -pv ~/.zeckupdate
	touch ~/.zeckupdate/update.txt

main.o: main.c
	$(CC) $(CFLAGS) -c main.c
prompts.o: prompts.c prompts.h
	$(CC) $(CFLAGS) -c prompts.c

install:
	echo "This requires root privileges to install!"
	install -vm755 zeckupdate /usr/local/bin

