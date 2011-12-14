#ifndef ID_GENERATOR
#define ID_GENERATOR

#include <cstddef>

class IDGenerator {
public:
	static long GetId() { return getInstance()->id; } 
	static void SetId(long _id) { getInstance()->id = _id; } 
private:
        IDGenerator() { id = 0;  }
	long id; 
        static IDGenerator* getInstance();
	static IDGenerator* _instance;
};

#endif