#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[]){
	int pid = fork(), status = 0;

	if( pid==0 ){
		char* args[] = { "/usr/bin/x86_64-redhat-linux-gcc-12", "./HW.c", "-o", "./HW", 0 };

		execvp( args[0], args );

		// when child terminates PARENT starts executing!
	}

	else{

		waitpid( pid, &status, 0 );

		if( WIFEXITED( status ) ){
			char* args[] = { "./HW", "./HW", 0 };

			execvp( args[0], args );
	        
	        //parent is still waiting for child to terminate!
		}

		else
			printf("child terminated abnormally!\n");
	}

	return 0;
}