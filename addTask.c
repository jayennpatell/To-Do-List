#include "task.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addTask(Task **head, int *currentId) {
    char title[100];

    printf("Enter the task title: ");
    while (getchar() != '\n'); // Clear input buffer
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove trailing newline

    Task* newTask = (Task*)malloc(sizeof(Task));
    if (newTask == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    strcpy(newTask->title, title);
    newTask->id = (*currentId)++;
    newTask->isCompleted = 0;
    newTask->next = NULL;

    if (*head == NULL) {
        *head = newTask;
    } else {
        Task* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newTask;
    }

    printf("\n\nTask added successfully!\n\n");
}