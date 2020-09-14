.PHONY: default guard-% build brun clean
 
default:
	@echo 'Usage:'
	@echo '  make brun f=<output_filename>            build and run <f>.c code'
	@echo '  make build f=<output_filename>           build specified C file'
	@echo '  make run f=<output_filename>             run specified executable'
	@echo '  make clean                               delete all executables'

guard-%:
	@if [ -z '${${*}}' ]; then echo 'Missing environment variable: $*' && exit 1; fi

build: guard-f
	@ C_FILE=$(shell find . -type f -name $f.c);\
	gcc -Wall -o $$f $$C_FILE

run: guard-f
	@./$$f

brun: build run

# clean:
# 	@find . -type f ! -name "*.*" ! -name "Makefile" -not -iwholename "*.git*" -exec rm {} +
