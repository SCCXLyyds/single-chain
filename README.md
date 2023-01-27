# single-chain
Data structure and algorithm

为什么不用课本上学的结构体来构造链表？？
学过数据结构课的人，对链表的第一反应就是：

链表由节点构成，每个节点保存了 值 和 下一个元素的位置 这两个信息。节点的表示形式如下：

class Node{
public:
    int val;
    Node* next;
};
这样构造出链表节点的是一个好方法，也是许多人一开始就学到的。

使用这种方法，在创建一个值为 x 新节点的时候，语法是：

Node* node = new Node();
node->val = x
看一下创建新节点的代码的第一行：

Node* node = new Node();，中间有一个 new 关键字来为新对象分配空间。

new的底层涉及内存分配，调用构造函数，指针转换等多种复杂且费时的操作。一秒大概能new1w次左右。

在平时的工程代码中，不会涉及上万次的new操作，所以这种结构是一种 见代码知意 的好结构。

但是在算法比赛中，经常碰到操作在10w级别的链表操作，如果使用结构体这种操作，是无法在算法规定时间完成的。

所以，在算法比赛这种有严格的时间要求的环境中，不能频繁使用new操作。也就不能使用结构体来实现数组

上述解释出自Hasity：https://www.acwing.com/user/myspace/index/55289/

本题的相关问题可参考我总结的：https://mp.csdn.net/mp_blog/creation/editor/new/128770930

（转载）需要详细题解，点击这： 大海呀大海-https://www.acwing.com/file_system/file/content/whole/index/content/1088923/

wuog :
https://www.acwing.com/file_system/file/content/whole/index/content/2572/

 题目（用数组实现单链表）：
    
  ![image](https://user-images.githubusercontent.com/121226086/214876237-2cbd752d-2c45-4726-833c-79d327762488.png)
