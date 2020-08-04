class Node {
public:
	Node(Node* next, int value);
	~Node();
	Node* getNext();
	int getValue();
	void setNext(Node* node);
	void setValue(int value);
private:
	Node* next;
	int value;
};