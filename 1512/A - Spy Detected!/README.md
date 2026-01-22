<h3><a href="https://codeforces.com/contest/1512/problem/A" target="_blank" rel="noopener noreferrer">Spy Detected!</a></h3>

<div class="header"><div class="title">A. Spy Detected!</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ ($$$n \ge 3$$$) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array $$$[4, 11, 4, 4]$$$ all numbers except one are equal to $$$4$$$).</p><p>Print the index of the element that does not equal others. The numbers in the array are numbered from one.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$). Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$3 \le n \le 100$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 100$$$).</p><p>It is guaranteed that all the numbers except one in the $$$a$$$ array are the same.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the index of the element that is not equal to others.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006770534399677113" id="id006656989793886647" class="input-output-copier">Copy</div></div><pre id="id006770534399677113">4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003892999324283025" id="id006216811955991979" class="input-output-copier">Copy</div></div><pre id="id003892999324283025">2
1
5
3
</pre></div></div></div>