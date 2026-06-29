```mermaid
flowchart TD
Start([Start]) --> Input[/รับคะแนน score/]
Input --> D1{score >= 80?}
D1 -->|Yes| A[เกรด = A]
D1 -->|No| D2{score >= 70?}
D2 -->|Yes| B[เกรด = B]
D2 -->|No| D3{score >= 60?}
D3 -->|Yes| C[เกรด = C]
D3 -->|No| D4{score >= 50?}
D4 -->|Yes| D[เกรด = D]
D4 -->|No| F[เกรด = F]
A & B & C & D & F --> Output[/แสดงเกรด/]
Output --> End([End])
```

```mermaid
flowchart TD
start([Start]) --> Input[/รับ a และ b/]
Input --> D1{a > b?}
D1 -->|Yes| a[/แสดง a/]
D1 -->|No| b[/แสดง b/]
a & b --> End([End])
```

```mermaid
flowchart TD
start([Start]) --> Input[/รับ N/]
Input --> process[i = 1]
process --> D1{i <= N?}
D1 -->|Yes| i[/พิมพ์ i/]
D1 -->|No| End([End])
i --> o[i = i + 1]
o --> D1
```
