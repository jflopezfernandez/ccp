CPP := g++
CFLAGS := -std=c++17 -Wall -Wextra

PROGRAM := test

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst $.cpp,%.o,$(wildcard *.cpp))

$(PROGRAM): $(OBJS)
	$(CPP) $(CFLAGS) -o $(PROGRAM) $(OBJS)

$(OBJS): $(SRCS)
	$(CPP) -c $(CFLAGS) $(SRCS)

clean:
	rm -rf $(wildcard *.o)
