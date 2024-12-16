#include <stdio.h>
#include <stdlib.h>
#include<assert.h>



// Node of a linked list
struct intNode {
  int value;
  struct intNode* next;
};

// Create a node, given its value and next, return its pointer.
// The caller is responsible for freeing the node.
struct intNode* create_node(int val, struct intNode* next) {
  struct intNode* new_node;
  new_node = (struct intNode*) malloc(sizeof(struct intNode));
  new_node->value = val;
  new_node->next = next;
  return new_node;
}


// Given an array of integers of length 'size', create a linked
// list (of length size+1).
//
// Return the empty header node (with value = 0).
struct intNode* create_linked_list(int* list, int size) {
}

// Traverse the linked list and store its values in an array
// Skip the empty header node.
void traverse_linked_list(struct intNode* head, int* list, int* size) {

}

// Free the entire linked list, given the header node.
void free_linked_list(struct intNode* head) {
}

// Search for the first node in the linked list with the given
// target value after the given node 'head'.
// If target value is not found, return an empty pointer.
struct intNode* search(struct intNode* head, int target_value) {
}

// Given a node 'prev', insert the 'current' node right after
// 'prev'.
void insert(struct intNode* prev, struct intNode* current) {
}

// Delete the current node given its previous node.
void delete(struct intNode* prev, struct intNode* current) {
}

//Test traverse_linked_list
void test_traverse_linked_list(){
int arr[] = {1, 2, 3, 4, 5};
    struct intNode* list = create_linked_list(arr, 5);
    int output[5];
    int size;
    traverse_linked_list(list, output, &size);

    assert(size == 5);  // Ensure the list has 5 elements
    for (int i = 0; i < size; i++) {
        assert(output[i] == arr[i]);  // Ensure the values match the original array
    }
free_linked_list(list); 
printf("test_traverse_function passed!\n");
}

// Test find function
void test_find_function(){
int arr[] = {1, 2, 3, 4, 5};
struct intNode* list = create_linked_list(arr, 5);

struct intNode* found = search(list, 3);
assert(found != NULL);  // Node with value 3 should be found
assert(found->value == 3);  // Ensure the value is correct

found = search(list, 6);
assert(found == NULL);  // Node with value 6 should not be found

free_linked_list(list); 
printf("test_find_function passed!\n");
}
// Test insert function
void test_insert_function(){
int arr[] = {1, 2, 3, 4, 5};
struct intNode* list = create_linked_list(arr, 5);

struct intNode* new_node = create_node(99, NULL);
insert(list->next, new_node);  // Insert 99 after the first node (1)
assert(list->next->next->value == 99);  // Ensure 99 is correctly inserted after 1

free_linked_list(list); 
printf("test_insert_function passed!\n");
}

//test delete function
void test_delete_function(){
int arr[] = {1, 2, 3, 4, 5};
struct intNode* list = create_linked_list(arr, 5);
struct intNode* delete_node=list->next->next;

struct intNode*tmp=list->next;


delete(list->next, delete_node);  // Delete the node with value 1
assert(list->next->next->value == 3);  // Ensure 1 was deleted



free_linked_list(list); 
printf("test_delete_function passed!\n");
}


int main() {
    test_traverse_linked_list();
    test_find_function();
    test_insert_function();
    test_delete_function();

    printf("All tests passed!\n");
    return 0;
}
