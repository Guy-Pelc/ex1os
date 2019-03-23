#include "osm.h"
#include <iostream>
#include <sys/time.h>
using namespace std;

/* Initialization function that the user must call
 * before running any other library function.
 * 
 * It is empty in this implementation, therefore returns 0 always.
 */
int osm_init(){
    return 0;
}

/* finalizer function that the user must call
 * after running any other library function.
 * The function may, for example, free memory or
 * close/delete files.
 * Returns 0 uppon success and -1 on failure
 *
 * It is empty in this implementation, therefore returns 0 always.
 */
int osm_finalizer(){
    return 0;
}

/* Time measurement function for a simple arithmetic operation, addition.
   returns time in nano-seconds upon success,
   and -1 upon failure.
	
   rounds up number of iterations by 50
   */
double osm_operation_time(unsigned int iterations){
    timeval t {},t2 {};

    if (iterations == 0) {iterations = 1000;}
    unsigned int j = 0;
    unsigned int a = 0;

        if (gettimeofday( &t, nullptr) == -1) {return -1;}
        while (j < iterations){


            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;

            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;

            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;

            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;

            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;
            a = 1 + 1;

            j += 50;
        }
        if (gettimeofday( &t2, nullptr) == -1) {return -1;}

    if (a) {}


    double diff = long(double(t2.tv_usec-t.tv_usec))*(1000./j);
    return (diff >= 0 ? diff : -1);

}

/* a function that does nothing */
void empty_function(){}

/* Time measurement function for an empty function call.
   returns time in nano-seconds upon success,
   and -1 upon failure.

   rounds up number of iterations by 50
   */

double osm_function_time(unsigned int iterations){
    timeval t {},t2 {};

    if (iterations == 0) {iterations = 1000;}
    unsigned int j = 0;

    try {
        if (gettimeofday( &t, nullptr) == -1) {return -1;} ;
        while (j < iterations){

            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();

            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();

            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();

            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();

            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();
            empty_function();

            j += 50;
        }
        if (gettimeofday( &t2, nullptr)==-1){return -1;};
    }
    catch (exception &e){
        return -1;
    }


    double diff = long(double(t2.tv_usec-t.tv_usec))*(1000./j);
    return (diff >= 0 ? diff : -1);

}


/* Time measurement function for an empty trap into the operating system.
   returns time in nano-seconds upon success,
   and -1 upon failure.

   rounds up number of iterations by 50
   */
double osm_syscall_time(unsigned int iterations){
    timeval t {},t2 {};

    if (iterations == 0) {iterations = 1000;}
    unsigned int j = 0;

        if (gettimeofday( &t, nullptr) == -1) {return -1;};
        while (j < iterations){

            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;

            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;

            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;

            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;

            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;
            OSM_NULLSYSCALL;

            j += 50;
        }
        if (gettimeofday( &t2, nullptr) == -1){return -1;};


    double diff = long(double(t2.tv_usec-t.tv_usec))*(1000./j);
    return (diff >= 0 ? diff : -1);
}


