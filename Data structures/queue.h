struct queueNode {
	int data;
	queueNode *next;
};

class queue {
private:
	queueNode *front, *rear;
public:
	queue(); //default конструктор
	queue(const queue &other); //copy конструктор
	~queue();
	bool isEmpty() const; //връща дали е празен
	int size() const; //връща текущия размер
	void push(int val); //вкарва елемент "най-отгоре"/отпред
	void pop(); //изтрива "най-горния"/последния вкаран елемент
	int front(); //показва "най-горния"/първия вкаран елемент
	int back(); //показва "най-долния"/последния вкаран елемент
	friend std::ostream &operator<< (ostream &output, const dynamicStack &other);
};
