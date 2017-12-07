/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node * toAdd = new Node;
    toAdd->data = data;
    toAdd->next = NULL;
    
    if(head == NULL)
    {
        head = toAdd;
    }else
    {
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = toAdd;
    }
      
   return head;
}
