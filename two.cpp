bool abc(vector<int> g[],int i,int visited[],int &parent)
{
    visited[i]=1;
    for(int x: g[i])
    {
    if(visited[x]==-1)
    {
        if(abc(g,x,visited,i)==true)
        {
            return true;
        }
    }
    else if(x!=parent)
    {
        return true;
    }
    }
    return false;
}

bool isCyclic(vector<int> g[], int N)
{
    int visited[N];
    int parent=-1;
   for(int i=0;i<N;i++)
   {
       visited[i]=-1;
   }
   for(int i=0;i<N;i++)
   {
       if(visited[i]==-1)
       {
           if(abc(g,i,visited,parent)==true)
           return true;
       }
   }
   return false;
}