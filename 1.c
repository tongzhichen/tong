#define BUFSIZE 100
char  buf[BUFSIZE];
int  bufp=0;
 
int  getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getcher( );
}
void  ungetch(int c)
{
    if  (bufp>=BUFSIZE)
                       printf("ungetch: too many characters\n");
    else     
           buf[bufp++]=c;
           if (bufp<0)
{
               char  '-' ;
               c=-c;
}
     else   return  0;
      printf("%d bufp,c");
}