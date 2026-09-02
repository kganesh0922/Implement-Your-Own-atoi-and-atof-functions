
#include<stdio.h>
int my_atoi(char *);
char *whitespace(char *);
int main(int argc,char **argv)
{
        if(argc!=2)
        {
                printf("Enter only one int argument with executable file.\n");
                return 1;
        }
        int i,c;
                c=my_atoi(argv[1]);
                printf("%d\n",c);
        return 0;
}
int my_atoi(char *p)
{
        int i,n,c=0,count=0;
        p=whitespace(p);
        for(i=0;p[i];i++)
        {
                if((p[i]=='-'||p[i]=='+')||p[i]>='0'&&p[i]<='9')
                {
                        if((p[0]=='-'||p[0]=='+')&&(p[i]=='-'||p[i]=='+'))
                        {
                                count++;
                                if(count==1)
                                        continue;
                                else
                                        break;
                        }
                        n=p[i]-'0';
                }
                else
                        break;
                c=c*10+n;
        }
        if(p[0]=='-')
                c=-c;
        return c;
}
char *whitespace(char *p)
{
        while(*p==' '||*p=='\t'||*p=='\n'||*p=='\r'||*p=='\v'||*p=='\f')
                p++;
        return p;
}
