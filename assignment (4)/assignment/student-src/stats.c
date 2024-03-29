#include "paging.h"
#include "stats.h"

/* The stats. See the definition in stats.h. */
stats_t stats;

/*  --------------------------------- PROBLEM 9 --------------------------------------
    Calculate any remaining statistics to print out.

    You will need to include code to increment many of these stats in
    the functions you have written for other parts of the project.

    Use this function to calculate any remaining stats, such as the
    average access time (AAT).

    You may find the #defines in the stats.h file useful.
    -----------------------------------------------------------------------------------
*/
void compute_stats() {
    stats.accesses = stats.reads + stats.writes;
    stats.aat = (float)(MEMORY_READ_TIME * stats.accesses + DISK_PAGE_READ_TIME * stats.page_faults + DISK_PAGE_WRITE_TIME * stats.writebacks) / (float)stats.accesses;
    
    // printf("Total Accesses: %d\n", stats.accesses);
    // printf("Reads: %d\n", stats.reads);
    // printf("Writes: %d\n", stats.writes);
    // printf("Page Faults: %d\n", stats.page_faults);
    // printf("Writes to disk: %d\n", stats.writebacks);
    // printf("Average Access Time: %f\n", stats.aat);
    
}

/* Simple
Total Accesses     : 544064
Reads              : 369038
Writes             : 175026
Page Faults        : 52371
Writes to disk     : 0
Average Access Time: 9725.889601
Max Swap Size      : 0 KB

mcf 
Total Accesses     : 507189
Reads              : 279898
Writes             : 227291
Page Faults        : 57638
Writes to disk     : 23678
Average Access Time: 20801.158740
Max Swap Size      : 8368 KB

perlbench
Total Accesses     : 507060
Reads              : 301782
Writes             : 205278
Page Faults        : 82839
Writes to disk     : 35268
Average Access Time: 30347.899657
Max Swap Size      : 6288 KB

bzip
Total Accesses     : 544064
Reads              : 369038
Writes             : 175026
Page Faults        : 31577
Writes to disk     : 16464
Average Access Time: 11956.141924
Max Swap Size      : 1360 KB

astar
Total Accesses     : 500874
Reads              : 289417
Writes             : 211457
Page Faults        : 52913
Writes to disk     : 16745
Average Access Time: 17350.446220
Max Swap Size      : 16624 KB
*/