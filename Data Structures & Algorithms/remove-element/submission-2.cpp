// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// Node* head=NULL;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1,count=0;
        // if (nums.size()==0 || nums.size()==1 && nums[0]==val) return 0;
        // else if (nums.size()==1 && nums[0]!=val) return 1; 
        while(i<=j){
            if (nums[i]==val){
                if (nums[j]!=val){
                    swap(nums[i],nums[j]);
                    i++;
                    count++;
                }
                j--;
            }
            else{
                count++;
                i++;
            }
        }
        return count;
    }
    // Node* func(Node* &head,vector<int>& nums,int val){
    //     Node* tail=NULL;
    //     for (int i=0;i<nums.size();i++){
    //         Node* n=new Node(nums[i]);
    //         if (head==NULL){
    //             head=n;
    //             tail=n;
    //         }
    //         else{
    //             tail->next=n;
    //             tail=n;
    //         }
    //     }
    //     Node* temp=head;
    //     while(head->val==val){
    //         head=head->next;
    //     }
    //     while(temp && temp->next){
    //         if (temp->next->val==val){
    //             temp->next=temp->next->next;
    //         }
    //         else{
    //             temp=temp->next;
    //         }
    //     }
    //     return head;
    // }
};