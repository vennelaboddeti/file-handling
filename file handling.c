#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char ch[100],r[100],ch1,r1,ch2;
	int begin,end,count=0;
	fp1 = fopen("reverse order.txt","w+");
	fp2 = fopen("duplicte.txt","r+");
	printf("input to reverse function:\n");
	gets(ch);
	fprintf(fp1,"%s",ch);
	while((ch1 = getc(fp1))!=EOF)
	{
		printf("%c",ch1);
		count++;
	}
	printf("%dcount",count);
	end = count -1;
	for(begin=0;begin<count;begin++)
	{
		r[begin] = ch[end];
		end--;	
	}
	r[begin] ='\0' ;
	printf("output:\n%s\n",r);
	fprintf(fp1,"%s",r);
	while(1)
	{
		ch2 = fgetc(fp1);
		if(ch2 == EOF)
		break;
		else
		putc(ch2,fp2);	
	}
	printf("file copied successfully!");
	fclose(fp1);
	fclose(fp2);
	
}
