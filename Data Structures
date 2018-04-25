class arrayStack {
private:
	static int const MAX_SIZE = 5; //максимален размер на стека
	int topOfStack; //указател към текущия елемент
	int values[MAX_SIZE]; //масив с данни (СТЕК)
public:
	arrayStack(); //default конструктор
	arrayStack(const arrayStack &other); //copy конструктор
	bool isEmpty() const; //връща дали е празен
	bool isFull() const; //връща дали е пълен
	int capacity() const; //връща максималния капацитет на стека (MAX_SIZE)
	int size() const; //връща текущия размер
	void push(int val); //вкарва елемент "най-отгоре" 
	void pop(); //изтрива "най-горния"/последния вкаран елемент
	int top(); //показва "най-горния"/последния вкаран елемент
	friend std::ostream &operator<< (ostream & output, const arrayStack &other);
};
