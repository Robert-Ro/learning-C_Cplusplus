#include "util.h"

typedef struct
{
    bool is_completed;
    char content[100];
    int id;
} Todo;

void print_head()
{
    printf("%s\t", "--");
    printf("%s\t", "--");
    printf("%s\t", "--");
    printf("\n");
}
void print_todo(Todo todo)
{
    printf("%s\t", todo.is_completed ? "[x]" : "[ ]");
    printf("%d\t", todo.id);
    printf("%s\t", todo.content);
    printf("\n");
}
void print_todos(Todo todos[])
{
    printf("todos: \n");
    // print_head();
    for (int i = 0; i < sizeof todos; i++)
    {
        if (!is_empty(todos[i].content))
            print_todo(todos[i]);
    }
}

int main()
{
    Todo todo;
    todo.id = 1;
    todo.is_completed = false;
    strcpy(todo.content, "test");

    Todo todo1 = {false, "test1", 2};
    Todo todos[10] = {todo, todo1, {true, "test2", 3}};

    print_todos(todos);
    return 0;
}