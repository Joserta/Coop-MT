#ifndef bool
   typedef int bool;
#endif

typedef void (*cmt_task)();

typedef struct
{
   cmt_task  task;
   bool      isEnabled;
   bool      isStopped;
} cmt_taskEntry;


#define CMT_OK 0;
