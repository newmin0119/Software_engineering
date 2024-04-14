# Software_engineering
+ 소프트웨어 공헉 - UML 모델링 실습 / 과제
+ 추가 보완 및 구체화

### Requirements
Subject: 모바일 기반 지하철 출입 및 결제 시스템
#### 1. MobileApp 클래스가 TicketGate 클래스에 사용자의 ID를 전달
#### 2. TicketGate 클래스가 SeoulMetro에 다음의 정보를 전달
    - 사용자 ID
    - 태그 시각
    - 역 이름
    - 들어가는 경우  위의 3가지 정보만 전달
    - 나가는 경우 사용자 ID, 태그 시각, 역 이름 전달하고, 요금 계산 요청
#### 3. SeoulMetro 클래스는 CardPayment 클래스에 정산 요청
    - SeoulMetro는 사용자 ID, 요금 및 요청 시각을 보낸다
    - ardPayment는  정산 완료 후 사용자 ID, 요금 및 처리 시각을 DB에 저장한다.
