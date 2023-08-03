#include <iostream>
using namespace std;

const int tableSize = 10; 

int hashfunction(int key) {
    return key % tableSize;
}bye


void insert(int arr[], int key) {
    int index = hashfunction(key); 

    if (arr[index] == 0) 
    { 
        arr[index] = key; 
    } 
    else 
    
    {
        cout << "Collision detected at index " << index << endl;
        int i = 1;
        while (arr[(index + i) % tableSize] != 0) {
            i++;
        }
        arr[(index + i) % tableSize] = key; 
    }
}

void print(int arr[]) {
    cout << "Hashtable" << endl;
    for (int i = 0; i < tableSize; i++) {
        cout << i << ": " << arr[i] << endl;
    }
}


int count(int arr[]) {
    int collisions = 0;
    for (int i = 0; i < tableSize; i++) {
        if (arr[i] != 0)

        { 
            int index = hashfunction(arr[i]); 
            if (index != i) 
            { 
                collisions++; 
            }
        }
    }
    return collisions;
}

int main() {
    int hashtable[tableSize] = {0}; 
    

    insert(hashtable, 10);
    insert(hashtable, 20);
    insert(hashtable, 30);
    insert(hashtable, 40);
    insert(hashtable, 50);
    
    print(hashtable);

    int num = count(hashtable);
    cout << "Number of collisions: " << num << endl;

    return 0;
}