# DSA
DSA problems and implementation

#NODE 
  Class Node{
    public: //making data and pointer to next node public, so that we can access it outside the class
      int data;
      Node* next;
      Node(int data){ // a constructor to initialize data and pointer to next node as null
        this->data = data; 
        this->next = NULL;
      }
  };
  
  #INSERTION IN LINKEDLIST
  ******newNode->next means ------ *(newNode).next ///dereferencing the value
  
  1) at beginning
    -three steps to add node at beginning
  void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data); --------------------//1- creating a new node
    newNode->next = head;      ----------- //2-since we are adding node at beginning, point pointer to next node to head
    head = newNode;      ------ //3-point newly created node as head 
  }
  
  2) at end
    -
    void insertAtEnd(Node* &head, int data){
      Node* newNode = new Node(data);
      //check if the head node is null, if head is null the linkedlist is empty, so we can assing head as new node
      if(head == NULL){
        head = newNode;
        return;
      }
      Node* current = head;
      while(current->next != NULL){ //traverse till the last node
        current = current->next;
      }
      //point current's next to newNode
      current->next = newNode;
      
   }
  
