/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *toAdd = new Node;
    toAdd->data = data;
    
    if(position == 0)
    {
        toAdd->next = head;
        head = toAdd;
    }
    else
    {
        Node *temp = head;
        for(int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }
        if(temp->next != NULL)
        {
           toAdd->next = temp->next; 
        }
        else
        {
            toAdd->next = NULL;
        }
        temp->next = toAdd;
    }
    return head;
}

