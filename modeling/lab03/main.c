#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NODES 100

typedef struct {
    int from;
    int to;
} Edge;

void generateRandomTree(int N, int maxDegree, int maxDepth, Edge edges[],
                        int *edgeCount) {
    int degrees[MAX_NODES + 1] = {0};
    int parent[MAX_NODES + 1] = {0};
    int depth[MAX_NODES + 1] = {0};
    bool used[MAX_NODES + 1] = {false};

    int root = rand() % N + 1;
    used[root] = true;
    degrees[root] = 1;

    *edgeCount = 0;

    for (int i = 1; i <= N; i++) {
        if (i == root || used[i]) continue;

        int possibleParents[MAX_NODES];
        int count = 0;

        for (int j = 1; j <= N; j++) {
            if (used[j] && degrees[j] < maxDegree && depth[j] < maxDepth - 1) {
                possibleParents[count++] = j;
            }
        }

        if (count == 0) continue;

        int p = possibleParents[rand() % count];
        edges[*edgeCount].from = p;
        edges[*edgeCount].to = i;
        (*edgeCount)++;

        degrees[p]++;
        degrees[i] = 1;
        parent[i] = p;
        depth[i] = depth[p] + 1;
        used[i] = true;
    }
}

void saveTreeToDot(int N, Edge edges[], int edgeCount, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Failed to open file");
        return;
    }

    fprintf(file, "digraph G {\n");
    fprintf(file, "    node [shape=circle, style=filled, color=lightblue];\n");

    for (int i = 0; i < edgeCount; i++) {
        fprintf(file, "    %d -> %d;\n", edges[i].from, edges[i].to);
    }

    fprintf(file, "}\n");
    fclose(file);
}

void visualizeTree(const char *dotFilename) {
    char command[256];
    sprintf(command, "dot -Tpng %s -o tree.png", dotFilename);
    system(command);
    printf("Tree visualization saved as 'tree.png'.\n");
}

int main() {
    srand(time(NULL));

    int N = 30;
    int maxDegree = 3;
    int maxDepth = 9;
    int edgeCount = 0;
    Edge edges[MAX_NODES];

    generateRandomTree(N, maxDegree, maxDepth, edges, &edgeCount);

    printf("Generated edges:\n");
    for (int i = 0; i < edgeCount; i++) {
        printf("%d → %d\n", edges[i].from, edges[i].to);
    }

    const char *dotFilename = "tree.dot";
    saveTreeToDot(N, edges, edgeCount, dotFilename);
    visualizeTree(dotFilename);

    return 0;
}