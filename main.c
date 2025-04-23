#include "task.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addTask(Task **head, int *currentId);
void displayTasks(Task* head);
void markAsCompleted(Task* head, int id);
void deleteTask(Task** head, int id);
// void freeTasks(Task* head);

int main() {
    Task* head = NULL;
    int currentId = 1;
    int choice;

    do {
        printf("\n\n==============================
       📝 TO-DO LIST MENU      
==============================\n\n");
        printf("1. Add Task\n");
        printf("2. List All Tasks\n");
        printf("3. Mark Task as Completed\n");
        printf("4. Delete Task\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(&head, &currentId);
                break;
            case 2:
                displayTasks(head);
                break;
            case 3: {
                int id;
                printf("Enter task ID to mark as completed: ");
                scanf("%d", &id);
                markAsCompleted(head, id);
                break;
            }
            case 4: {
                int id;
                printf("Enter task ID to delete: ");
                scanf("%d", &id);
                deleteTask(&head, id);
                break;
            }
            case 0:
                printf("\nGoodbye!\n\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    freeTasks(head); // Free allocated memory
    return 0;
}
