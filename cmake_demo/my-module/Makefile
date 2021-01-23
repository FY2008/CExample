build_dir = ./build
bin_dir = $(build_dir)/bin
exe_name = hello

all: build
	cd $(build_dir); make

clean:
	rm -rf $(build_dir)

run:
	cd $(bin_dir); ./$(exe_name)

build:
	mkdir $(build_dir); cd $(build_dir); cmake ..
