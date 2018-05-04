struct queueNode {
	int data;
	queueNode *next;
};

class queue {
private:
	queueNode *_front, *_rear;
	int _size;
public:
	queue(); //default конструктор
	queue(const queue &other); //copy конструктор
	~queue();
	bool isEmpty() const; //връща дали е празен
	int size() const; //връща текущия размер
	void push(int val); //вкарва елемент отпред
	void pop(); //изтрива последния вкаран елемент
	int front(); //показва елементa най-отпред
	int back(); //показва елемента най-отзад
	friend std::ostream &operator<< (ostream &output, const dynamicStack &other);
};
