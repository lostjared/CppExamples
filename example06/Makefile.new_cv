
FLAGS= `pkg-config /usr/local/new_cv/lib/pkgconfig/opencv.pc --cflags --libs`
PROGRAM=test

$(PROGRAM): $(PROGRAM).cpp
	$(CXX) $(PROGRAM).cpp -o $(PROGRAM) $(FLAGS)
clean:
	rm -f $(PROGRAM)

