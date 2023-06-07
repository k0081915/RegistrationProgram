# RegistrationProgram

### 회원 등록 프로그램

회원의 이름, 전화번호, 생년월일, 등급을 입력받아 파일에 저장한다.

저장된 회원 정보에 대해 다음을 지원한다.

1. 회원 정보 등록
2. 회원 정보 삭제
3. 회원 정보 검색
4. 회원 정보 정렬
5. 회원 정보 수정

### 사용법

Visual Studio에 main.c를 포함한 모든 .c 파일을 소스파일에 넣어주고

my_define.h를 포함한 모든 .h 파일을 헤더파일에 넣어준다.

main.c를 실행하면 프로그램이 실행된다.

주의사항

1. 전화번호는 010XXXXXXXX 의 형태로 입력되어야 한다.
2. 생년월일은 YYYYMMDD 의 형태로 입력되어야 한다.
3. 등급은 BRONZE, SILVER, GOLD 중 하나여야 한다.
4. 잘못된 입력은 없다고 가정

#### 회원 정보 등록

우선 최대로 등록할 수 있는 회원 수를 입력한다.

등록 메뉴를 선택하고 이름, 전화번호, 생년월일, 등급을 입력한다.

#### 회원 정보 삭제

삭제 메뉴를 선택하고 삭제할 회원의 이름을 입력한다.

회원이 존재한다면 삭제가 수행된다.

#### 회원 정보 검색

검색 메뉴를 선택하고 생년월일로 검색할 지, 등급으로 검색할 지 선택한다.

생년월일로 검색한다면 입력한 생년월일에 해당하는 회원을 모두 출력한다.

등급으로 검색한다면 입력한 등급에 해당하는 회원을 모두 출력한다.

#### 회원 정보 정렬

정렬 메뉴를 선택하고 이름 순으로 정렬할 지, 생년월일 순으로 정렬할 지 선택한다.

선택한 기준으로 회원 정보가 오름차순으로 정렬되어 모두 출력된다.

#### 회원 정보 수정

정보 수정 메뉴를 선택하고 이름을 입력한다.

회원이 존재하면 변경할 전화번호, 생년월일, 등급을 입력한다. 

변경사항이 없는 정보는 이전 정보 그대로 입력한다.

입력이 완료되었으면 변경 전과 변경 후의 정보를 출력한다.

#### 종료

종료 메뉴를 선택하면 INFORMATION.txt에 현재까지 리스트에 저장되어있는 회원 정보가 등록된다.
