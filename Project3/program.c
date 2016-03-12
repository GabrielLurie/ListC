 #include <stdlib.h>
#include <stdio.h>
#include "list.h"

int  main() {
	List  *  L1 = init_List(1);
    List  *  L2 = init_List(5);
	add_Element(L1,2);
		add_Element(L1,3);
	add_Element(L1,4);
	add_Element(L1,5);

	add_Element_ByRef(L1,L2);
	add_Element(L1,1);
	//remove_Element(L2);
	//add_Element(L1,10);
	//printf("debug 0");
//	remove_Element(L2);
		
	
//	printf("debug 1 \n");
	
//	printf("debug 2");
		
		print(L1);

		printf("\nlength: %d",length(L1));
		printf("\n avg : %lf ",avg(L1,0,0));
		clear_List(L1);
	//	print(L1); //List was cleared, therefor, cannot print the list.

		
		getchar();
}