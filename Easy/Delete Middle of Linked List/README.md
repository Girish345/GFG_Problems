<h2><a href="https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-middle-of-linked-list">Delete Middle of Linked List</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a singly linked list, delete <strong>middle&nbsp;</strong>of the linked list. For example, if given linked list is 1-&gt;2-&gt;<strong>3</strong>-&gt;4-&gt;5 then linked list should be modified to 1-&gt;2-&gt;4-&gt;5.<br>
If there are <strong>even</strong> nodes, then there would be <strong>two middle </strong>nodes, we need to delete the second middle element. For example, if given linked list is 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6 then it should be modified to 1-&gt;2-&gt;3-&gt;5-&gt;6.</span><br>
<span style="font-size:18px">If the input linked list is NULL or has 1 node, then it should return NULL</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
<strong>Output: </strong>1 2 4 5</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1
<strong>Output: </strong>2 4 6 5 1</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>deleteMid</strong>() which should delete the middle element from the linked list and&nbsp;return the head&nbsp;of the modified linked list.&nbsp;If the linked list is empty then it should return NULL.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000<br>
1 &lt;= value &lt;= 1000</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;