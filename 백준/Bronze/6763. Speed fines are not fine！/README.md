# [Bronze IV] Speed fines are not fine! - 6763 

[문제 링크](https://www.acmicpc.net/problem/6763) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 문제 설명

<p style="user-select: auto;">Many communities now have “radar” signs that tell drivers what their speed is, in the hope that they will slow down.</p>

<p style="user-select: auto;">You will output a message for a “radar” sign. The message will display information to a driver based on his/her speed according to the following table:</p>

<table class="table table-bordered" style="width: 30%; user-select: auto;">
	<tbody style="user-select: auto;">
		<tr style="user-select: auto;">
			<td style="text-align: center; user-select: auto;">km/h over the limit</td>
			<td style="text-align: center; user-select: auto;">Fine</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="text-align: center; user-select: auto;">1 to 20</td>
			<td style="text-align: center; user-select: auto;">$100</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="text-align: center; user-select: auto;">21 to 30</td>
			<td style="text-align: center; user-select: auto;">$270</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="text-align: center; user-select: auto;">31 or above</td>
			<td style="text-align: center; user-select: auto;">$500</td>
		</tr>
	</tbody>
</table>

### 입력 

 <p style="user-select: auto;">The input will be two integers. The first line of input will be speed limit. The second line of input will be the recorded speed of the car.</p>

### 출력 

 <p style="user-select: auto;">If the driver is not speeding, the output should be:</p>

<p style="user-select: auto;"><code style="user-select: auto;">Congratulations, you are within the speed limit! </code></p>

<p style="user-select: auto;">If the driver is speeding, the output should be:</p>

<p style="user-select: auto;"><code style="user-select: auto;">You are speeding and your fine is $F. </code></p>

<p style="user-select: auto;">where F is the amount of the fine as described in the table above.</p>

