// // 1st vedio of the ll esme 2.5 to 4 hour ke aage tk ka content h 
// // first vedio finished

// // Implementation of Singly Linked List Class 
// // Linked List Class
// // Singly Linked List Class 



// #include <iostream>
// using namespace std;
// class Node
// { // user defind data type
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class linkedlist
// { // user defind data structure
// public:
//     // three data member
//     Node *head;
//     Node *tail;
//     int size;
//     // constructor
//     linkedlist() // initial when we make a node than uss node ka head and tail vh null ho
//     {
//         head = tail = NULL;
//         size = 0;
//     }


// // InsertAtEnd / InsertAtTail function -: T.C. = O(1) = S.C.
// // new node insert kar rhe h jiska name temp hai 

//     void insertatend(int val)
//     {
//         Node* temp = new Node(val);
//         if (size == 0)
//         {
//             head = tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }



// // InsertAtBeginning / InsertAtHead function -:
// // new node insert kar rhe h jiska name temp hai 

//     void insertathead(int val)
//     {
//         Node* temp=new Node(val);
//         if(size==0)
//         {
//             head=tail=temp;
//         }
//         else
//         {
//             temp->next=head;
//             head=temp;
//         }
//         size++;
//     }
     





// // InsertAtAnyPosition in the ll / InsertAtIndex function -:
// // new node insert kar rhe h jiska name t hai and temp node ko traverse kar rhe h

// void insertatidx(int idx,int val)
// {
//     if(idx<0 || idx>size) cout<<" Invalid Index "<<endl;
//     else if(idx==0) insertathead(val);
//     else if(idx==size) insertatend(val);
//     else
//     {
//         Node* t=new Node(val);
//         Node* temp=head;
//         // for(int i=0; i<idx-1;i++)
//         for(int i=1; i<=idx-1;i++)
//         {
//             temp=temp->next; // temp traverse kar rhe hai idx - 1 tk 
//         }
//         t->next=temp->next;
//         temp->next=t;
//         size++;
//     }

// }
   


// // Find/GetValue of the given Index / any Index in the ll 
// // GetValueAtAnyIndex function -: 

// int getatidx(int idx)
// {
//     if(idx<0 || idx>=size) 
//     {
//         cout<<"Invalid Index ";
//         return -1;
//     }
//     else if(idx==0) return head->val;
//     else if (idx==size-1) return tail->val;
//     else
//     {
//         Node* temp=head;
//         for(int i=1; i<=idx; i++)
//         {
//             temp=temp->next;
//         }
//         return temp->val;
//     }
// }


// // delete ele. from the givem ll 
// // DeleteAtHead function -:

// void deleteathead()
// {
//     if(size==0)
//     {
//         cout<<"List is empty ! ";
//         return ;
//     }
//     else // (size>=0)
//     {
//         head=head->next;
//         size--;
//     }
// }


// // DeleteAtTail function -:

// void deleteattail()
// {
//     if(size==0)
//         {
//              cout<<"List is empty ! ";
//              return ;
//         }
//         Node *temp = head;
//         while (temp->next!=tail)
//         {
//            temp=temp->next;
//         }
//         temp->next=NULL;
//         tail=temp;
//         size--;
// }



//  // Delete node of given index or any index from the given ll
//  // DeleteAtIndex function -:

// void deleteatidx(int idx)
// {
//     if(size==0)
//     {
//         cout<<"Linked List is empty !";
//         return;
//     }

//     else if(idx<0 || idx>=size)
//     {
//         cout<<"Invalid index ! ";
//         return ;
//     }

//     else if(idx==0) return deleteathead();
//     else if(idx==size-1) return deleteattail();
//     else
//     {
//         Node* temp=head; // temp traverse ho rha h idx - 1 tak using for loop not while loop while means tb tk chalte rho jb tk condi. fail na ho jaye 
//         for(int i=0; i<idx-1; i++)
//         {
//             temp=temp->next;
//         }
//             temp->next=temp->next->next;
//             size--;
//         }
//     } 



// // Display function -:
//     void display()
//     {
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->val<<" ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }


// };

// int main()
// {
//     linkedlist ll;                    // { } -> empty ll

//     // // InsertAtEnd in the ll / InsertAtTail function -: T.C. = O(1) = S.C.
    
//     ll.insertatend(10);               // { 10->NULL }
//     ll.display();
//     cout<<ll.size;
//     cout<<endl;
//     ll.insertatend(20);               // { 10->20->NULL }
//     ll.display();
//     cout<<ll.size<<endl;
//     ll.insertatend(30);               // { 10->20->30->NULL }
//     ll.insertatend(40);               // { 10->20->30->40->NULL }
//     ll.display();
//     cout<<ll.size;
//     cout<<endl;


//     // InsertAtBeginning / InsertAtHead function -:
    
//     ll.insertathead(50);                // { 50->10->20->30->40->NULL }
//     ll.display();
//     cout<<ll.size;
//     cout<<endl;
//     ll.insertathead(100);
//     ll.display();                       // { 100->50->10->20->30->40->NULL }
//     cout<<ll.size<<endl;
//     ll.insertathead(900);
//     ll.display();
//     cout<<ll.size<<endl;                //  { 900->100->50->10->20->30->40->NULL }




//     // InsertAtAnyPosition in the ll / InsertAtIndex function -:

//     ll.insertatidx(4,1000);             //  { 900->100->50->10->1000->20->30->40->NULL }
//     ll.display();
//     cout<<ll.size<<endl;                //  8


//     // Find any value/element of the given ll
//     // Find any value of the particular index in the ll 

//     // Find/GetValueAtAnyIndex in the given ll function -:

//     cout<<ll.getatidx(6);
//     cout<<endl;
//     cout<<ll.getatidx(0);
//     cout<<endl;
//     cout<<ll.getatidx(-1);
//     cout<<endl;
//     cout<<ll.getatidx(8);
//     cout<<endl;



//     // delete element/value from the linked list
//     // DeleteAtHead function -:

//     ll.deleteathead();
//     ll.display();
//     cout<<ll.size;
//     cout<<endl;
//     ll.deleteathead();
//     ll.display();
//     cout<<endl;
//     ll.deleteathead();
//     ll.display();
//     cout<<ll.size;

//     cout<<endl;
//     cout<<endl;
 

//     // DeleteAtTail function -:
//     ll.deleteattail();
//     ll.display();
//     cout<<ll.size<<endl;
//     ll.deleteattail();
//     ll.display();
//     cout<<ll.size;
//     cout<<endl;



//     // Delete Node/ele/val at any idx/ at given idx 
//     // DeleteAtIndex function -:
//     ll.deleteatidx(1);
//     ll.display();
//     cout<<ll.size;

// }


// // Output -: 
// // 10 
// // 1
// // 10 20 
// // 2
// // 10 20 30 40 
// // 4
// // 50 10 20 30 40 
// // 5
// // 100 50 10 20 30 40 
// // 6
// // 900 100 50 10 20 30 40 
// // 7
// // 900 100 50 10 1000 20 30 40 
// // 8
// // 30
// // 900
// // Invalid Index -1
// // Invalid Index -1
// // 100 50 10 1000 20 30 40 
// // 7
// // 50 10 1000 20 30 40 

// // 10 1000 20 30 40 
// // 5

// // 10 1000 20 30
// // 4
// // 10 1000 20
// // 3
// // 10 20
// // 2





// // Linked List implementation ->
// // insert at head, tail, at any idx in ll.
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class Linkedlist
// {
//     public:
//     Node* head;
//     Node* tail;
//     int size;
//     Linkedlist()
//     {
//         head=tail=NULL;
//         size=0;
//     }


// int insertathead(int val)
// {
//     Node* temp=new Node(val);
//     if(size==0)
//     {
//         head=tail=temp;
//     }
//     else 
//     {
//          temp->next=head;
//          head=temp;
//     }
//          size++;
// }

// int insertattail(int val)
// {
//     Node* temp=new Node(val);
//     if(size==0)
//     {
//         head=tail=temp;
//     }
//     else
//     { 
//          tail->next=temp; 
//          tail=temp;
//     }
//         size++;
// }

// int insertatidx(int idx, int val)
// {
//     if(idx<0 || idx>size) cout<<"Invalid idx "<<endl;
//     else if (idx==0) return insertathead(val);
//     else if(idx==size) return insertattail(val);
//     else
//     {
//     Node* t = new Node(val);
//     Node* temp=head;
//     for(int i=1; i<=idx-1; i++)
//     {
//         temp=temp->next;
//     }
//     t->next=temp->next;
//     temp->next=t;
//     }
//     size++;
// }

// void display()
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// };
// int main()
// {
//     Linkedlist ll;
//     ll.insertathead(10);
//     ll.insertathead(20);
//     ll.insertathead(30);
//     ll.insertathead(40);
//     ll.insertathead(50);
//     ll.display();
//     cout<<endl;

//     // ll.insertattail(100);
//     // ll.insertattail(100);
//     // ll.display();

//     ll.insertatidx(5,3333);
//     ll.display();
// }

// // 50 40 30 20 10 

// // 50 40 30 20 10 3333 


// Make a function of insert at head, insert at tail, insert at any idx, size and display. 

// // Implementation of the singly linked list -:  

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;

//     // constructor -:
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class linkedlist{
//     public:
//     Node* head;
//     Node* tail;
//     int size;

//     // constructor -:
//     linkedlist(){
//         head=tail=NULL;
//         size=0;
//     }

//     void insertathead(int val){
//         Node* temp=new Node(val);
//         if(size==0){
//             head=tail=temp;
//         }else{
//             temp->next=head;
//             head=temp;
//         }
//         size++;
//     }

//     void insertatend(int val){
//         Node* temp=new Node(val);
//         if(size==0){
//             head=tail=temp;
//         }else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }

//     void insertatanyidx(int idx, int val){
//         Node* temp=new Node(val);
//         if(idx<0 || idx>size) cout<<"Invalid idx";
//         if(idx==0) insertathead(val);
//         if(idx==size) insertatend(val);
//         else{
//             Node* t=new Node(val);
//             Node* temp=head;
//             for(int i=0; i<idx-1; i++){
//                 temp=temp->next;
//             }
//             t->next=temp->next;
//             temp->next=t;
//         }
//         size++;
//     }

//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }


// };
// int main(){
//     linkedlist ll;
//     ll.insertathead(10);
//     ll.insertathead(20);
//     ll.insertathead(30);
//     ll.insertathead(40);

//     cout<<ll.size<<endl;
//     ll.display();
//     cout<<ll.size<<endl;

//     ll.insertatend(100);
//     ll.insertatend(200);
//     cout<<ll.size<<endl;

//     ll.display();
//     cout<<ll.size<<endl;

//     ll.insertatanyidx(4,40000);
//     ll.insertatanyidx(6,60000);

//     ll.display();
//     cout<<ll.size<<endl;


// }

// // 4
// // 40 30 20 10 
// // 4
// // 6
// // 40 30 20 10 100 200 
// // 6
// // 40 30 20 10 40000 100 60000 200
// // // 8



// Make a function of get at head, get at tail, get at any idx, size and display. 


#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }

    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    int getathead(){
        return head->val;
    }

    int getattail(){
        return tail->val;
    }

    int getatanyidx(int idx){
        if(idx<0 || idx>size) cout<<"Invalid idx";
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=0; i<idx; i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }


    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    linkedlist ll;
    ll.insertathead(10);
    ll.insertathead(20);
    ll.insertathead(30);
    ll.insertathead(40);
    ll.insertathead(50);


    cout<<ll.getathead()<<endl;
    cout<<ll.size<<endl;


    cout<<ll.getattail()<<endl;
    cout<<ll.size<<endl;


    cout<<ll.getatanyidx(2)<<endl;
    cout<<ll.size<<endl;


    ll.display();
    cout<<ll.size<<endl;
}

// 50
// 5
// 10
// 5
// 30
// 5
// 50 40 30 20 10
// 5





