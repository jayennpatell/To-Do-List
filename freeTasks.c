#include "task.h"

void freeTasks(Task* head) {
    Task* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}