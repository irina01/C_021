void push(struct node* head, int data) //(доп. данные)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node)); //Ошибка в типе указателя, который возвращает malloc()
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

void push_test()
{
	newNode* head = build();      // вместо List ставим newNode*
	push(&head, 1);               // перед head должно стоять & 
}
