#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include <vector>
using namespace std;
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
#define MAX 300000
 
// A node of ternary search tree
struct Node
{
    char data;
 
    // True if this character is last character of one of the words
    unsigned isEndOfString: 1;
 
    struct Node *left, *eq, *right;
};
 
// A utility function to create a new ternary search tree node
struct Node* newNode(char data)
{
    struct Node* temp = (struct Node*) malloc(sizeof( struct Node ));
    temp->data = data;
    temp->isEndOfString = 0;
    temp->left = temp->eq = temp->right = NULL;
    return temp;
}
 
// Function to insert a new word in a Ternary Search Tree
void insert(struct Node** root, char *word)
{
    // Base Case: Tree is empty
    if (!(*root))
        *root = newNode(*word);
 
    // If current character of word is smaller than root's character,
    // then insert this word in left subtree of root
    if ((*word) < (*root)->data)
        insert(&( (*root)->left ), word);
 
    // If current character of word is greate than root's character,
    // then insert this word in right subtree of root
    else if ((*word) > (*root)->data)
        insert(&( (*root)->right ), word);
 
    // If current character of word is same as root's character,
    else
    {
        if (*(word+1))
            insert(&( (*root)->eq ), word+1);
 
        // the last character of the word
        else
            (*root)->isEndOfString = 1;
    }
}
 
// A recursive function to traverse Ternary Search Tree
void traverseTSTUtil(struct Node* root, char* buffer, int depth)
{
    if (root)
    {
        // First traverse the left subtree
        traverseTSTUtil(root->left, buffer, depth);
 
        // Store the character of this node
        buffer[depth] = root->data;
        if (root->isEndOfString)
        {
            buffer[depth+1] = '\0';
            printf( "%s\n", buffer);
        }
 
        // Traverse the subtree using equal pointer (middle subtree)
        traverseTSTUtil(root->eq, buffer, depth + 1);
 
        // Finally Traverse the right subtree
        traverseTSTUtil(root->right, buffer, depth);
    }
}
 
// The main function to traverse a Ternary Search Tree.
// It mainly uses traverseTSTUtil()
void traverseTST(struct Node* root)
{
    char buffer[MAX];
    traverseTSTUtil(root, buffer, 0);
}
 

int search(struct Node *root, char *word)
{
    if (!root)
        return 0;
 
    if (*word < (root)->data)
        return search(root->left, word);
 
    else if (*word > (root)->data)
        return search(root->right, word);
 
    else
    {
        if (*(word+1) == '\0')
            return root->isEndOfString;
 
        return search(root->eq, word+1);
    }
}
void computeLPSArray(string pat, int M, int *lps);
vector<int> kmp(string pat, string txt)
{
    int M = (pat).length();
    int N = (txt).length();
    vector<int> pos;
    int *lps = (int *)malloc(sizeof(int)*M);
    int j  = 0;  
 
    computeLPSArray(pat, M, lps);
 
    int i = 0;  
    while(i < N)
    {
      if(pat[j] == txt[i])
      {
        j++;
        i++;
      }
 
      if (j == M)
      {
		pos.push_back(i-j);
        j = lps[j-1];
      }
      else if(pat[j] != txt[i])
      {
        if(j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
    free(lps); 
    return pos;
}
 
void computeLPSArray(string pat, int M, int *lps)
{
    int len = 0;  
    int i;
 
    lps[0] = 0; 
    i = 1;
 

    while(i < M)
    {
       if(pat[i] == pat[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else 
       {
         if( len != 0 )
         {
           len = lps[len-1];
         }
         else
         {
           lps[i] = 0;
           i++;
         }
       }
    }
}
 

int main()
{
string s,b,e;
  	while(!cin.eof()){
struct Node *root = NULL;
cin>>s;
cin>>b;
cin>>e;
vector<int> bl = kmp(b,s);
vector<int> el = kmp(e,s);
int res = 0;
int sp = 0;
for(int i = 0; i < bl.size();i++){
for(int j = sp; j < el.size();j++){
if(el[j] > bl[i]){
string ins = s.substr(el[i],bl[j]-el[i]+(e.length()));
if(!search(root,&ins[0])){
res++;insert(&root,&ins[0]); }
}
else{sp++;}
}
if(sp == e.size()) break;
}
cout<<res<<endl;
}
return 0;
}
