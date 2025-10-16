//
//  main.cpp
//  BFSDFS1
//
//  Created by satoshi_new on 2025/10/14.
//

//BFS

#include <iostream>
#include <vector>
#include <queue>
#include <stack>


void bfs(int start, std::vector<std::vector<int>> &graph)
{
    std::vector<bool> visited(graph.size(), false);
    std::queue<int> queue;
    //スタートポイントの設定
    queue.push(start);
    visited[start] = true;
    
    while(!queue.empty() )
    {
        int node = queue.front();
        queue.pop();
        std::cout << node <<" ";
        
        for(int next: graph[node])
        {
            if(!visited[next])
            {
                visited[next] = true;
                queue.push(next);
            }
        }
    }
}

void dfs(int start, std::vector<std::vector<int>> &graph)
{
    std::vector<bool> visited(graph.size(), false);
    std::stack<int> stack;
    //スタートポイントの設定
    stack.push(start);
    visited[start] = true;
    
    while(!stack.empty())
    {
        int node = stack.top();
        stack.pop();
        std::cout<< node <<" ";
        
        for(int next: graph[node])
        {
            if(!visited[next])
            {
                visited[next] = true;
                stack.push(next);
            }
        }
    }
}



int main()
{
    
    std::vector<std::vector<int>> graph =
    {
        {},
        {2,4},
        {1,3,5},
        {2},
        {1},
        {2}
    };
    
    bfs(1,graph);
    std::cout << "\n";
    
    dfs(1,graph);
    std::cout << "\n";
    
    return 0;
}
