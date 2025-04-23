#include "task.h"

void deleteTask(Task** head, int id){

    Task* temp = *head; 
    Task* prev = *head;

    while(temp != NULL  && temp->id != id){

        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Task ID %d not found.\n", id);
        return;
    }

    if(prev == NULL){
        prev = temp->next;
        *head = prev;
        
    }
    else{
        prev->next = temp->next;
        
    }

    free(temp);
    printf("\n\nTask ID %d is successfully deleted!\n\n", id);

}