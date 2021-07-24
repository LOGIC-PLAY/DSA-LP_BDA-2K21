class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head==NULL) return 0;
        Node*slow=head;
        Node*fast=slow->next;
        while(fast!=slow)
        {
            if(fast==NULL || fast->next==NULL) return 0;
            fast=fast->next->next;
            slow=slow->next;
            
        }
        return 1;
        
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        Node *head, *tail;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++)
        {
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        int pos;
        cin>>pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        if(ob.detectLoop(head))
            cout<<"True\n";
        else
            cout<<"False\n";
    }
    return 0;
}
