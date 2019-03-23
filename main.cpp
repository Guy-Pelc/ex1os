#include "osm.h"
#include <iostream>
using namespace std;

int main (int argc, char **argv){
	if (argc!=2) {
	cout<<"must get 2 args!"<<endl;
	return -1;
}
	cout<<argv[1]<<endl;
bool b = 1>=1;
cout<<b<<endl;
	int a = strtol(argv[1],nullptr,10);
    cout<<" syscall diff in nanoosec: "<<osm_syscall_time(a)<<endl;
    cout<<" operationtime diff in nanoosec: "<<osm_operation_time(a)<<endl;
    cout<<" functiontime diff in nanoosec: "<<osm_function_time(a)<<endl;
    return 0;
}

