<h2><a href="https://practice.geeksforgeeks.org/problems/next-greater-element-2/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=next-greater-element-2">Next Greater Element 2</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a circular interger array <strong>arr</strong> of size <strong>N</strong> (i.e ., the next element of <strong>arr [N-1] </strong>is <strong>arr</strong><strong>[0]</strong> ), return the <strong>next greater number</strong> for every element in <strong>arr</strong>.<br>
The <strong>next greater element</strong> of a number <strong>x</strong> is the <strong>first greater number</strong> to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return <strong>-1</strong> for this number.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 3<br>
arr[ ] = {1, 2, 1}<br>
<strong>Output:&nbsp;</strong>{2, -1, 2}<br>
<strong>Explanation:</strong>&nbsp;The first 1's next greater number is 2:<br>
The number 2 can't find next greater number.<br>
The second 1's next greater number needs to search circularly, which is also 2.</span></div>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 5<br>
arr[ ] = {5, 4, 3, 2, 1}<br>
<strong>Output:&nbsp;</strong>{-1, 5, 5, 5, 5}</span></div>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>nextGreaterElement()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong>arr </strong>and <strong>N&nbsp;</strong>as parameters and returns an array of integer which contains the next greater number for every element in arr.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>4</sup><br>
10<sup>-9&nbsp;</sup>≤ arr<sub>i&nbsp; </sub>≤ 10<sup>-9</sup></span></p>
</div>