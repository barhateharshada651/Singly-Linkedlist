 #include<iostream>
 using namespace std;
 class node
 {
      public:
      int data;
      node* next;
      node(int x)

  {
    data=x;
    next=NULL;
  }
 };
 class linklist
 {
    private:
    node*head;
    public:
    linklist()
    {
        head=NULL;

    }
     void insert(int x)
    {
        node*p=new node(x);
        if(head==NULL)
        {
            head=p;
        }
         else
         {
            node *q=head;
            while(q->next!=NULL)
            q=q->next;
            q->next=p;  
         } 
    }
 
 void remove(int x)
 {
    node*p=NULL;
    if(head->data==x)
    {
        p=head;
        head=head->next;
        delete p;
        return;

    }
    node*q=head;
    while(q->next!=NULL)
    {
     if(q->next->data==x)
     {
        p=q->next;
        q->next=p->next;
        delete p;
        return;

     }
    }
    cout<<"data not found in list";
    }  
 
 void display()
 {
    node *q=head;
    while(q!=NULL)
    {
        cout<<q->data<<"=>";
        q=q->next;
    }
 }
 
 
 
};
 int main()
 {
    linklist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.display();
    cout<<endl;
    list.insert(20);
    list.insert(50);
    list.insert(40);
    cout<<endl;
    list.display();
    return(0);

 }
 PS D:\harshada> cd "d:\harshada\" ; if ($?) { g++ linklist.cpp -o linklist } ; if ($?) { .\linklist }
10=>20=>30=>40=>

10=>20=>30=>40=>20=>50=>40=>
PS D:\harshada> 





