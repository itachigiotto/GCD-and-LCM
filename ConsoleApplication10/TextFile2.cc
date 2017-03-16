struct Node_array
{
	int num;
	Node_array *next;
};
extern Node_array *input;
extern void sort(Node_array *h);
extern void output(Node_array *h);
extern void remove(Node_array *h);
int main()
{
	Node_array *head;
	head = input();
	sort(head);
	output(head);
	remove(head);
	return 0;
}