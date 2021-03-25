/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this -> data=data;
        next =NULL;
    }
};
Node*takeinput(){
    int data;
    Node*head=NULL;
    Node*tail=NULL;
    cin>>data;
    while(data!=-1){
        Node *n=new Node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;

        }


        cin>>data;


    }

    return head;
}

Node*takeinputhead(){
     int data;
    Node*head=NULL;
    Node*tail=NULL;
    cin>>data;
    while(data!=-1){
        Node *n=new Node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            
            n->next=head;
            head=n;

        }


        cin>>data;


    }

    return head;
}

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;


}
int lengthlist(Node *head){
    Node*temp=NULL;
    temp=head;
    int pointer=0;
    while(temp!=NULL){
        pointer++;
        temp=temp->next;
    }
    return pointer;
}
void printinode(Node*head,int i){
    Node* temp=head;
    
    int length=0;
    length=lengthlist(temp);
    if(i<0 || i>length){
        cout<<"object doesnt exists"<<endl;
    }
    else{
        for(int j=1;j<i;j++){
            head=head->next;
        }
        cout<<head->data<<endl;
    }
}
void printithnodewithzeroindex(Node*head,int i){
    if(i<0){
        cout<<"index not exists"<<endl;
    }
    else if(i==0){
        cout<<head->data<<endl;
    }else{
        int count=1;
        while(count<=i && head!=NULL){
            head=head->next;
            count++;
        }
        if(head){
            cout<<head->data<<endl;
        }else{
            cout<<"NULL"<<endl;
        }
    }
}
Node *insertatithposition(Node*head,int i,int data){
    if(i<0){
        return head;
    }else if(i==0){
        Node*n=new Node(data);
        n->next=head;
        head=n;
        return head;
    }else{
        Node * temp=NULL;
        temp=head;
        int count=1;
        while(count<=i-1 && temp){
            temp=temp->next;
            count++;
        }
        if(temp){
             Node *n =new Node(data);
        n->next=temp->next;
        temp->next=n;
        return head;

        }else{
            return head;
        }
        
       
    }
    


}

Node * deleteatithposition(Node*head,int i){
    if(i<0){
        return head;
    }
    else if(i==0){
        Node *temp=head->next;
        head->next=NULL;
        delete head;
        return temp;
    }else{
        Node*temp=head;
        int count=1;
        while(count<=i-1&& temp){
            temp=temp->next;
            count++;
        }
        if(temp && temp->next ){
            Node * deletenode=temp->next;
        temp->next=deletenode->next;
        deletenode->next=NULL;
        delete deletenode;
        return head;
        }else{
            return head;
        }
        
    }
}

int main(){
 

Node*input=takeinput();
//cout<<"length of linked list is "<<lengthlist(input)<<endl;
print(input);
//printithnodewithzeroindex(input,0);
//Node*head=insertatithposition(input,3,1);
Node *head=deleteatithposition(input,3);
print(head);




    return 0;
}