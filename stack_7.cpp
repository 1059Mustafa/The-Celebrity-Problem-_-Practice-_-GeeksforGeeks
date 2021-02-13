class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        while(s.size()>=2)
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(M[a][b]==1)
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int k=s.top();
        for(int i=0;i<n;i++)
        {
            if(M[k][i]!=0)
            {
                return -1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(M[i][k]!=1&&i!=k)
            {
                return -1;
            }
        }
        return k;
    }
};
