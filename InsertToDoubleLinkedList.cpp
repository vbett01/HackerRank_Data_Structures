/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
     Node *add = new Node;
    add->data = data;
    add->prev = NULL;
    add->next = NULL;
    if(head == NULL)
    {
        head = add;
        return head;
    }
    else if(data < head->data)
    {
        add->next = head;
        head->prev = add;
        head = add;
        return head;
    }
    else
    {
        Node *cur = head;
        Node *temp;
        while(cur->next != NULL)
        {
            if(data < (cur->next)->data)
            {
                temp = cur->next;
                cur->next = add;
                add->prev = cur;
                add->next = temp;
                (add->next)->prev = add;
                return head;
            }
            cur = cur->next;
        }
        cur->next = add;
        add->prev = cur;
        return head;
    }
}
