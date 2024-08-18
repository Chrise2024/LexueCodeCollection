#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	//Node* header = Node{1,NULL};
	struct Node* header = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
	header->data = 1;
	header->next = NULL;
	//Node* p = Node{2,NULL};
	p->data = 2;
	p->next = NULL;
	header->next = p;
	if (a == 1) {
		printf("The left child is NO 1.");
		return 0;
	}
	else if (a == 2) {
		if (b % 2 == 0)printf("The left child is NO 1.");
		else printf("The left child is NO 2.");
		return 0;
	}
	for (i = 3; i <= a; i++) {
		//Node* tmp = Node{i,NULL};
		struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
		tmp->data = i;
		tmp->next = NULL;
		p->next = tmp;
		p = p->next;
		if (i == a) {
			p->next = header;
		}
	}
	for (i = 1; i <= a - 1; i++) {
		header = header->next;
	}
	int start = 0, k = 1000, aa = a;
	struct Node* j = header;
	while (k--) {
		if ((start + 1) % b == 0) {
			struct Node* tt = j->next;
			j->next = tt->next;
			aa--;
			start = 0;
		}

		else {
			j = j->next;
			start++;
		}
		if (aa == 1) {
			break;
		}
	}
	printf("The left child is NO %d.\n", j->data);
}
