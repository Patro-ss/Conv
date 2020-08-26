build:
	gcc conv.c
	mv ./a.out ./conv
install:
	mkdir -p  /usr/local/bin
	mv conv /usr/local/bin
uninstall:
	rm /usr/local/bin/conv
