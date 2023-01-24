template <typename T>
struct node_t
{
    T key;
    node_t *next;
}

template <typename T>
class LinkedList
{
private:
    node_t<T> first;
    node_t<T> last;
public:
    LinkedList::LinkedList()
    {
        this.first = this.last;
    }

    LinkedList::~LinkedList()
    {
        
    }
}