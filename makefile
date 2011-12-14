objects = main.o HushApp.o ClientFrame.o ContactList.o Contact.o IDGenerator.o AddContactFrame.o
libs = `wx-config --libs`
compile = g++ -c $(flags)
tumble = g++ -o
flags = `wx-config --cxxflags`
src = main.cpp HushApp.cpp ClientFrame.cpp ContactList.cpp Contact.cpp IDGenerator.cpp AddContactFrame.cpp
executable = hushClient

all: 
	$(compile)  $(src)
	$(tumble) $(executable) $(objects) $(libs)

run: all
	./$(executable)
	
clean: 
	rm -f $(objects) $(executable) *~
