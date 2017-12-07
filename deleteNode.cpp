/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *temp = head;
    if(position == 0)
    {
        // delete front
        head = head->next;
        delete temp;
        
    }
    else
    {
        
        Node *prev = head;
        for(int i = 0; i< position; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        Node *toDel = temp;
        if(temp->next == NULL)
        {
            prev->next = NULL;
        }
        else
        {
            prev->next = temp->next;
        }
        delete toDel;
    }
    return head;
}
