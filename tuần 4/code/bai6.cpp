// Nhữ Ngọc Minh-20225046
void bfs(vector< list<int> > adj) {
    queue<int> Q;
    vector<bool> visited(adj.size());
    Q.push(1); // Bắt đầu từ đỉnh số 1
    while(!Q.empty())
    {
        int tmp=Q.front();
        if (!visited[tmp])
        {
            cout<<tmp<<"\n";
            visited[tmp]=true;
        }
        if (!adj[tmp].empty())
        {
            int tmp1=adj[tmp].front();
            adj[tmp].pop_front();
            if(!visited[tmp1]) Q.push(tmp1);
        }
        else Q.pop();
    }
    /*****************
    # YOUR CODE HERE #
    *****************/
}