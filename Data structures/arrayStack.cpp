arrayStack::arrayStack() {
	topOfStack = -1;
};

arrayStack::arrayStack(const arrayStack &other) {
	for(topOfStack = 0; topOfStack < other.size(); topOfStack++)
		this->values[topOfStack] = other.values[topOfStack];
};

bool arrayStack::isEmpty() const {
	return topOfStack == -1 || topOfStack == 0;
};

bool arrayStack::isFull() const {
	return topOfStack == MAX_SIZE;
};

int arrayStack::capacity() const {
	return MAX_SIZE;
};

int arrayStack::size() const {
	if(topOfStack == -1) return 0;
	return topOfStack;
};

void arrayStack::push(int val) {
	if(this->isFull())
		cout << "Attempted to push " << val << " to a full stack!\n";
	else {
		if(topOfStack == -1)
			topOfStack++;
		values[topOfStack++] = val;
	}
};

void arrayStack::pop() {
	if(this->isEmpty()) {
		cout << "\nStack is empty, can't remove from it!\n";
	} else {
		topOfStack--;
	}
};

int arrayStack::top() {
	if(this->isEmpty()) {
		cout << "\nStack is empty!\n";
	} else {
		return values[topOfStack - 1];
	}
};

std::ostream &operator<< (ostream &output, const arrayStack &other) {
	for(int i = 0; i < other.size(); i++)
		output << other.values[i] << " ";
	return output;
};


