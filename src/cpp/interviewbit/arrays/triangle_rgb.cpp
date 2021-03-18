
int area(int x1,int y1, int x2, int y2, int x3, int y3)
{
    return ceil (0.5*abs( x1*(y2 - y3) + x2*(y3-y1) + x3*(y1 - y2)  ));
}

int Solution::solve(vector<string> &A) {
    
    int n = A[0].length();
    int m = A.size();
    
    vector<int> r_x;
    vector<int> r_y;
    
    vector<int> g_x;
    vector<int> g_y;
    
    vector<int> b_x;
    vector<int> b_y;
    
    int max_area = 0;
    

    for(int i = 0; i<m; i++)
    {
        vector<char> str(A[i].begin(),A[i].end());
        for(int j = 0; j<n; j++)
        {
            char x = str[j];
            
            if(x == 'r')
            {
                r_x.push_back(i);
                r_y.push_back(j);
            }
            else if(x == 'g')
            {
                g_x.push_back(i);
                g_y.push_back(j);
            }
            else if(x == 'b')
            {
                b_x.push_back(i);
                b_y.push_back(j);
            }
        }
        
    }
    
    if(g_x.size() == 0 || r_x.size() == 0 || b_x.size() == 0)
        return 0;
        
    for(int i = 0; i < r_x.size(); i++)
    {
        for(int j = 0; j < g_x.size(); j++)
        {
            for(int k = 0; k < b_x.size(); k++)
            {
                int val = area(r_x[i],r_y[i], g_x[j],g_y[j], b_x[k],b_y[k]);
                if(val > max_area)
                {
                    max_area = val;
                }
            }
        }
    }
    
    for(int i = 0; i < g_x.size(); i++)
    {
        for(int j = 0; j < r_x.size(); j++)
        {
            for(int k = 0; k < b_x.size(); k++)
            {
                int val = area(g_x[i],g_y[i], r_x[j],r_y[j], b_x[k],b_y[k]);
                if(val > max_area)
                {
                    max_area = val;
                }
            }
        }
    }
    
    for(int i = 0; i < b_x.size(); i++)
    {
        for(int j = 0; j < r_x.size(); j++)
        {
            for(int k = 0; k < g_x.size(); k++)
            {
                int val = area(b_x[i],b_y[i], r_x[j],r_y[j], g_x[k],g_y[k]);
                if(val > max_area)
                {
                    max_area = val;
                }
            }
        }
    }
    
    for(int i = 0; i < r_x.size(); i++)
    {
        for(int j = 0; j < b_x.size(); j++)
        {
            for(int k = 0; k < g_x.size(); k++)
            {
                int val = area(r_x[i],r_y[i], b_x[j],b_y[j], g_x[k],g_y[k]);
                if(val > max_area)
                {
                    max_area = val;
                }
            }
        }
    }
    
    for(int i = 0; i < g_x.size(); i++)
    {
        for(int j = 0; j < b_x.size(); j++)
        {
            for(int k = 0; k < r_x.size(); k++)
            {
                int val = area(g_x[i],g_y[i], b_x[j],b_y[j], r_x[k],r_y[k]);
                if(val > max_area)
                {
                    max_area = val;
                }
            }
        }
    }
    
    for(int i = 0; i < b_x.size(); i++)
    {
        for(int j = 0; j < g_x.size(); j++)
        {
            for(int k = 0; k < r_x.size(); k++)
            {
                int val = area(b_x[i],g_y[i], g_x[j],g_y[j], r_x[k],r_y[k]);
                if(val > max_area)
                {
                    max_area = val;
                }
            }
        }
    }
    
    return max_area;
}
