#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sstream>
using namespace std;
void space(int ,int );
short int len_str(char*);
short int len_str1(string);
short int len_int(short int);
short int sem_ckc();
short int sub_ckc();
string bran(string);
string bran1();
string grade(short int,short int);

struct str
{
    char subj[25];
};
 char rollno[13];
int main()
{   ostringstream _s,c;
    string branch,branc,res;
    char name[25],status[8]={"REGULAR"};
    short int sub_no,sem,total=0;
    float per,cgpa=86.9214;

    cout<<"Enter the name of the student : ";
    gets(name);
    cout<<"\nEnter Roll number of the student form cs ec ce me Streams : ";
    gets(rollno);
    branc=bran1();
    branch=bran(branc);

    //cout<<"\nStatus of Student is Private or Regular : ";
    //gets(status);
    sem=sem_ckc();
    sub_no=sub_ckc();

    system("cls");
    //string *sub=new string [sub_no];
    struct str *sub=new str[sub_no];
    short int *m=new short int[sub_no];
/*
    sub[1]={"DATA STRUCTURES"};
    sub[2]={"DIGITAL SYSTEMS"};
    sub[3]={"OBJECT ORIENTED SYSTEM"};
    sub[0]={"DISCRETE STRUCTURE"};
    sub[4]={"ENERGY AND ENVIRONMENT"};*/

    for(int q=0;q<sub_no;q++)
    {   fflush(stdin);
        cout<<"\nEnter the subject "<<q+1<<" : ";
        fflush(stdin);
        gets(sub[q].subj);
        cout<<"\nEnter the marks in "<<sub[q].subj<<" : ";
        cin>>m[q];
        total=total+m[q];
    }
    per=(float)(total*100)/(sub_no*70);
     if(sem==1)
        cgpa=per;
    else
        cgpa=(cgpa+per)/2;
    if(per>33)
        res="PASS";
    else
        res="FAIL";

    _s<<per;
    string p(_s.str());
    c<<cgpa;
    string s(c.str());
    system("cls");


    cout<<endl<<endl<<endl;
    cout<<"       _____________________________________________________________________________________ "<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |   *****       RAJIV GANDHI PROUDYOGI                                                |"<<endl;
    cout<<"      |  *******      VISHWAVIDYALAYA, BHOPAL                                               |"<<endl;
    cout<<"      | *********                                                                           |"<<endl;
    cout<<"      |  *******                   !! STATEMENTS OF MARKS !!                                |"<<endl;
    cout<<"      |   *****                                                                             |"<<endl;
    cout<<"      |_____________________________________________________________________________________|"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |                             EXAMINATION DECEMBER 2018                               |"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |  ROLL NO.   :  "<<strupr(rollno);space(13,len_str(&rollno[0]));cout<<"                            BTec,"<<branch;space(23,len_str(&branch[0]));cout<<"|"<<endl;
    cout<<"      |  NAME       :  "<<strupr(name);space(25,len_str(&name[0]));cout<<"                SEMISTER : "<<sem<<"                |"<<endl;
    cout<<"      |  INSTITUTE  :  TRUBA INSTITUT                           STATUS   : "<<strupr(status);space(10,len_str1(status));cout<<"       |"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |_____________________________________________________________________________________|"<<endl;
    cout<<"      |            |                                        |                               |"<<endl;
    cout<<"      |    CODE    |               SUBJECTS                 |            MARKS              |"<<endl;
    cout<<"      |____________|________________________________________|_______________________________|"<<endl;
    cout<<"      |            |                                        |                               |"<<endl;
    cout<<"      |            |                                        |                               |"<<endl;
    for(int e=0;e<sub_no;e++)
    {
    cout<<"      |   "<<branc<<sem<<"00"<<e+1<<"   |  "<<strupr(sub[e].subj);space(25,len_str1(sub[e].subj));cout<<"             |                        "<<grade(m[e],70);
    space(4,len_str1(grade(m[e],70)));
    cout<<"   |"<<endl;
    }
    cout<<"      |            |                                        |                               |"<<endl;
    cout<<"      |____________|________________________________________|_______________________________|"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |                                                             SGPA  :  "<<per;space(10,len_str1(p));cout<<"     |"<<endl;
    cout<<"      |                                                             CGPA  :  "<<cgpa;space(10,len_str1(s));cout<<"     |"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |_____________________________________________________________________________________|"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |    RESULT  :  "<<res<<"                                                                  |"<<endl;
    cout<<"      |                                                                                     |"<<endl;
    cout<<"      |    NOTE : It is computer generated output.                 *##* : Pass with Grace   |"<<endl;
    cout<<"      |_____________________________________________________________________________________|"<<endl;

    return 0;
}
void space(int a,int b)
{
    for(int i=0;i<a-b;i++)
        cout<<" ";
}
short int len_str(char *a)
{  int i;
    for(i=0;*a!='\0';a++,i++);
        return i;
}
short int len_str1(string a)
{  int i;
    for(i=0;a[i]!='\0';i++);
        return i;
}
short int len_int(short int a)
{int i=0;
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    return i;
}
short int sem_ckc()
{int se;
    cout<<"\nEnter the semister of the student : ";
    cin>>se;
    if(se<1||se>8)
    {
        cout<<"\nINVALID SEMISTER";
        sem_ckc();
    }
    else
        return se;
}
short int sub_ckc()
{int sub;
    cout<<"\nEnter the number of Subjects : ";
    cin>>sub;
    if(sub<1||sub>6)
    {
        cout<<"\nINVALID SEMISTER";
        sub_ckc();
    }
    else
        return sub ;
}
string bran1()
{
    fflush(stdin);
    char b[3];
    string a;
    //cout<<"\nEnter Branch of the student form cs ec ce me : ";
    fflush(stdin);
    //gets(b);
    b[0]=::rollno[4];
    b[1]=::rollno[5];
    b[2]='\0';
    a=strupr(b);
    return a;
}
string bran(string y)
{
    if (y=="CS")
        return "COMPUTER SCIENCE";
    else if (y=="EC")
        return "ECLECTRONICS";
    else if(y=="CE")
        return "CIVIL ENGENEERING";
    else if(y=="ME")
        return "MECHANICAL";
    else
       {
        cout<<"Branch not available\n";
        system("pause");
        bran1();
       }
}
string grade(short int marks,short int total)
{
 int z=(marks*100)/total;

    if(z>90&&z<=100)
        return "A+";
    else if(z>80&&z<=90)
        return "A";
    else if(z>70&&z<=80)
        return "B+";
    else if(z>60&&z<=70)
        return "B";
    else if(z>50&&z<=60)
        return "C+";
    else if(z>40&&z<=50)
        return "C";
    else if(z>32&&z<=40)
        return "D+";
    else if(z>=0&&z<=32)
        return "F";
    else
        { cout<<"Entered wrong marks ";
          system("pause");
          return 0;
        }
}
