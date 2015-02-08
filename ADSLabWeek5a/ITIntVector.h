class ITIntVector
{
public:
	ITIntVector(const int capacity);
	~ITIntVector();
	int push_back(int val);
	const int& at(int index) const;
	int& at(int index);
	int size();
	int capacity();
	int resize(int index);

private:
	int* vector;
	int vectorCapacity;
	int vectorSize;
	int pointer;
};