//  Last sanity check: 2020-04-21
// Example program
#include <iostream>
#include <string>
using namespace std;

struct TreeNode 
{ TreeNode *left, * right; };

template <typename T> class Generic_Parser 
{
public:
    void parse_preorder(TreeNode *node)
    {
        if(node)
        {
            process_node(node);
            parse_preorder(node->left);
            parse_preorder(node->right);        
        }
    cout<<"Generic_Parser::parse_preorder(): \n";    
    }

    void process_node(TreeNode * node) 
    {
        static_cast<T*>(this)->process_node(node);    
    } 
};

class EmployeeChart_Parser : public Generic_Parser<EmployeeChart_Parser>
{
    public:
    void process_node (TreeNode *node)  //this fct will be used because the one from the parent is virtual
    {
        cout<<"EmplyeeChart::process_node(): \n";
    }
};

int main()
{
    TreeNode* root;
    EmployeeChart_Parser ep;
    ep.parse_preorder(root);

return 0;
}
