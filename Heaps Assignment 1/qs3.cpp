/*
struct comparator
{
    bool operator()( ListNode* l, ListNode* r )
    {
        return l->val > r->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, comparator> pq;
        for( int i=0; i<lists.size(); i++ )
        {
            if( lists[i] ) pq.push( lists[i] );
        }
        ListNode* head = NULL, * tail = NULL;
        while( !pq.empty() )
        {
            auto node = pq.top();
            pq.pop();
            if( node->next ) pq.push( node->next );
            if( head==NULL && tail==NULL ) head = tail = node;
            else
            {
                tail->next = node;
                tail = tail->next;
            }
        }
        return head;  
    }
};
*/