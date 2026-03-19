# 💻 2026 1학기 코딩소모임

매주 핵심 자료구조와 알고리즘을 학습합니다. 
단순한 문제 풀이를 넘어, 실제 실무 환경과 동일한 **GitHub PR(Pull Request) 기반의 릴레이 코드 리뷰**를 통해 코드의 품질을 높이고 논리적으로 설명하는 역량을 기릅니다.

## 📁 레포지토리 구조

소스 코드는 각자의 **GitHub 닉네임**으로 생성된 최상위 디렉터리 하위에 주차별로 폴더를 나누어 관리합니다.

```text
📂 HSHwan
 ┣ 📂 week01
 ┃ ┣ 📜 BOJ_10828_스택.cpp
 ┃ ┗ 📜 PRO_43165_타겟넘버.cpp
 ┣ 📂 week02
 ┃ ┗ 📜 BOJ_10845_큐.cpp
📂 mentee_github_id
 ┣ 📂 week01
 ┃ ┗ 📜 BOJ_10828_스택.cpp
```

- **파일 경로 예시:** `HSHwan/week01/BOJ_10828_스택.cpp`
- **파일 명명 규칙:** `플랫폼_문제번호_문제명.확장자` (예: `BOJ_10828_스택.cpp`, `PRO_43165_타겟넘버.cpp`)
  - `BOJ`: 백준
  - `PRO`: 프로그래머스
  - `SWEA`: SW Expert Academy

## 🌿 깃허브 협업 및 PR 규칙

`main` 브랜치로의 직접 Push를 제한하며, 반드시 **Pull Request**를 통한 리뷰 후 병합(Merge)합니다.

### 작업 흐름 (Workflow)
0. 레포지토리를 로컬에 `Clone` 합니다. (최초 1회만 실행)
```bash
git clone https://github.com/HSHwan/2026-Coding-Club.git
cd 2026-Coding-Club
```

1. 매주 최신 `main` 브랜치를 받아온 후, 본인의 브랜치를 생성하여 작업합니다. (예: `feature/suhwan-week01`)
```bash
git checkout main                # 기준이 되는 main 브랜치로 이동
git pull origin main             # 원격 저장소의 최신 상태를 로컬에 반영
git checkout -b feature/[본인아이디]-[주차]  # 새 브랜치 생성 및 이동
```
*(참고: 최신 Git 버전에서는 `checkout` 대신 `switch` 와 `switch -c` 를 사용하셔도 됩니다.)*

2. 코드를 작성하고 커밋 규칙에 맞춰 원격 저장소에 `Push` 합니다.
```bash
git add .                        # 변경된 전체 파일 스테이징 (또는 git add [파일명])
git commit -m "feat: BOJ_10828_스택"   # 커밋 메시지 작성
git push origin feature/[본인아이디]-[주차]  # 생성한 본인 브랜치로 원격 저장소에 Push
```

3. 깃허브 웹사이트로 이동하여 `main` 브랜치로 **Pull Request**를 생성하고 템플릿에 맞춰 내용을 작성합니다.
*(`Push` 후 깃허브 레포지토리에 접속하면 나타나는 'Compare & pull request' 초록색 버튼을 클릭합니다.)*

4. 오프라인 모임에서 코드 리뷰를 받고 승인을 얻은 뒤 `Merge` 합니다.

### 커밋 메시지 컨벤션
> **태그: 플랫폼_문제번호_문제명**

- `feat` : 새로운 문제 풀이 코드 추가
- `fix` : 오답 수정 또는 버그 해결
- `refactor` : 정답은 맞았으나 코드를 개선한 경우 (시간/공간 복잡도, 가독성 등)
- `docs` : 주석, README 등 문서 수정
- `chore` : 디렉토리 생성, 패키지 설정 등 기타 작업

*(예시: `feat: BOJ_10828_스택`, `refactor: PRO_43165_타겟넘버 시간복잡도 개선`)*

### PR (Pull Request) 제목 규칙
> **[주차] 플랫폼_문제번호_문제명 - 본인이름**

*(예시: `[Week01] BOJ_10828_스택 - 황수환`)*