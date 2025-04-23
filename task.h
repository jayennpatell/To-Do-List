// task.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef TASK_H
#define TASK_H

typedef struct Task {
    int id;
    char title[100];
    int isCompleted;
    struct Task* next;
} Task;

// Adds a task in the To Do List
void addTask(Task **head,int *currentId);

#endif
