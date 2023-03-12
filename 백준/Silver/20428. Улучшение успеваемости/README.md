# [Silver V] Улучшение успеваемости - 20428 

[문제 링크](https://www.acmicpc.net/problem/20428) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산(arithmetic), 구현(implementation), 수학(math)

### 문제 설명

<p style="user-select: auto;">В лицее на уроках информатики ответы учеников оцениваются целым числом баллов от 2 до 5. Итоговая оценка по информатике выставляется как среднее арифметическое оценок на всех уроках, округленное до ближайшего целого числа. Если среднее значение находится ровно посередине между двумя целыми числами, то оценка округляется вверх.</p>

<p style="user-select: auto;">Примеры округления оценок приведены в таблице.</p>

<table class="table table-bordered td-center th-center" style="width: 100%; user-select: auto;">
	<thead style="user-select: auto;">
		<tr style="user-select: auto;">
			<th style="user-select: auto;">Оценки на уроках</th>
			<th style="user-select: auto;">Среднее арифметическое</th>
			<th style="user-select: auto;">Итоговая оценка</th>
		</tr>
	</thead>
	<tbody style="user-select: auto;">
		<tr style="user-select: auto;">
			<td style="user-select: auto;">2, 3, 5</td>
			<td style="user-select: auto;">(2 + 3 + 5)/3 = 3 + 1/3</td>
			<td style="user-select: auto;">3</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">3, 3, 4, 4</td>
			<td style="user-select: auto;">(3 + 3 + 4 + 4)/4 = 3 + 1/2</td>
			<td style="user-select: auto;">4</td>
		</tr>
		<tr style="user-select: auto;">
			<td style="user-select: auto;">5, 5, 5, 3, 5</td>
			<td style="user-select: auto;">(5 +5 + 5 + 3 + 5)/5 = 4 + 3/5</td>
			<td style="user-select: auto;">5</td>
		</tr>
	</tbody>
</table>

<p style="user-select: auto;">Все ученики лицея стремятся получить итоговую оценку по информатике не ниже 4 баллов. К сожалению, один из учеников получил на уроках a двоек, b троек и c четверок. Теперь он планирует получить несколько пятерок, причем хочет, чтобы итоговая оценка была не меньше 4 баллов. Ему надо понять, какое минимальное количество пятерок ему необходимо получить, чтобы добиться своей цели.</p>

<p style="user-select: auto;">Требуется написать программу, которая по заданным целым неотрицательные числам a, b и c определяет минимальное количество пятерок, которое необходимо получить ученику, чтобы его итоговая оценка по информатике была не меньше 4 баллов.</p>

### 입력 

 <p style="user-select: auto;">Входные данные содержат три строки. Первая строка содержит целое неотрицательное число a, вторая строка содержит целое неотрицательное число b, третья строка содержит целое неотрицательное число c (0 ≤ a, b, c ≤ 10<sup style="user-select: auto;">15</sup>, a + b + c ≥ 1).</p>

### 출력 

 <p style="user-select: auto;">Выходные данные должны содержать одно число: минимальное число пятерок, которое необходимо получить ученику, чтобы итоговая оценка была не меньше 4 баллов.</p>

