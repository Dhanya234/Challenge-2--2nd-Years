# Challenge 2 Solutions - Dhanya234

## Problem Analysis and Solutions

### Problem 1 - Grid Transform
**Input**: 5x5 grid with directions "R L R L R"
**Process**:
- Row 0: Rotate right → EABCD
- Row 1: Rotate left → GHIJF  
- Row 2: Rotate right → OKLMN
- Row 3: Rotate left → QRSTP
- Row 4: Rotate right → YUVWX

**Central row** (index 2): OKLMN
**ASCII sum**: O(79) + K(75) + L(76) + M(77) + N(78) = 385
**Clue 1**: 385

### Problem 2 - String Processing
**Input**: "soscchallenge"
**Steps**:
1. Reverse: "egnellahcsos"
2. Remove every 3rd: "egellahcss"
3. Shift ASCII +2: "igonndjeuuu"
4. Count vowels: i, o, e, u, u, u = 4

**Clue 2**: 4

### Problem 3 - State Machine
**Input numbers**: 2, 7, 10, 11, 13, 4, 5
**State transitions** (0→1→2→3):
- 2 (even): 0→1→2→3 ✓
- 7 (prime): 0→3 ✓  
- 10 (even): 0→1→2→3 ✓
- 11 (prime): 0→3 ✓
- 13 (prime): 0→3 ✓
- 4 (even): 0→1→2→3 ✓
- 5 (prime): 0→3 ✓

**Terminal count**: 7
**Clue 3**: 7

### Final Key Generation
- Clue 1 in hex: 385 → 181
- Clue 2 repeated Clue 3 times: 4 repeated 7 times = "4444444"
- Final key: "181-4444444"

## Files
- `problem1.cpp` - Grid rotation and ASCII sum
- `problem2.cpp` - String processing pipeline  
- `problem3.cpp` - State machine simulation
- `final_key_generator.cpp` - Combines clues into final key
- `final_key.txt` - Contains: **181-4444444**