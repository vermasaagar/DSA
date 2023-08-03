#include<iostream>
using namespace std;

int graph[10][10];
int visited[10];
int total;
int arr[30];
int k = 0;
int count = 0;

void DFS(int vertex){
    int j;
    int c = 0;
    cout << vertex << " ";
    visited[vertex] = 1;
    for (j = 0; j < total;j++){
        if(!visited[j]&&graph[vertex][j]==1){
            arr[k++] = j;
            c = 1;
        }
        if(count==total){
            exit(0);
    }
    if(c==1){
            DFS(arr[k]);
    }else{
            k--;
            DFS(arr[k]);
    }
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

DFS(0);

return 0;
}