#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include "user_io.h"　　// 構造体S_DATAを扱うため

#define MAX_SIZE 100

extern void DATA_ADD(S_DATA data);
extern S_DATA DATA_VIEW(int output_count);
extern void DATA_DELETE(int input_num);

#endif
