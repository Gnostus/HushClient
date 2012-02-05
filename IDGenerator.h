#ifndef ID_GENERATOR
#define ID_GENERATOR

#include <cstddef>

class IDGenerator {
public:
	inline static long GetId() {
		
		 return getInstance()->id++; 	
	} 
    IDGenerator() { id = 0;  }
	long id; 
    static IDGenerator* getInstance();
	static IDGenerator* _instance;
};

#endif
