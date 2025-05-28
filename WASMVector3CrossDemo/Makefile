# OVERVIEW
# 
# Build Process:
# 	C++ -> IR (*.ll) -> Object (*.o) -> Binary (*.wasm)
#
# See:
# 	- https://lld.llvm.org/WebAssembly.html
#   - https://clang.llvm.org/get_started.html
#   - https://surma.dev/things/c-to-webassembly
#

CXX = clang

CXXFLAGS = \
	--target=wasm32 \
	-S \
	-emit-llvm \
	-nostdlib \
	-Weverything \
	-Wno-unsafe-buffer-usage \
	-Wno-c++98-compat \
	-Wno-reserved-identifier \
	-Wno-sign-conversion \
	-Wno-old-style-cast \
	-Wno-c++98-compat-pedantic \
	-Wno-undef \
	-Wno-missing-variable-declarations \
	-Wno-double-promotion \
	-Wno-implicit-float-conversion

LDFLAGS = \
	--no-entry \
	--export-dynamic \
	--initial-memory=4194304 \
	--max-memory=4194304 \
	-z stack-size=32768

INCLUDES = -I./Inc -I./../Inc

serve: Demo.wasm
	python3 -m http.server 2323

# Object -> Binary (*.wasm)
Demo.wasm: Demo.o
	wasm-ld $(LDFLAGS) -o Demo.wasm Demo.o

# IR -> Object (*.o)
Demo.o: Demo.ll
	llc -march=wasm32 -filetype=obj -o $@ $<

# C++ -> IR (*.ll)
Demo.ll: Demo.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $<

clean:
	$(RM) Demo.ll Demo.o Demo.wasm
