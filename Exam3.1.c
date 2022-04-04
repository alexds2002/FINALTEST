#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> // -lm
#define COUNT 10
#define point_t double

typedef struct rectangle_t{
    point_t Point_A;
    point_t Point_B;

} Rectangle;

typedef struct node{
    Rectangle rec;
    struct node* next;
} NodeDll;

void push(NodeDll** head, Rectangle rect){
    NodeDll* current = malloc(sizeof(NodeDll));
    
    current->next = *head;
    *head = current;
    current->rec = rect;
}
double Area(double a, double b){

    return abs(a*b);
}
void Print(NodeDll* head){
    NodeDll* current = head;
    while (current != NULL)
    {
        printf("%lf\n", Area(current->rec.Point_A, current->rec.Point_B));
        
        current = current->next;
    }
}

void Filter(NodeDll** head, double min, double max){

    NodeDll* current = *head;
    NodeDll* currentNxt = (*head)->next;
    while (currentNxt != NULL)
    {
        if (Area(currentNxt->rec.Point_A, currentNxt->rec.Point_B) > min || Area(currentNxt->rec.Point_A, currentNxt->rec.Point_B) < max)
        {
            
            current->next = currentNxt->next;
  
        }

        
        currentNxt = currentNxt->next;
        current = current->next;
    }

}
double randDB(){
    return (double)rand()/RAND_MAX*2.0 - 1.0; //float in range -1 to 1
}
int main(){

    NodeDll* head = NULL;
    srand(time(NULL));
    Rectangle recs[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        recs[i].Point_A = randDB() * 10.0;
        recs[i].Point_B = randDB() * 10.0;
        push(&head, recs[i]);
    }
    Filter(&head, 5, 50);
    Print(head);
    
    
    return EXIT_SUCCESS;
}