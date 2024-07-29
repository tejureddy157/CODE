#include <stdio.h>
#define V 4
void printSolution(int reach[V][V]) {
    printf("Transitive closure matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d\t", reach[i][j]);
        }
        printf("\n");
    }
}
void warshallAlgorithm(int graph[V][V]) {
    int reach[V][V];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            reach[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (reach[i][k] && reach[k][j]) {
                    reach[i][j] = 1;
                }
            }
        }
    }
    printSolution(reach);
}
int main() {
    int graph[V][V] = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {0, 0, 0, 0}
    };
    warshallAlgorithm(graph);

    return 0;
}
