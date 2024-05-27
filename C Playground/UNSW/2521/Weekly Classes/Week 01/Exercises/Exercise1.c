#include<stdio.h> 
#include<stdlib.h> 

struct Node 
{
    int data;
    struct Node* next;
};

// Function to Insert Node in the Beginning
void insertAtBeginning(struct Node** head, int data){ 
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));      // create new node using dynamic memory allocation

    newNode->data = data;           // store the data in the new Node                                                                              

    newNode->next = *head;          // the next pointer of the new Node will be on current head

    *head = newNode;                // the current head will be the new Node
}

// Function to insert the Node in the end
void insertAtEnd(struct Node** head, int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;           // store the data in the new Node
    
    newNode->next = NULL;           // Since the node will be last its next will be NULL

    if (*head == NULL){             // The first node makes the newNode as the head of the LinkedList
        *head = newNode;
        return;
    }

    struct Node* current = *head;   // Create a pointer to iterate till the last node
    while (current->next != NULL){
        current = current->next;
    }

    current->next = newNode;        // make the next of the tail to the new Node
}

// Function to Print the Linked List
void printList(struct Node* head){
    struct Node* current = head;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

/*// Print List Teachers response
void printNumberedList (struct Node *list){
    doPrintNumberedList(list, 1);
}

void doPrintNumberedList(struct Node *list, int num) {
    if (list == NULL) return;

    printf("%d. %d\n", num, list->data);
    doPrintNumberedList(list->next, num + 1);
}*/

// Function to reverse the Linked List
void reverse(struct Node** head){
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while(current != NULL){
        next = current->next;   // store next

        current->next = prev;   // reverse current node's pointer

        prev = current;         // move pointers on position ahead
        current = next;
    }
    *head = prev;
}

// Function to return a value at an index
int valueAtIndex(struct Node* head, int index){
    struct Node* current = head;
    int count = 0;

    while (current != NULL){
        if (count == index){
            return current->data;
        }
        count++;
        current = current->next;
    }

    printf("Index is out of bounds\n\n");
    exit(EXIT_FAILURE);
}

void deleteValue(struct Node** head, int value){
    struct Node* temp = *head;
    struct Node* prev = NULL;

    // if the head node is the value that needs to be deleted
    if (temp != NULL & temp->data == value){
        *head = temp->next;
        free(temp);
        return;
    }

    // Searching for the value to be deleted, keeping tract of the previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != value){
        prev = temp;
        temp = temp->next;
    }

    // If the value was not present in the Linked List
    if (temp == NULL) {
        printf("Value not in Linked List\n\n");
        return;
    }

    //Unlink the value from the Linked List
    prev->next = temp->next;

    free(temp); // Free memory
}

int main(){
    int chosenIndex;
    int chosenValue;

    struct Node* head = NULL; // Create new Linked list

    // pass head by reference so that it can be modified
    insertAtBeginning(&head, 1);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 7);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 12);

    // Print the Linked List
    printf("\nLinked List: ");
    printList(head);

    // Print reversed Linked List
    printf("Reversed Linked List: ");
    reverse(&head);
    printList(head);
    reverse(&head);

    // Returning the value at chosen index
    printf("\nPlease choose an index number: ");
    scanf("%d", &chosenIndex);
    int value = valueAtIndex(head, chosenIndex);
    printf("The value at %d is %d\n", chosenIndex, value);

    // Print list with node 1 deleted
    printf("\nPlease choose an value to delete: ");
    scanf("%d", &chosenValue);
    deleteValue(&head, chosenValue);
    printf("Updated Linked List: ");
    printList(head);

    return 0;
}
