EXES = main
src = $(wildcard *.cpp)
obj = $(src:.cpp=.o)

.PHONY: all

LDFLAGS = -std=c++11

all: $(obj)
	$(CXX) -o $@ $^ $(LDFLAGS) && ./all

.PHONY: clean
clean:
	rm -f $(obj) myprog $(EXES)
