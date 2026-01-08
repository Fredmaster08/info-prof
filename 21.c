
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_DESC_LENGTH 256
#define MAX_NAME_LENGTH 60
#define MAX_TASKS 100


typedef struct {
    int id;
    char description[MAX_DESC_LENGTH];
    char assignee[MAX_NAME_LENGTH]
}Task;

int loadTasks(Task tasks[]);

void printMainMenu();
void listTasks(Task tasks[], int taskCount);
int addTask(Task tasks[], int taskCount);
int deleteTask(Task tasks[], int taskCount);

int main() {

    Task tasks[MAX_TASKS];
    int taskCount;
    int choice;

    taskCount = loadTasks(tasks);

    do {

        printMainMenu();

        printf("Waehle eine Option: ");
        scanf("%d", &choice);

        if(choice == 1) {
            listTasks(tasks, taskCount);
        }
        else if(choice == 2) {
            taskCount = addTask(tasks, taskCount);
        }
        else if(choice == 3) {
            taskCount = deleteTask(tasks, taskCount);
        }
        else if (choice == 4) {
            printf("Programm beenden.\n");
        }
        else {
            printf("Ungueltige Auswahl. Bitte waehle 1 bis 4.\n");
        }

    }while(choice != 4)

    return 0;
}

void printfMainMenu() {
    printf("\nTODO-LIST Verwaltung\n");
    printf("1. Aufgaben anzeigen\n");
    printf("2. Aufgabe hinzufuegen\n");
    printf("3. Aufgabe löschen\n");
    printf("4. Programm beenden\n");
}

int loadTasks(Task tasks[]) {
    printf("TODO: loadTasks implementieren");
}

void listTasks(Task tasks[, int taskCount]) {
    printf("TOD: listTasks implementieren");
}

int addTask(Task tasks[], int taskCount) {
    printf("TODO: addTask implementieren");
}

int deleteTask(Task tasks[], int taskCount) {
    printf("TODO: deleteTask implementieren");
    return taskCount;
}