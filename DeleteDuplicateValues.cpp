/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *p1, *p2, *dup;
    p1 = head;
    while(p1 != NULL and p1->next != NULL)
    {
        p2 = p1;
        while(p2->next != NULL)
        {
            if(p1->data == p2->next->data)
            {
                dup = p2->next;
                p2->next = p2->next->next;
                delete dup;
            }
            else
            {
                p2 = p2->next;
            }
        }
        p1 = p1->next;
    }
    
    return head;
}
