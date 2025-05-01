#include <stdio.h>
#define MAX_LEN 4
int main() {
	//배열 요소 저장 및 삭제
	int scores[MAX_LEN];  //배열의 크기는 상수만 사용
	int idxOfScores = 0;  //배열의 인덱스를 저장할 변수
	
	//요소 추가
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 80;  //scores[0]
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 70;  //scores[1]
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 95;  //scores[2]
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 80;  //scores[3]
	if (idxOfScores < MAX_LEN)		//if 문으로 오류 처리
		scores[idxOfScores++] = 100;  //scores[4]  범위 초가로 오류
	
	//요소 삭제
	if (idxOfScores > 0)idxOfScores--;
	if (idxOfScores > 0)idxOfScores--;
	if (idxOfScores > 0)idxOfScores--;
	if (idxOfScores > 0)idxOfScores--;
	if (idxOfScores > 0)idxOfScores--;

	
	//전체 출력
	//삭제 시 오류 처리
	printf("현재 배열 상태\n");
	if (idxOfScores == 0) {
		printf("(비어있음)");
	}
	else {
		printf("남은 요소 수: %d\n", idxOfScores);
		for (int i = 0; i < idxOfScores; i++) {
			printf("%d\n", scores[i]);
		}

	}
	return 0;
}