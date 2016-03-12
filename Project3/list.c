 #include <stdlib.h>
#include <stdio.h>
#include "list.h"

List * init_List(int k){

	struct List *tmp=(struct List*)malloc(sizeof(struct List));
	tmp->info=k;
	tmp->next=NULL;
	tmp->previous=NULL;
	return tmp;

  }

void  clear_List (List * l){
	struct List *tmpCurr=l;
	struct List *tmpNext=l->next;

	
	while(tmpCurr!=NULL){

	//	if(tmpNext->next==NULL){ free(tmpCurr); return;}

		if(tmpNext==NULL){// printf("clearing last"); 
		free(tmpCurr);
		return;
		 }
		tmpNext->previous=NULL;
		//if(tmpCurr->next==NULL){free(tmpCurr); return;}
		//printf("\n is being clreared %d : ",tmpCurr->info);
		free(tmpCurr);
		
		tmpCurr=tmpNext;
		tmpNext=tmpCurr->next;

	   }
	 }

void add_Element (List *l,int k){

	if(l->next==NULL){
		struct List *tmp=(struct List*)malloc(sizeof(struct List));
		tmp->info=k;
		tmp->previous=l;
		tmp->next=NULL;
		l->next=tmp;
		return;
 }

	

	add_Element(l->next,k);
}

void add_Element_ByRef(List *l,List *toAdd){
	if(l->next==NULL) {
			l->next=toAdd;
			
			toAdd->previous=l;
			return;
			
		}

		add_Element_ByRef(l->next,toAdd);

	}

void remove_Element(List *elm){

	if(elm->next==NULL){ elm->previous->next=elm->next;
	free(elm);
	return;
	}
	elm->next->previous=elm->previous;
	elm->previous->next=elm->next;
	free(elm);
}


int length(List *l){

	if(l->next==NULL) 
       return 1;
	return 1+length(l->next);
}

List * fElem(List *elm){      
	if(elm->previous==NULL) return elm;
	return fElem(elm->previous);
}
List * lElem(List *elm){
	if(elm->next==NULL) return elm;
	return lElem(elm->next);
}
List * getNext(List *curr){
	return curr->next;
}
List * getPrevious(List *curr){

	return curr->previous;
}

int getInfo(List *curr){
	return curr->info;
}
double avg(List *l,int sum,int lgth){
	if(l->next->next ==NULL){
		//printf("I am here: %d %f ||||| %d ",lgth,(sum+l->info))/((double)(lgth+1),l->info);
		//printf("here %lf ||| %d",(double)(sum+l->info+l->next->info)/(double)(lgth+2),l->info);
		return (sum+l->info+l->next->info)/(lgth+2);
	          
	}
	
		      return avg(l->next,sum+(l->info),lgth+1);
}

void print(List *l){
		
	struct List *tmp=l;

	if(l==NULL) {
			printf("\n empty list");
		return;
		}
	
	while(tmp!=NULL){
		printf("%d,",tmp->info);
	tmp=tmp->next;

	
	}
	
}
	

