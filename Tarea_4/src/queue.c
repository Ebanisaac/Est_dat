/**
 * @file queue.c
 * @brief Funciones de colas de productos implementadas con arreglos circulares
*/
#include "queue.h"

static int succ(int value, Queue Q)
{
    if(value>=Q->capacity || value<0)
    {
        printf("Error en el valor entregado");
    }

    if(value==(Q->capacity-1))
    {
        return 0;
    }

    return value++;
}
Queue queue_create(int n)
{
    Queue Q=malloc(sizeof(struct QueueRecord));

    Q->array=malloc(sizeof(n*sizeof(Product)));

    Q->capacity=n;

    Q->size=0;

    Q->rear=0;

    Q->front=1;

    return Q;
}
Queue queue_make_empty(Queue Q)
{

}
int queue_is_empty(Queue Q)
{
    if(Q->size==0)
    {
        return 1;
    }

    return 0;    
}
int queue_is_full(Queue Q)
{
    if(Q->size==Q->capacity)
    {
        return 1;
    }
    
    return 0;
}
Queue queue_enqueue(Product P, Queue Q)
{
    Q->rear=succ(Q->rear, Q);

    Q->array[Q->rear]=P;

    Q->size++;

    return Q;
}
Product queue_dequeue(Queue Q)
{
    Product Wait=Q->array[Q->front];

    Q->front=succ(Q->front, Q);

    return Wait;
}
Product queue_front(Queue Q)
{
    
}
int queue_size(Queue Q)
{
    return Q->size;
}
void queue_print(Queue Q)
{
    
}
void queue_delete(Queue Q)
{
    
}
