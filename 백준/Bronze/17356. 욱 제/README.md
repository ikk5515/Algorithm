# [Bronze IV] 욱 제 - 17356 

[문제 링크](https://www.acmicpc.net/problem/17356) 

### 성능 요약

메모리: 2208 KB, 시간: 0 ms

### 분류

사칙연산, 수학

### 문제 설명

<p style="user-select: auto;">오늘은 운명의 라이벌 권욱과 권제가 숙명의 대결을 펼치는 날이다. 대결 종목은 바로 2019년 천하제일 코딩대회 본선 문제 중 하나인 "<a href="https://www.acmicpc.net/contest/problem/438/8" style="user-select: auto;">욱 제</a>"를 더 빨리 푸는 것이다.</p>

<p style="user-select: auto;">욱과 제는 "욱 제"를 빨리 푸는 능력, 일명 "욱제력"을 가지고 있다. 이 욱제력은 하나의 정수로 수치화할 수 있다. 욱의 욱제력이 A, 제의 욱제력이 B일 때, M을 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative; user-select: auto;"><mjx-math class="MJX-TEX" aria-hidden="true" style="user-select: auto;"><mjx-mfrac style="user-select: auto;"><mjx-frac style="user-select: auto;"><mjx-num style="user-select: auto;"><mjx-nstrut style="user-select: auto;"></mjx-nstrut><mjx-mrow size="s" style="user-select: auto;"><mjx-mi class="mjx-i" style="user-select: auto;"><mjx-c class="mjx-c1D435 TEX-I" style="user-select: auto;"></mjx-c></mjx-mi><mjx-mo class="mjx-n" style="user-select: auto;"><mjx-c class="mjx-c2212" style="user-select: auto;"></mjx-c></mjx-mo><mjx-mi class="mjx-i" style="user-select: auto;"><mjx-c class="mjx-c1D434 TEX-I" style="user-select: auto;"></mjx-c></mjx-mi></mjx-mrow></mjx-num><mjx-dbox style="user-select: auto;"><mjx-dtable style="user-select: auto;"><mjx-line style="user-select: auto;"></mjx-line><mjx-row style="user-select: auto;"><mjx-den style="user-select: auto;"><mjx-dstrut style="user-select: auto;"></mjx-dstrut><mjx-mn class="mjx-n" size="s" style="user-select: auto;"><mjx-c class="mjx-c34" style="user-select: auto;"></mjx-c><mjx-c class="mjx-c30" style="user-select: auto;"></mjx-c><mjx-c class="mjx-c30" style="user-select: auto;"></mjx-c></mjx-mn></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac></mjx-math><mjx-assistive-mml unselectable="on" display="inline" style="user-select: auto;"><math xmlns="http://www.w3.org/1998/Math/MathML" style="user-select: auto;"><mfrac style="user-select: auto;"><mrow style="user-select: auto;"><mi style="user-select: auto;">B</mi><mo style="user-select: auto;">−</mo><mi style="user-select: auto;">A</mi></mrow><mn style="user-select: auto;">400</mn></mfrac></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext" style="user-select: auto;">$\frac{B-A}{400}$</span></mjx-container>이라고 하자. 이때 욱이 제를 이길 확률은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative; user-select: auto;"><mjx-math class="MJX-TEX" aria-hidden="true" style="user-select: auto;"><mjx-mfrac style="user-select: auto;"><mjx-frac style="user-select: auto;"><mjx-num style="user-select: auto;"><mjx-nstrut style="user-select: auto;"></mjx-nstrut><mjx-mn class="mjx-n" size="s" style="user-select: auto;"><mjx-c class="mjx-c31" style="user-select: auto;"></mjx-c></mjx-mn></mjx-num><mjx-dbox style="user-select: auto;"><mjx-dtable style="user-select: auto;"><mjx-line style="user-select: auto;"></mjx-line><mjx-row style="user-select: auto;"><mjx-den style="user-select: auto;"><mjx-dstrut style="user-select: auto;"></mjx-dstrut><mjx-mrow size="s" style="user-select: auto;"><mjx-mn class="mjx-n" style="user-select: auto;"><mjx-c class="mjx-c31" style="user-select: auto;"></mjx-c></mjx-mn><mjx-mo class="mjx-n" style="user-select: auto;"><mjx-c class="mjx-c2B" style="user-select: auto;"></mjx-c></mjx-mo><mjx-msup style="user-select: auto;"><mjx-mn class="mjx-n" style="user-select: auto;"><mjx-c class="mjx-c31" style="user-select: auto;"></mjx-c><mjx-c class="mjx-c30" style="user-select: auto;"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em; user-select: auto;"><mjx-mi class="mjx-i" size="s" style="user-select: auto;"><mjx-c class="mjx-c1D440 TEX-I" style="user-select: auto;"></mjx-c></mjx-mi></mjx-script></mjx-msup></mjx-mrow></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac></mjx-math><mjx-assistive-mml unselectable="on" display="inline" style="user-select: auto;"><math xmlns="http://www.w3.org/1998/Math/MathML" style="user-select: auto;"><mfrac style="user-select: auto;"><mn style="user-select: auto;">1</mn><mrow style="user-select: auto;"><mn style="user-select: auto;">1</mn><mo style="user-select: auto;">+</mo><msup style="user-select: auto;"><mn style="user-select: auto;">10</mn><mi style="user-select: auto;">M</mi></msup></mrow></mfrac></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext" style="user-select: auto;">$\frac{1}{1+10^M}$</span></mjx-container>이다. 이 값은 얼마일까?</p>

### 입력 

 <p style="user-select: auto;">욱의 욱제력과 제의 욱제력이 한 줄에 주어진다. 욱제력은 0 이상 5,000 이하의 정수이다.</p>

### 출력 

 <p style="user-select: auto;">욱이 제를 이길 확률을 출력한다. 정답과의 절대오차 또는 상대오차가 10<sup style="user-select: auto;">-4</sup> 이하이면 정답으로 인정한다.</p>

