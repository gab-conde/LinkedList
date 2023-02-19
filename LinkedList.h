#ifndef LinkedList_H
#define LinkedList_H

/**
 * A class for creating a linked list
*/
class LinkedList {
    
    
    /**
     * A class for creating nodes to go in a linked list
    */
   private:                 // Node class is private so its members cannot be accessed outside of the LinkedLIst class
    class Node {

        // data
        // previous pointer
        // next pointer
    };


    // LinkedList class members

    private:
    // head pointer
    // tail pointer
    // length

    public:
    /*==== Construction / Destruction ====*/
    LinkedList();
    LinkedList(const LinkedList<T>& list);
    ~LinkedList();

    /*==== Behaviors ====*/
    void PrintForward() const;
    void PrintReverse() const;
    void PrintForwardRecursive(const Node* node) const;
    void PrintReverseRecursive(const Node* node) const;

    /*==== Accessors ====*/
    unsigned int NodeCount() const;
    void FindAll(vector<Node*>& outData, const T& value) const;
    const Node* Find(const T& data) const;
    Node* Find(const T& data);
    const Node* GetNode(unsigned int index) const;
    Node* GetNode(unsigned int index);
    Node* Head();
    const Node* Head() const;
    Node* Tail();
    const Node* Tail() const;

    /*==== Insertion Operations ====*/
    void AddHead(const T& data);
    void AddTail(const T& data);
    void AddNodesHead(const T* data, unsigned int count);
    void AddNodesTail(const T8 data, unsigned int count);
    void InsertAfter(Node* node, const T& data);
    void InstertBefore(Node* node, const T& data);
    void InsertAt(const T& data, unsigned int index);

    /*==== Removal Operations ====*/
    bool RemoveHead();
    bool RemoveTail();
    unsigned int Remove(const T&data);
    bool RemoveAt(unsigned int index);
    void Clear();

    /*==== Operators ====*/
    const T& operator[](unsigned int index) const;
    T& operator[](unsigned int index);
    bool operator==(const LinkedList<T>& rhs) const;
    LinkedList<T>& operator=(const LinkedList<T>& rhs);
};

#endif