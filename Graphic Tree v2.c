#include<stdio.h>
#include<string.h>
int main()
{
      FILE *fp;
      char t1[1100]="tree \"", t2[]="\" /f", cwd[1024], o;
      int i,j;
      system("color E");
      printf("\n\nOpen the \"mapping.doc\" file using MS-DOS encoding to view the directory structure.");
      getcwd(cwd, sizeof(cwd));
      strcat(t1,cwd);
      strcat(t1,t2);
      o=strlen(t1);
      fp=fopen("File2.bat","w");
      for(i=0;i<o;i++)
      putc(t1[i],fp);
      fclose(fp);
      system("File2.bat  > mapping.doc");
      //system("color C");
      remove("File2.bat");
      getch();
      return 0;
}
