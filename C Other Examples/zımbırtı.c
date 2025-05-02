#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* yeniDugum(int veri){
    struct Node *dugum = (struct Node*)malloc(sizeof(struct Node));
    dugum->data = veri;
    dugum->left = NULL;
    dugum->right= NULL;
    return dugum;
}

struct Node* ekle(struct Node* kok,int veri){
    if(kok == NULL){
        return yeniDugum(veri);
        //Ağaç boşsa yeni bir düğüm oluştur ve kök yap
    }
    if(veri < kok->data){
        kok->left = ekle(kok->left,veri);
    }
    else if(veri >kok->data){
        kok->right = ekle(kok->right,veri);
    }
    return kok;
}

int find(struct Node *kok,int hedef){
    if(kok==NULL){
        return 0;
    }
    if(kok->data == hedef){
        return 1;
    }
    if(hedef < kok->data){
        return find(kok->left,hedef);
    }
    else {
        return find(kok->right,hedef);
    }
}

void inOrder(struct Node* kok){
    if(kok!=NULL){
        inOrder(kok->left);
        printf("%d ",kok->data);
        inOrder(kok->right);
    }
}

void preOrder(struct Node* kok){
    if (kok!=NULL){
    printf("%d ",kok->data);
    preOrder(kok->left);
    preOrder(kok->right);}
}

void postOrder(struct Node* kok){
    if(kok!=NULL){
    postOrder(kok->left);
    postOrder(kok->right);
    printf("%d ",kok->data);}
}

int main()
{
    struct Node *root = NULL;
    root = ekle(root,50);
    root = ekle(root, 30);
    root = ekle(root, 70);
    root = ekle(root, 20);
    root = ekle(root, 40);
    root = ekle(root, 80);

    printf("Inorder Traversal: \n");
    inOrder(root);
    printf("\n\n");

    printf("Preorder Traversal: \n");
    preOrder(root);
    printf("\n\n");

    printf("Postorder Traversal: \n");
    postOrder(root);
    printf("\n");

}