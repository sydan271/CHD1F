# Gạt Gạt Speed Calculation

**"What matters is not the trembling of your body when you're thrilled, but the thrill that lights up your life."**  
*A quote reflecting the joy of the "gạt gạt" rhythm in life and gaming.*

## Problem Description

A crucial part of Thanh's MNF gaming experience is the **"gạt gạt"** rhythm. The gạt gạt motion — shaking, swinging, twitching — increases with the wild beat of the background music and the chaos of the game. Without rhythm, Thanh just can't play!

Let the initial gạt gạt speed be 1. Each time Thanh "gạt"s, the speed increases by a fraction:  
`1 / (1 + 2 + 3 + ... + i)` where `i` is the number of the gạt action (starting from 1).

Your task is to determine Thanh's gạt speed after `n` gạt actions, expressed as a **reduced fraction** relative to the initial speed.

## Input

- The first line contains the integer `T` — the number of test cases.  
  (`1 ≤ T ≤ 39`)

- Each of the following `T` lines contains one integer `n` — the number of gạt actions.  
  (`0 < n ≤ 2*10^6`)

## Output

For each test case, output the gạt speed after `n` gạt actions as a reduced fraction of the initial speed.  
Print each result on one line as two integers: numerator and denominator.

## Sample

### Input
```
2
1
3
```

### Output
```
1 1
3 2
```

## Explanation

- After 1 gạt: speed = 1 + 1/1 = 2 → 2 / 1 = **2 times** the base speed → Simplified: **1/1**
- After 3 gạt:
  - Speed increases by 1/1, 1/3, 1/6
  - Final speed = 1 + 1/1 + 1/3 + 1/6 = 2.5 → 5/2 → Relative to base speed = **5/2**, subtract 1 = 3/2

Answer: **3 2**
