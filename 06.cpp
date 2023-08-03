#include<iostream>
using namespace std;

int graph[10][10];
int visited[10];
int total;
int arr[30];
int k = 0;
int count = 0;

void BFS(int vertex){
    cout << vertex << " ";
    visited[vertex] = 1;
    for (int i = 0; i < total;i++){ 
        if(!visited[i]&&graph[vertex][i]==1)
            BFS(i);
    }
}

int main(){

cout << "Enter the total no of vertices" << endl;
cin >> total;

cout << "Enter the adjancency matrix" << endl;
for (int i = 0; i < total;i++){
    for (int j = 0; j < total;j++){
            cin >> graph[i][j];
    }
}

for (int i = 0; i < total;i++){
    visited[i] = 0;
}

BFS(0);

return 0;
}