#include<iostream>
using namespace std;
class Node // User defined Data Type
{
    public:
    int val;
    Node* next;
    Node( int val )
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList // User defined Data Structure
{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        Node* temp = head;
        while( temp!=NULL )
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtEnd( int val )
    {
        Node* temp = new Node( val );
        if( size==0 ) head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtStart( int val )
    {
        Node* temp = new Node( val );
        if( size==0 ) head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt( int idx, int val )
    {
        if( idx<0 || idx>size ) cout<<"Invalid input"<<endl;
        else if( idx==0 ) insertAtStart( val );
        else if( idx==size ) insertAtEnd( val );
        else
        {
            Node* t = new Node( val );
            Node* temp = head;
            for( int i=1; i<=idx-1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx( int idx )
    {
        if( idx<0 || idx>=size )
        {
            cout<<"Invalid index";
            return -1;
        }
        else if( idx==0 ) return head->val;
        else if( idx==size-1 ) return tail->val;
        else
        {
            Node* temp = head;
            for( int i=1; i<=idx; i++ )
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void delAtHead()
    {
        if( size==0 )
        {
            cout<<"List is empty";
            return;
        }
        // else if( size==1 )
        // {
        //     head = tail = NULL;
        //     size--;
        // }
        head = head->next;
        size--;
    }
    void delAtTail()
    {
        if( size==0 )
        {
            cout<<"List is empty";
            return;
        }
        // else if( size==1 )
        // {
        //     head = tail = NULL;
        //     size--;
        //     return;
        // }
        Node* temp = head;
        while( temp->next!=tail )
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void delAtIdx( int idx )
    {
        if( idx<0 || idx>=size )
        {
            cout<<"Invalid index";
            return;
        }
        else if( idx==0 ) return delAtHead();
        else if( idx==size-1 ) return delAtTail();
        else
        {
            Node* temp = head;
            for( int i=1; i<=idx-1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main()
{
    LinkedList ll; // { }
    // LinkedList* ll = new LinkedList();
    ll.insertAtEnd( 10 ); // {10->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd( 20 ); // {10->20->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd( 30 ); // {10->20->30->NULL}
    ll.insertAtEnd( 40 ); // {10->20->30->40->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtStart( 900 ); // {900->10->20->30->40->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtStart( 1000 ); // {1000->900->10->20->30->40->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAt( 2,600 ); // {1000->900->600->10->20->30->40->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAt( 4,80 ); // {1000->900->600->10->80->20->30->40->NULL}
    ll.display();
    cout<<ll.size<<endl;
    cout<<ll.getAtIdx( 2 )<<endl; // {600}
    ll.delAtHead();
    ll.display(); // {900->600->10->80->20->30->40->NULL}
    cout<<ll.size<<endl;
    ll.delAtTail();
    ll.display(); // {900->600->10->80->20->30->NULL}
    cout<<ll.size<<endl;
    ll.delAtIdx( 3 );
    ll.display(); // {900->600->10->20->30->NULL}
    cout<<ll.size<<endl;
}