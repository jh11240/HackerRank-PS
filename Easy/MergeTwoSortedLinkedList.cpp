#pragma region Using vector and sort algorithm

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
// SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
//     if(head1 == nullptr && head2 == nullptr){
//         return nullptr;
//     } 
//     else if(head1 ==nullptr){
//         return head2;
//     }
//     else if(head2 == nullptr){
//         return head1;
//     }
//     vector<int> v;
//     SinglyLinkedListNode* tmp=head1;
//     while(tmp != nullptr){
//         v.push_back(tmp->data);
//         tmp=tmp->next;
//     }
//     tmp=head2;
//     while(tmp!=nullptr){
//         v.push_back(tmp->data);
//         tmp=tmp->next;
//     }
//     sort(v.begin(),v.end());
//     SinglyLinkedListNode* prev=nullptr;
//     SinglyLinkedListNode* head=nullptr;
//     for(int i=0;i<v.size();i++){
//         SinglyLinkedListNode* cur=new SinglyLinkedListNode(v[i]);
//         if(i==0) {
//             head=cur;
//             prev=cur;
//             continue;
//         }
//         prev->next=cur;
//         prev=cur;
//     }
//     return head;
// }

#pragma endregion

#pragma region compare two lists headvalue and link

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

//checking Eiter container EMpty 
    if(head1 == nullptr && head2 == nullptr){
        return nullptr;
    } 
    else if(head1 ==nullptr){
        return head2;
    }
    else if(head2 == nullptr){
        return head1;
    }
    
//compare head1,head2 's head value, and link smaller value into rethead
    SinglyLinkedListNode *retHead;
    SinglyLinkedListNode *retIter;
    
    SinglyLinkedListNode* iter1 = head1;
    SinglyLinkedListNode* iter2 = head2;
    
    if(iter1->data >=iter2->data){
        retHead=iter2;
        iter2=iter2->next;
    }
    else{
        retHead=iter1;
        iter1=iter1->next;
    }
    retIter=retHead;
    while(iter1!=nullptr && iter2!=nullptr){
        if(iter1->data >= iter2->data){
            retIter->next=iter2;
            retIter=iter2;
            iter2=iter2->next;
        }
        else{
            retIter->next=iter1;
            retIter=iter1;
            iter1=iter1->next;
        }
    }
    
//if one list run out, link entire other list into rethead
    if(iter1 == nullptr && iter2==nullptr){
       return retHead; 
    }
    else if(iter1==nullptr){
        while(iter2!=nullptr){
            retIter->next=iter2;
            retIter=iter2;
            iter2=iter2->next;
        }
    }
    else {
        while(iter1!=nullptr){
            retIter->next=iter1;
            retIter=iter1;
            iter1=iter1->next;
        }
    }
    return retHead;
}
#pragma endregion 