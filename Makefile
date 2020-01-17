SRC := nss_fucknitkc.c

.PHONY: format
format: ${SRC}
	clang-format -i $^
