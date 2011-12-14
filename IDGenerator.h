class IDGenerator {
public:
	static inline int GetId() {	return ++id; } 
	static inline void SetId(int _id) { id = _id; } 
private:
	static int id; 
};
