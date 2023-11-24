//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
map<char, int> freq;

struct MinHeapNode 
{ 
	char data;			
	int freq;			
	MinHeapNode *left, *right; 

	MinHeapNode(char data, int freq) 
	{ 
		left = right = NULL; 
		this->data = data; 
		this->freq = freq; 
	} 
};

struct compare 
{ 
	bool operator()(MinHeapNode* l, MinHeapNode* r) 
	{ 
		return (l->freq > r->freq); 
	} 
}; 


void calcFreq(string str, int n) 
{ 
	for (int i=0; i<str.size(); i++) 
		freq[str[i]]++; 
}

priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;
map<char, string> codes;

void storeCodes(struct MinHeapNode* root, string str) 
{ 
	if (root==NULL) 
		return; 
	if (root->data != '$') 
		codes[root->data]=str; 
	storeCodes(root->left, str + "0"); 
	storeCodes(root->right, str + "1"); 
}

void HuffmanCodes(int size) 
{ 
	struct MinHeapNode *left, *right, *top; 
	for (map<char, int>::iterator v=freq.begin(); v!=freq.end(); v++) 
		minHeap.push(new MinHeapNode(v->first, v->second)); 
	while (minHeap.size() != 1) 
	{ 
		left = minHeap.top(); 
		minHeap.pop(); 
		right = minHeap.top(); 
		minHeap.pop(); 
		top = new MinHeapNode('$', left->freq + right->freq); 
		top->left = left; 
		top->right = right; 
		minHeap.push(top); 
	} 
	storeCodes(minHeap.top(), ""); 
}

void printCodes(struct MinHeapNode* root, string str) 
{ 
	if (!root) 
		return; 
	if (root->data != '$') 
		cout << root->data << ": " << str << "\n"; 
	printCodes(root->left, str + "0"); 
	printCodes(root->right, str + "1"); 
}

int main()
{
    string str = "BACADAEAFABBAAAGAH"; 
    calcFreq(str, str.length()); 
	HuffmanCodes(str.length());

    cout << "Character With their Frequencies: "<<endl;

    for (auto it=codes.begin(); it!=codes.end(); it++) 
		cout << it->first <<' ' << it->second << endl;
    return 0;
}