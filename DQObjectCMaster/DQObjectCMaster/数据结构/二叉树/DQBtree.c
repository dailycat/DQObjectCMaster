//
//  DQBtree.c
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/28.
//  Copyright © 2019年 deqing. All rights reserved.
//

#include "DQBtree.h"
#include <stdio.h>

typedef struct _tag_BTree TBTree;
struct _tag_BTree
{
    int count;
    BTreeNode *root;
};

static void recursive_display(BTreeNode *node, BTree_Printf *pFunc, int format, int gap, char div) {
    int i = 0;
    if ((node != NULL) && (pFunc != NULL)) {
        for (i = 0; i<format; i++) {
            printf("%c", div);
        }
        
        pFunc(node);
        
        printf("\n");
        
        if ((node->left != NULL) || (node->right != NULL)) {
            recursive_display(node->left, pFunc, format + gap, gap, div);
            recursive_display(node->right, pFunc, format + gap, gap, div);
        }
    }
    else
    {
        for(i=0; i<format; i++)
        {
            printf("%c", div);
        }
        printf("\n");
    }
}

static int recursive_count(BTreeNode* root) // O(n)
{
    int ret = 0;
    
    if( root != NULL )
    {
        ret = recursive_count(root->left) + 1 + recursive_count(root->right);
    }
    
    return ret;
}

static int recursive_height(BTreeNode* root) // O(n)
{
    int ret = 0;
    
    if( root != NULL )
    {
        int lh = recursive_height(root->left);
        int rh = recursive_height(root->right);
        
        ret = ((lh > rh) ? lh : rh) + 1;
    }
    
    return ret;
}


