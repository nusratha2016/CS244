all: Main

	Shape.o:
				 g++ -c Shape.cc

	Circle.o:
				  g++ -c Circle.cc

	Rectangle.o:
						 g++ -c Rectangle.cc

	Triangle.o:
						g++ -c Triangle.cc
	Main: Shape.o Circle.o Rectangle.o Triangle.o
					 g++ -o Main Shape.o Circle.o Rectangle.o Triangle.o

	clean:
						rm -f Shape.o Circle.o Rectangle.o Triangle.o Main
