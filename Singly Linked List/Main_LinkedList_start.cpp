// // // 1st vedio of the ll esme 2 hour ke aage ka content h 

// #include <iostream>
// using namespace std;
// // Node class 
// class Node{
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// // iterative display is better than recursive display in ll
// // display ll or display values of the ll
// // T.C.= O(n), S.C.= O(1)

// // void display(Node* head){
// //     Node* temp = head;
// //     while(temp!=NULL){
// //         cout<<temp->val<<" ";
// //         temp=temp->next;
// //     }
// //     cout<<endl;
// // }

//              // or
// // another display fun for display ll

// void display(Node* head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// // find size of the ll -> size() fun

// int size(Node* head){
//     Node* temp = head;
//     int n = 0; // n = size   jo count karega size/length of the ll
//     while(temp!=NULL){
//         n++;
//         temp=temp->next;
//     }
//     return n;
//     cout<<endl;
// }

// // Display ll recursively
// // T.C.= O(n), S.C.= O(n)

// void displayrec(Node* head){ // head is a pointer node which store the address of another node
//     if(head==NULL) return; // base case 
//     cout<<head->val<<" "; // kaam 
//     displayrec(head->next); // recursive call
// }



// // display the ll in the reverse order

// void displayrec2(Node* head){ // head is a pointer node which store the address of another node
//     if(head==NULL) return; // base case 
//     displayrec2(head->next); // recursive call
//     cout<<head->val<<" "; // kaam 
// }


// //                 Or


// void reverse_displayrec(Node* head){ // head is a pointer node which store the address of another node
//     if(head==NULL) return; // base case 
//     reverse_displayrec(head->next); // recursive call
//     cout<<head->val<<" "; // kaam 
// }

// int main()
// {
//     Node* a = new Node(10); // Node* a  this is address 
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);
//     Node* e = new Node(50);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;


// //     // print/Display all values/elements of the linked list so we make a function named display()

// //     display(a); // (a) is a address and address store in pointer -> Node* head


// //    // find the size/length of the linked list so we make a fun named size()
// //     cout<<size(a);


// //    display ll or values of the ll using recursion So, we make a fun displayrec()
//       displayrec(a);
//       cout<<endl;
//       // display the ll in the reverse order
//       displayrec2(a);
//       cout<<endl;
//       reverse_displayrec(a); 


   
// }





// // // Write code for linked list and implement the class Node and also find the size of the 
// // // linked list and display linked list via iterative and recursive manner. 


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

// void displaynor(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }


// // increasing order -> print  
// void displayrec(Node* head){
//     if(head==NULL) return;
//     cout<<head->val<<" ";
//     displayrec(head->next);
// }

// // decreasing order -> print 
// void displaydec(Node* head){
//     if(head==NULL) return ;
//     displaydec(head->next);
//     cout<<head->val<<" ";
// }

// // find size of the linked list -:
// int size(Node* head){
//     int n=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         n++;
//         temp=temp->next;
//     }
//     return n;
// }

// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);

//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     // e->next=NULL;

//     displaynor(a);

//     displayrec(a);
//     cout<<endl;
//     displaydec(a);
//     cout<<endl;
//     cout<<size(a);
   
// }

// // 10 20 30 40 50 
// // 10 20 30 40 50 
// // 50 40 30 20 10 
// // 5




// Implement linked list and display their ele.s via iterative and recursive ways. 

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

void displayIte(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;

    displayIte(a); // pass only head and print whole linked list

    cout<<endl;

    displayRec(a);

}

// 10 20 30 40 50 

// 10 20 30 40 50