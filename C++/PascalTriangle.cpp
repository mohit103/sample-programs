vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
       
        int i,j;
        for(i=0;i<numRows;i++)
        {      
              v[i].resize(i+1);
            for(j=0;j<=i;j++)
            { 
                if((i==j)||(j==0))
                {
                    v[i][j]=1;
                }
                else
                {
                    v[i][j]=v[i-1][j-1]+v[i-1][j];
                }
            }
        }
        return v;
    }
