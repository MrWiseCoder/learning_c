cc=gcc
flags=-o
target=vars
build_dir=./build
final_target=$(build_dir)/$(target)

all: $(final_target)

$(final_target): $(target).c
	@mkdir $(build_dir)
	gcc $(flags) $@ $?

clean:
	rm -rf $(build_dir)

run:
	$(final_target)

