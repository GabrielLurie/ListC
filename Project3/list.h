struct  List {
 int info;
 struct List *next;
 struct List *previous;
};
typedef struct List  List;
List * init_List(int);
void  clear_List (List *);
void add_Element (List *,int);
void remove_Element(List *);
int length(List *);
List * fElem(List *);
List * lElem(List *);
List * getNext(List *);
List * getPrevious(List *);
int getInfo(List *);
double avg(List *,int,int);
void print(List *);
void add_Element_ByRef(List *,List *);
