/* Answer 1 ->
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for( char &ch : s )
        {
            if( st.empty() || ch=='(' || ch=='{' || ch=='[' )
            {
                st.push( ch );
                continue;
            }
            if( ch==')' )
            {
                if( st.top()=='(' ) st.pop();
                else return false;
            }
            else if( ch=='}' )
            {
                if( st.top()=='{' ) st.pop();
                else return false;
            }
            else
            {
                if( st.top()=='[' ) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
*/


/* Answer 2 ->
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        stack<int> st;
        while( head!=NULL )
        {
            v.push_back( head->val );
            head = head->next;
        }    
        // v -> array 
        int n = v.size();
        vector<int> result( n, 0 );
        for( int i=0; i<n; i++ )
        {
            while( !st.empty() && v[i]>v[st.top()] ) // Index of st.top()
            {
                int idx = st.top();
                st.pop();
                result[idx] = v[i];
            }
            st.push(i); // Stack stores indices
        }
        return result;
    }
};
*/

/* Answer 3 ->
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> v = prices;
        for( int i=prices.size()-1; i>=0; i-- )
        {
            while( !st.empty() )
            {
                if( prices[i]>=st.top() )
                {
                    v[i] = prices[i] - st.top();
                    break; 
                }
                else st.pop();
            }
            st.push( prices[i] );
        }
        return v;
    }
};
*/