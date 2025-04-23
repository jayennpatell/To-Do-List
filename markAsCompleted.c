#include "task.h"

void markAsCompleted(Task* head, int id){

    Task* temp = head;
    
    while(temp != NULL){

        if (temp->id == id)
        {
            if(temp->isCompleted == 1){
                printf("\n\nThe Task is already completed!\n\n");
            }
            else{
                temp->isCompleted = 1;
                printf("\n\nTask ID %d is completed!\n\n", id);
            }
            
            return;
        }
        
        temp = temp->next;
    }
    printf("\n\nTask not found!\n\n");



}