/*
Q4. 스택 계산기 만들기
	[후위 표기식 만드는 과정]
		1. 우선 순위 지정
			 ( ) < + = < x /
		2. 중위 표기법에서 한글자씩 읽어들인다.
		3. 읽어들인 글자가 피연산자이면 큐에 넣는다. ( postFix Queue )
		4. 읽어들인 글자가 연산자이면
			4.1 왼쪽 괄호이면 그냥 스택에 추가 ( Operator Stack )
			4.2 오른쪽 괄호이면 스택에서 왼쪽괄호를
				만날 때까지 하나씩 꺼내 큐로 옮겨준다.
				왼쪽 괄호를 만나면 둘다 버린다.
			4.3 나머지 사칙 연산은 그 연산자가 스택에서
				꺼낸 연산자 보다 우선순위가 높은 동안에는
				계속 큐로 옮겨 준다.
				그리고 자신을 스택에 추가한다.
		1~4의 과정을 반복해 후위 표기식을 완성한다. ( PostFix Queue )
	[계산 과정]
		5. 큐에서 데이터를 읽어 스택으로 옮긴다. ( Operand Stack )
			5.1 큐에서 값을 하나씩 읽는다.
			5.2 피연산자이면 스택에 저장
			5.3 연산자이면 스택에서 값 두개를 꺼내서
				연산자에 대한 연산을 하고 그 결과를 다시 스택에 저장
		5.1 ~ 5.3의 과정을 반복해서 최종 계산값을 구한다.
*/