
template <typename T>
class Node {
public:
	Node<T>* nextNode;
	Node<T>* previousNode;
	T value;

	Node(T val) : value(val), nextNode(nullptr), previousNode(nullptr) {}
};