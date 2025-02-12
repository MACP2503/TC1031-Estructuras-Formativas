#ifndef BST_H_
#define BST_H_

#include <string>
#include <sstream>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;
template <class T> class BST;

template <class T>
class Node {
private:
	T value;
	Node *left, *right;
	Node<T>* succesor();

public:
	Node(T);
	Node(T, Node<T>*, Node<T>*);
	void add(T);
	bool find(T);
	void remove(T);
	void removeChilds();
	void inorder(std::stringstream&) const;
	void preorder(std::stringstream&) const;
  void postorder(std::stringstream&) const;
  void levelByLevel(int, std::stringstream&) const;
	friend class BST<T>;
};

template <class T>
Node<T>::Node(T val) : value(val), left(0), right(0) {}

template <class T>
Node<T>::Node(T val, Node<T> *le, Node<T> *ri)
	: value(val), left(le), right(ri) {}

template <class T>
void Node<T>::add(T val) {
	if (val < value) {
		if (left != 0) {
			left->add(val);
		} else {
			left = new Node<T>(val);
		}
	} else {
		if (right != 0) {
			right->add(val);
		} else {
			right = new Node<T>(val);
		}
	}
}

template <class T>
bool Node<T>::find(T val) {
	if (val == value) {
		return true;
	} else if (val < value) {
		return (left != 0 && left->find(val));
	} else if (val > value) {
		return (right != 0 && right->find(val));
	}
}

template <class T>
Node<T>* Node<T>::succesor() {
	Node<T> *le, *ri;

	le = left;
	ri = right;

	if (left == 0) {
		if (right != 0) {
			right = 0;
		}
		return ri;
	}

	if (left->right == 0) {
		left = left->left;
		le->left = 0;
		return le;
	}

	Node<T> *parent, *child;
	parent = left;
	child = left->right;
	while (child->right != 0) {
		parent = child;
		child = child->right;
	}
	parent->right = child->left;
	child->left = 0;
	return child;
}

template <class T>
void Node<T>::remove(T val) {
	Node<T> * succ, *old;

	if (val < value) {
		if (left != 0) {
			if (left->value == val) {
				old = left;
				succ = left->succesor();
				if (succ != 0) {
					succ->left = old->left;
					succ->right = old->right;
				}
				left = succ;
				delete old;
			} else {
				left->remove(val);
			}
		}
	} else if (val > value) {
		if (right != 0) {
			if (right->value == val) {
				old = right;
				succ = right->succesor();
				if (succ != 0) {
					succ->left = old->left;
					succ->right = old->right;
				}
				right = succ;
				delete old;
			} else {
				right->remove(val);
			}
		}
	}
}

template <class T>
void Node<T>::removeChilds() {
	if (left != 0) {
		left->removeChilds();
		delete left;
		left = 0;
	}
	if (right != 0) {
		right->removeChilds();
		delete right;
		right = 0;
	}
}

template <class T>
void Node<T>::inorder(std::stringstream &aux) const {
	if (left != 0) {
		left->inorder(aux);
	}
	if (aux.tellp() != 1) {
		aux << " ";
	}
	aux << value;
	if (right != 0) {
		right->inorder(aux);
	}
}

template <class T>
void Node<T>::preorder(std::stringstream &aux) const {
	aux << value;
	if (left != 0) {
		aux << " ";
		left->preorder(aux);
	}
	if (right != 0) {
		aux << " ";
		right->preorder(aux);
	}
}

template <class T>
void Node<T>::postorder(std::stringstream &aux) const {
	if (left != 0) {
		left->postorder(aux);
    aux << " ";
	}
	if (right != 0) {
		right->postorder(aux);
    aux << " ";
	}
  aux<<value;
}

template <class T>
void Node<T>::levelByLevel(int level_no, std::stringstream &aux) const {
if (level_no == 1){
aux << value;
}
level_no--;

if(left != 0){
  if(level_no == 1){
    aux<<" ";
  }
  left->levelByLevel(level_no, aux);
}

if(right != 0){
  if(level_no == 1){
    aux<<" ";
  }
  right->levelByLevel(level_no, aux);
}


}


template <class T>
class BST {
private:
	Node<T> *root;

public:
	BST();
	~BST();
	bool empty() const;
	void add(T);
	bool find(T) const;
	void remove(T);
	void removeAll();
	std::string inorder() const;
	std::string preorder() const;
  std::string visit() const;
  std::string postorder() const;
  int height() const;
  int maxDepth(Node<T> *) const;
  std::string levelByLevel() const;
  int whatlevelamI(int) const;
  int getLevelUtil(Node<T> *,int ,int) const;
  string ancestors(int);
};

template <class T>
BST<T>::BST() : root(0) {}

template <class T>
BST<T>::~BST() {
	removeAll();
}

template <class T>
bool BST<T>::empty() const {
	return (root == 0);
}


template<class T>
void BST<T>::add(T val) {
	if (root != 0) {
		if (!root->find(val)) {
			root->add(val);
		}
	} else {
		root = new Node<T>(val);
	}
}

template <class T>
int BST<T>::maxDepth(Node<T> *node) const
{
    if (node == NULL){
      return 0;
    }
        
    else
    {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        if (lDepth > rDepth){
          return(lDepth + 1);
        }  
        else {
          return(rDepth + 1);
    }
}
}

template <class T>
string BST<T>::ancestors(int key){
stringstream aux;
int a = 0;
vector<int> valores;
Node<T> *roo=root;
aux<<"[";
string auxx="[]";
bool existe=false;
existe=find(key);
if (!existe) return auxx;
 
    stack<Node<T> *> st;
    while (1)
    {
        while (roo && roo->value != key)
        {
            st.push(roo);
            roo = roo->left;
        }

        if (roo && roo->value == key)
            break;
 
        if (st.top()->right == NULL)
        {
            roo = st.top();
            st.pop();
 
            while (!st.empty() && st.top()->right == roo)
               {roo = st.top();
               st.pop();
               }
        }
        roo = st.empty()? NULL: st.top()->right;
    }
    if(st.empty())
    {
    aux<<"]";
    return aux.str();
    }

    while (!st.empty())
    {
        valores.push_back(st.top()->value);
        st.pop();
        a++;
        }

    for(int i=(a-1); i>=0; i--){
      aux<<valores[i];
      if(i!=0){
      aux<<" ";
      }

      }
  aux<<"]";
  return aux.str();
}
 
template <class T>
int BST<T>::getLevelUtil(Node<T> *node, int data, int level) const
{
    if (node == NULL)
        return 0;
 
    if (node -> value == data)
        return level;
 
    int downlevel = getLevelUtil(node -> left,
                                 data, level + 1);
    if (downlevel != 0)
        return downlevel;
 
    downlevel = getLevelUtil(node->right,
                             data, level + 1);
    return downlevel;
}

template <class T>
int BST<T>::whatlevelamI(int num) const{
  return getLevelUtil(root, num, 1);
}


template <class T>
void BST<T>::remove(T val) {
	if (root != 0) {
		if (val == root->value) {
			Node<T> *succ = root->succesor();
			if (succ != 0) {
				succ->left = root->left;
				succ->right = root->right;
			}
			delete root;
			root = succ;
		} else {
			root->remove(val);
		}
	}
}

template <class T>
void BST<T>::removeAll() {
	if (root != 0) {
		root->removeChilds();
	}
	delete root;
	root = 0;
}

template <class T>
bool BST<T>::find(T val) const {
	if (root != 0) {
		return root->find(val);
	} else {
		return false;
	}
}

template <class T>
std::string BST<T>::inorder() const {
	std::stringstream aux;

	aux << "[";
	if (!empty()) {
		root->inorder(aux);
	}
	aux << "]";
	return aux.str();
}

template <class T>
std::string BST<T>::preorder() const {
	std::stringstream aux;

	aux << "[";
	if (!empty()) {
		root->preorder(aux);
	}
	aux << "]";
	return aux.str();
}

template <class T>
int BST<T>::height() const{
int a = maxDepth(root);
return a;      
}

template <class T>
string BST<T>::levelByLevel() const{
  stringstream aux;
  int level = maxDepth(root);
  aux<<"[";
  	if (!empty()) {
      for(int i=1; i<=level; i++){
        root->levelByLevel(i, aux);
      }
	}
  aux<<"]";
  return aux.str();
}

template <class T>
string BST<T>::postorder() const{
  stringstream aux;
  aux<<"[";
  	if (!empty()) {
		root->postorder(aux);
	}
  aux<<"]";
  return aux.str();
}

template <class T>
string BST<T>::visit() const{
  stringstream aux;

  aux<<preorder();
  aux<<"\n";

  aux<<inorder();
  aux<<"\n";
  
  aux<<postorder();
  aux<<"\n";

  aux<<levelByLevel();
  return aux.str();

}


#endif /* BST_H_ */