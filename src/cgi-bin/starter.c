/*
 * starter.c - a minimal CGI program
 */
/* $begin starter */
#include "csapp.h"

static char * trim_arg(char * arg);

int main(void) {
    char *buf, *p;
    char arg1[MAXLINE], arg2[MAXLINE], content[MAXLINE];
    int n1 = 0;

    /* Extract the two arguments */
    if ((buf = getenv("QUERY_STRING")) != NULL) {
	p = strchr(buf, '&');
	*p = '\0';
	strcpy(arg1, buf);
	strcpy(arg2, p+1);
	n1 = atoi(trim_arg(arg1));
    }
	else {
    	sprintf(content, "Welcome to Pokemon world! ");
	}
    /* Make the response body */
    sprintf(content, "%sYour choice is: %d\r\n<p>", 
	    content, n1);
    sprintf(content, "%sThanks for visiting!\r\n", content);
  
    /* Generate the HTTP response */
    printf("Content-length: %d\r\n", (int)strlen(content));
    printf("Content-type: text/html\r\n\r\n");
    printf("%s", content);
    fflush(stdout);
    exit(0);
}
/* $end starter */

/*
 * -Trim variable'name and '=' from the argument string
 */
/* $begin trim_arg */
char * trim_arg(char *arg )
{
	char * pindex;
	if ( ( pindex = strchr(arg, '=') ) )
		strncpy(arg, pindex+1, MAXLINE );
	return arg;
}
/* $end trim_arg */
