build-dll:
	mkdir -p dist/
	gcc -shared src/*.c -o dist/lib.so


test: build-dll
	pytest --verbose