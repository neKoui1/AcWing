#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

void Heapify(vector<int>& tree, int n, int i) {
    int c1 = 2*i + 1;
    int c2 = 2*i + 2;
    int max = i;
    if ( c1 < n && tree[c1] > tree[max] ) {
        max = c1;
    }
    if ( c2 < n && tree[c2] > tree[max] ) {
        max = c2;
    }
    if ( max != i ) {
        swap(tree[max], tree[i]);
        Heapify(tree, n, max);
    }
}

void HeapifyBuild(vector<int>& tree, int n) {
    int last_node = n - 1;
    int parent = (last_node-1) / 2;
    for ( int i = parent; i >= 0; i-- ) {
        Heapify(tree, n, i);
    }
}

void HeapSort(vector<int>& tree, int n) {
    HeapifyBuild(tree, n);
    for ( int i = n-1; i >= 0; i-- ) {
        swap(tree.front(), tree[i]);
        Heapify(tree, i, 0);
    }
}

int main () {
    vector<int> tree = {4, 10, 3, 5, 1, 2};
    HeapSort(tree, tree.size());
    for(auto t : tree ) {
        cout << t << " " ;
    }
    cout << endl;
    return 0;
}