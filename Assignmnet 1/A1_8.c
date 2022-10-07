/*
8. Insert, Edit and Delete the contents of student data using structure, function, and pointers
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char Name[30];
	int regno;
};

void Edit(struct student *ptr, int regno, char *name);
void Insert(struct student *ptr, int regno, char *name);
void Delete(struct student *ptr);
void Edit(struct student *ptr, int regno, char *name)
{
	ptr->regno = regno;
	strcpy(ptr->Name,name);
}

void Delete(struct student *ptr)
{
	 free(ptr);
}

void Insert(struct student *ptr, int regno, char *name){
	ptr->regno = regno;
	strcpy(ptr->Name,name);
}
void main()
{
	struct student *ptr = (struct student*) malloc(sizeof(struct student));

	Insert(ptr,18,"sugumar");
	printf("student regester No = %d  \n",ptr->regno);
	printf("student Name = %s  \n",ptr->Name);

	Edit(ptr,19,"murugan");
	printf("student regester No = %d  \n",ptr->regno);
	printf("student Name = %s  \n",ptr->Name);

	Delete(ptr);
	printf("student regester No = %d  \n",ptr->regno);
	printf("student Name = %s  \n",ptr->Name);

	return ;
}
