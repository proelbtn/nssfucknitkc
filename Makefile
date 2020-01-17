SRC := nss_fucknitkc.c
TARGET := libnss_fucknitkc.so

.PHONY: build
build: format ${TARGET}

.PHONY: format
format: ${SRC}
	clang-format -i $^

.PHONY: link
link: ${TARGET}
	sudo ln -sf $(shell pwd)/$^ /lib/$^.1
	sudo ln -sf $(shell pwd)/$^ /lib/$^.2

${TARGET}: ${SRC}
	clang -shared -fPIC -o $@ $^ 


