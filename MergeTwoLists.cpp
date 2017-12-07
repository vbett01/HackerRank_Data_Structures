/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL) return headB;
    if(headB == NULL) return headA;
    
    Node *p1 = headA;
    Node *p2 = headB;
    Node *head = NULL;
    Node *curr =  NULL;
    
    while(p1 and p2)
    {
        if(head == NULL)
        {
            if(p1->data <= p2->data)
            {
                head = curr = p1;
                p1 = p1->next;
            }
            else
            {
                head = curr = p2;
                p2 = p2->next;
            }
           
        }
        else
        {
          if(p1->data <= p2 ->data)
          {
              curr->next = p1;
              curr = p1;
              p1 = p1->next;
          }
            else
            {
                curr->next = p2;
                curr = p2;
                p2 = p2->next;
            }
        }
    }
    if(p1) curr->next = p1;
    if(p2) curr->next = p2;
    return head;
}
