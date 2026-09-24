/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        Node* newhead = NULL;
        Node* temp=head, *prev = NULL;
        unordered_map<Node*, int> mp; //node pointer -> index pair
        unordered_map<int, Node*> mp2; //index -> pointer
        int cnt=0;
        while(temp != NULL)
        {
            Node* newnode = new Node(temp->val);
            if(prev != NULL)
                prev->next = newnode;
            prev=newnode;
            mp[temp] = cnt;
            mp2[cnt] = newnode;
            temp=temp->next;
            cnt++;
            //initialize head pointer
            if(newhead == NULL) newhead = newnode;
        }

        temp = head;
        Node* temp2 = newhead;
        while(temp != NULL)
        {
            if(temp->random != NULL)
            {
                int index = mp[temp->random];
                temp2->random = mp2[index];
            }

            temp=temp->next;
            temp2=temp2->next;
        }

        return newhead;
    }
};
