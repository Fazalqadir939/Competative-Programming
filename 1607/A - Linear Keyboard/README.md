<h2><a href="https://codeforces.com/contest/1607/problem/A" target="_blank" rel="noopener noreferrer">1607A — Linear Keyboard</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1607A](https://codeforces.com/contest/1607/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Linear Keyboard</div><div id="cf-note-wrapper" style="display: flex; align-items: center; justify-content: center; margin-top: 10px; width: 100%;"><button class="cf-ext-note-btn" style="border: 1px solid rgba(120, 120, 120, 0.25); background: rgba(255, 255, 255, 0.7); backdrop-filter: blur(8px); border-radius: 999px; padding: 7px 15px; font-size: 13px; cursor: pointer; color: rgb(51, 51, 51); box-shadow: rgba(0, 0, 0, 0.05) 0px 2px 10px;">📝 Add Note</button></div><div class="cf-ext-note-box" style="display: none; width: min(560px, 92%); margin: 14px auto 0px; padding: 14px; border-radius: 18px; border: 1px solid rgba(120, 120, 120, 0.18); background: rgba(255, 255, 255, 0.63); backdrop-filter: blur(10px); box-shadow: rgba(0, 0, 0, 0.05) 0px 8px 24px;"><textarea placeholder="Write your note..." class="cf-ext-note-textarea" style="width: 100%; min-height: 150px; resize: vertical; padding: 12px; box-sizing: border-box; border-radius: 14px; border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.75); font-size: 14px; outline: none;"></textarea><div style="display: flex; justify-content: flex-end; gap: 8px; margin-top: 10px;"><button class="cf-ext-note-btn cf-ext-note-btn-action" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.72); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(34, 34, 34); backdrop-filter: blur(8px);">Save</button><button class="cf-ext-note-btn cf-ext-note-btn-danger" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 240, 240, 0.75); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(176, 0, 32); backdrop-filter: blur(8px);">Delete</button></div></div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a keyboard that consists of $$$26$$$ keys. The keys are arranged sequentially in one row in a certain order. Each key corresponds to a unique lowercase Latin letter.</p><p>You have to type the word $$$s$$$ on this keyboard. It also consists only of lowercase Latin letters.</p><p>To type a word, you need to type all its letters consecutively one by one. To type each letter you must position your hand exactly over the corresponding key and press it.</p><p>Moving the hand between the keys takes time which is equal to the absolute value of the difference between positions of these keys (the keys are numbered from left to right). No time is spent on pressing the keys and on placing your hand over the first letter of the word.</p><p>For example, consider a keyboard where the letters from '<span class="tex-font-style-tt">a</span>' to '<span class="tex-font-style-tt">z</span>' are arranged in consecutive alphabetical order. The letters '<span class="tex-font-style-tt">h</span>', '<span class="tex-font-style-tt">e</span>', '<span class="tex-font-style-tt">l</span>' and '<span class="tex-font-style-tt">o</span>' then are on the positions $$$8$$$, $$$5$$$, $$$12$$$ and $$$15$$$, respectively. Therefore, it will take $$$|5 - 8| + |12 - 5| + |12 - 12| + |15 - 12| = 13$$$ units of time to type the word "<span class="tex-font-style-tt">hello</span>". </p><p>Determine how long it will take to print the word $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The next $$$2t$$$ lines contain descriptions of the test cases.</p><p>The first line of a description contains a keyboard — a string of length $$$26$$$, which consists only of lowercase Latin letters. Each of the letters from '<span class="tex-font-style-tt">a</span>' to '<span class="tex-font-style-tt">z</span>' appears exactly once on the keyboard.</p><p>The second line of the description contains the word $$$s$$$. The word has a length from $$$1$$$ to $$$50$$$ letters inclusive and consists of lowercase Latin letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines, each line containing the answer to the corresponding test case. The answer to the test case is the minimal time it takes to type the word $$$s$$$ on the given keyboard.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00800715730087755" id="id009366494582723576" class="input-output-copier">Copy</div></div><pre id="id00800715730087755">5
abcdefghijklmnopqrstuvwxyz
hello
abcdefghijklmnopqrstuvwxyz
i
abcdefghijklmnopqrstuvwxyz
codeforces
qwertyuiopasdfghjklzxcvbnm
qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
qwertyuiopasdfghjklzxcvbnm
abacaba
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008822568184269164" id="id00056627431119779637" class="input-output-copier">Copy</div></div><pre id="id008822568184269164">13
0
68
0
74
</pre></div></div></div>