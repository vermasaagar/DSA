#include<iostream>
using namespace std;

#define V 5

void  inililizeWithZero(int arr[][V]){
    for (int i = 1; i < V;i++){
        for (int j = 1; j < V;j++){
            arr[i][j] = 0;
        }
    }
}

void addEdge(int arr[][V],int i,int j){
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void printAdjacencyMatrix(int arr[][V]){
    for (int i = 1; i < V;i++){
        cout << i << " ";
        for (int j = 1; j < V;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

                    
int main(){

    int adjMatrix[V][V];

    inililizeWithZero(adjMatrix);

    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 2, 4);
    addEdge(adjMatrix, 3, 4);
    addEdge(adjMatrix, 4, 1);
    addEdge(adjMatrix, 5, 4);

    printAdjacencyMatrix(adjMatrix);

    return 0;
}
