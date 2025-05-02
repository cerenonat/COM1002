#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;       // İşlem ID'si
    int priority;   // Öncelik
} Process;

void processTasks(Process tasks[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (tasks[j].priority < tasks[j + 1].priority) {
                Process temp = tasks[j];
                tasks[j] = tasks[j + 1];
                tasks[j + 1] = temp;
            }
        }
    }
    printf("İşleme sırası (öncelik sırasına göre):\n");
    for (int i = 0; i < size; i++) {
        printf("İşlem ID: %d, Öncelik: %d\n", tasks[i].data, tasks[i].priority);
    }
}

int main() {
    Process tasks[] = {
        {1, 3}, // İşlem 1, öncelik 3
        {2, 5}, // İşlem 2, öncelik 5
        {3, 1}  // İşlem 3, öncelik 1
    };
    int size = sizeof(tasks) / sizeof(tasks[0]);

    processTasks(tasks, size);

    return 0;
}
