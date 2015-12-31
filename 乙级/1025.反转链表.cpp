/*
*pat甲级 1025：反转链表
*方法一：通过自定义双向链表来实现，能实现sample案例，但是其他都会内存溢出或者运行超时
*方法二:使用了STL的reverse函数，reverse(vector.begin(),vector.begin()+5) 仅仅对5个元素进行reverse操作，不包括vector.begin()+5
*/

//方法一
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//c++结构体中可以其他结构体，以及自己结构体的指针
//cin或者cout的变量为string类型时需要include<string>

struct node{
  string preAddr;
  string nextAddr;
  int value;
  node *nextNode;
  node *preNode;
};

int main(){
  string firstAddr;
  int nodeNum, reverseNum, tmpNum;
  node tmp;
  node *head = NULL, *current = NULL;
  tmp.preNode = NULL;
  tmp.nextNode = NULL;
  vector<node> nodeList;
  cin >> firstAddr >> nodeNum >> reverseNum;
  //store the input 
  for (int i = 0; i < nodeNum; i++){
    cin >> tmp.preAddr >> tmp.value >> tmp.nextAddr;
    nodeList.push_back(tmp);
  }

  //sort the input
  //find the firstNode
  tmpNum = nodeNum;
  for (int i = 0; i < nodeNum; i++) {
    if (nodeList[i].preAddr == firstAddr){
      head = current = &nodeList[i];
      tmpNum--;
    }
  }
  //find the other nodes
  while (tmpNum != 0){
    for (int i = 0; i < nodeNum; i++){
      if (nodeList[i].preAddr == current->nextAddr){
        current->nextNode = &nodeList[i];
        nodeList[i].preNode = current;
        current = &nodeList[i];
        tmpNum--;
      }
      else
        continue;
    }
  }
  //go through all nodes and reverse them according to reverseNum


  current = head;
  int round = nodeNum / reverseNum;
  int tmpReverseNum = reverseNum;
  node *nextCurrent = current;

  for (int i = 0; i < round; i++) {
    for (int j = 0; j < reverseNum - 1; j++)
      current = current->nextNode;
    
    nextCurrent = current->nextNode;

    while (tmpReverseNum != 0){
      cout << current->preAddr << ' ' << current->value;
      current = current->preNode;
      if (tmpReverseNum == 1)
        cout << ' ' << nextCurrent->preAddr << endl;
      else
        cout << ' ' << current->preAddr << endl;
      tmpReverseNum--;
    }

    tmpReverseNum = reverseNum;
    current = nextCurrent;
  }
  while (current->nextAddr != "-1"){
    cout << current->preAddr << ' ' << current->value << ' ' << current->nextAddr << endl;
    current = current->nextNode;
    }
  cout << current->preAddr << ' ' << current->value << ' ' << current->nextAddr << endl;
}


//方法二
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
using namespace std;

struct node{
  int pre;
  int value;
  int next;
};

 int main(){

  int firstAddr,nodeNum, reverseNum, count = 0;
  cin >> firstAddr >> nodeNum >> reverseNum;

  vector<node> nodeList, rankedNodeList;
  int nodeAddr[100000];
  memset(nodeAddr, -1, sizeof(nodeAddr)); //数组初始化为-1,memset()函数在string.h中
  
  node tmp;
  for (int i = 0; i<nodeNum; i++){
    cin >> tmp.pre >> tmp.value >> tmp.next;
    nodeAddr[tmp.pre] = count++;  
    nodeList.push_back(tmp);
  }

  //rank the nodes in the vector with the array
  int tmpAddr = firstAddr;
  for (int i = 0; i<nodeNum; i++){
    tmp = nodeList[nodeAddr[tmpAddr]];
    rankedNodeList.push_back(tmp);
    tmpAddr = tmp.next;
    if (tmpAddr == -1)
      break;
  }

  //reverse the rankedNodeList
  int round = rankedNodeList.size() / reverseNum;
  for (int i = 0; i<round; i++)
    reverse(rankedNodeList.begin() + i*reverseNum, rankedNodeList.begin() + (i + 1)*reverseNum);

  //print the reversed node list
  int i;
  for (i = 0; i < ( rankedNodeList.size() - 1 ); i++)
    printf("%05d %d %05d\n", rankedNodeList[i].pre, rankedNodeList[i].value, rankedNodeList[i + 1].pre);
  printf("%05d %d -1\n", rankedNodeList[i].pre, rankedNodeList[i].value);
  return 0;

}
