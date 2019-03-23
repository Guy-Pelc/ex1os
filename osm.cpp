#include "osm.h"
#include <iostream>
#include <sys/time.h>
using namespace std;

int main (){
    cout<<" syscall diff in nanoosec: "<<osm_syscall_time(1000000)<<endl;
    cout<<" operationtime diff in nanoosec: "<<osm_operation_time(1000000)<<endl;
    cout<<" functiontime diff in nanoosec: "<<osm_function_time(1000000)<<endl;
    return 0;
}

int osm_init(){
    return 0;
}

int osm_finalizer(){
    return 0;
}

double osm_operation_time(unsigned int iterations){
    timeval t {},t2 {};

    if (iterations == 0) {iterations = 1000;}
    unsigned int j = 0;
    unsigned int a = 0;
    try {
        gettimeofday( &t, nullptr);
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
        gettimeofday( &t2, nullptr);
    }
    catch (exception &e){
        return -1;
    }
    if (a) {}


    double diff = double(t2.tv_usec-t.tv_usec)*1000/j;
    return diff;

}
void empty_function(){}
double osm_function_time(unsigned int iterations){
    timeval t {},t2 {};

    if (iterations == 0) {iterations = 1000;}
    unsigned int j = 0;

    try {
        gettimeofday( &t, nullptr);
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
        gettimeofday( &t2, nullptr);
    }
    catch (exception &e){
        return -1;
    }


    double diff = double(t2.tv_usec-t.tv_usec)*1000/j;
    return diff;

}



double osm_syscall_time(unsigned int iterations){
    timeval t {},t2 {};

    if (iterations == 0) {iterations = 1000;}
    unsigned int j = 0;

    try {
        gettimeofday( &t, nullptr);
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
        gettimeofday( &t2, nullptr);
    }
    catch (exception &e){
        return -1;
    }


    double diff = double(t2.tv_usec-t.tv_usec)*1000/j;
    return diff;
}


