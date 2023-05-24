//This part was coded by Airell Ramadhan Budiraharjo <2006535230>

#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

struct node{  
    int data;  
    char s[10];
    float time;
    struct node *next;  
};      
   
struct node *head, *tail = NULL;  
 
void addNode(char s[10], int data, float time) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    strcpy(newNode->s,s);
    newNode->time = time;
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode;  
        tail = newNode;  
    }  
}  
   
void sortList() {  
    //Node current will point to head  
    struct node *current = head, *index = NULL;  
    int temp;
    float temp1;
    char temp2[100];
          
    if(head == NULL) {  
        return;  
    }  
    else {  
        while(current != NULL) {  
                  
            index = current->next;  
                
            while(index != NULL) {  
                    
                if(current->data < index->data) {  
                    temp = current->data;  
                    current->data = index->data;  
                    index->data = temp;  
                    
                    temp1 = current->time;  
                    current->time = index->time;  
                    index->time = temp1; 
                        
                    strcpy(temp2,current->s);
            	    strcpy(current->s,index->s);
            	    strcpy(index->s,temp2);
                }
				else if(current->data == index->data && strcmpi(current->s,index->s) > 0) {  
                    temp = current->data;  
                    current->data = index->data;  
                    index->data = temp;
				
		    		temp1 = current->time;
               	    current->time = index->time;
		    		index->time = temp1;  
                
                    strcpy(temp2,current->s);
            	    strcpy(current->s,index->s);
            	    strcpy(index->s,temp2);
                }  
                index = index->next;  
            }  
            current = current->next;  
        }      
    }  
}  

void openf(){
 	FILE *fptr;
 	int nomor, score; 
 	int i;
	float waktu;
	char nama[10];
	fptr = fopen("ScoreText.txt","r");
	if(fptr == NULL){                  //create file if the file doesn't exist
		fclose(fptr);
		fopen("ScoreText.txt","w");
		fclose(fptr);
	}
	else {
		int c = getc(fptr);
		while (c != EOF) {	    //Looping when not reaching end of file 
   			fscanf(fptr, "%s %d %f\n", nama, &score, &waktu);  //read file
			addNode(nama, score, waktu);
			c = getc(fptr);	
		}
		fclose(fptr);
	}
 }

void write (FILE *fptr){
    fptr = fopen ("ScoreText.txt", "w");    
    struct node *current = head;  
    if(head == NULL) {  
        printf("Tidak ada list \n");  
        return;  
    }
    while(current != NULL) {    //write the data from linked list to the text file
		fprintf(fptr, "- %10s\t %d\t %.2f\n", current->s, current->data, current->time);
        current = current->next;  
    } 
	fclose(fptr);   
} 

void display (){
	struct node *current = head;
	int i = 1;
	printf ("\n\n\n\t%3s\t%10s\t%s\t%s\n", "NO.", "NAME", "SCORE", "TIME");
	printf ("\t======================================\n");
	while(current != NULL) {				//print data from linked list
	    printf("\t%3d\t", i);
	    printf("%10s\t", current->s);
        printf("%d\t", current->data);
        printf("%.2f\n", current->time);
	    current = current->next;	
        i++;
	}  
	head = NULL;
	free(current);
	printf("\n\n\n\tPress any key to continue...");
	getch();
	system("cls");
} 
      
void leaderboard (char name[10], float *time, int *globalScore){
    FILE *fptr;  
    struct node *current = head;
    head = NULL;
    openf();                                    //Check text file and read text file to get data for linked list

    addNode(name, *globalScore, *time);         //add linked list

    sortList();    		             //Sorting list (descending)
    write(fptr);    			     //Write leaderboard to the text
    free(head);					     //Free the data on linked list
    getch();
    system("cls");
}  
