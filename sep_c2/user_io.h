#ifndef PROCESS_H
#define PROCESS_H

#define ARRAY_SIZE 16
#define RUN (1)
#define NOT_RUN (0)

typedef struct {
    int id;
    char name[ARRAY_SIZE];
    char mail[ARRAY_SIZE];
    char memo[ARRAY_SIZE];
} S_DATA;

// function declarations
extern void ADD();
extern void VIEW();
extern void DELETE();
extern void END(int isRunning);

#endif
