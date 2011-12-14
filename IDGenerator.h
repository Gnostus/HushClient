#include <cstddef>

class IDGenerator {
public:
	static int GetId() { return getInstance()->id; } 
	static void SetId(int _id) { getInstance()->id = _id; } 
private:
        IDGenerator() { id = 0;  }
	int id; 
        static IDGenerator* getInstance();
	static IDGenerator* _instance;
};
