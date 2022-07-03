#define NPROC        64  // maximum number of processes
#define KSTACKSIZE 4096  // size of per-process kernel stack
#define NCPU          8  // maximum number of CPUs
#define NOFILE       16  // open files per process
#define NFILE       100  // open files per system
#define NINODE       50  // maximum number of active i-nodes
#define NDEV         10  // maximum major device number
#define ROOTDEV       1  // device number of file system root disk
#define MAXARG       32  // max exec arguments
#define MAXOPBLOCKS  10  // max # of blocks any FS op writes
#define LOGSIZE      (MAXOPBLOCKS*3)  // max data blocks in on-disk log
#define NBUF         (MAXOPBLOCKS*3)  // size of disk block cache
#define FSSIZE       1000   // size of file system in blocks
#define INTERV        5   // number of ticks for the interval between preemption
#define LOWEST_PRIORITY_WAIT_LIMIT          5   // number of ticks to promote a process from queue 1 to 2
#define DEFAULT_PRIORITY_WAIT_LIMIT         5   // number of ticks to promote a process from queue 1 to 2