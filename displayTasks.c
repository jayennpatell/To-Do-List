#include "task.h"

void displayTasks(Task* head){

    if (head == NULL)
    {
        printf("\n\nNo Tasks Found!\n\n");
    }
    
    Task* temp = head;


    printf("\nYour To-Do List:\n");
    while(temp!= NULL){
        printf("\nID: %d\nTitle: %s\nStatus: %s\n", temp->id, temp->title, temp->isCompleted ? "Done" : "Pending");

        temp = temp->next;
    }
}