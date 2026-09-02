#include<stdio.h>
float my_atof(char *);
char * whitespace(char *);
int main(int argc,char **argv)
{
        if(argc!=2)
        {
                printf("Give one float num with executable file.\n");
                return 1;
        }
        float c=my_atof(argv[1]);
        printf("%f\n",c);
        return 0;
}
char * whitespace(char *p)
{
        while(*p==' '||*p=='\t'||*p=='\n'||*p=='\r'||*p=='\v'||*p=='\f')
                p++;
        return p;
}
float my_atof(char *s)
{
        char *p=s;
        p=whitespace(p);
        s=p;
        float sum=0,n,m,div;
        if(*p=='-'||*p=='+')
                p++;
        while(*p>='0'&&*p<='9')
        {
                n=*p-'0';
                sum=sum*10+n;
                p++;
        }
        if(*p=='.')
        {
                div=10;
                p++;
        }
        while(*p>='0'&&*p<='9')
        {
                m=(*p-'0')/div;
                sum+=m;
                div=div*10;
                p++;
        }
        if(*s=='-')
                sum=-sum;
        return sum;
}
