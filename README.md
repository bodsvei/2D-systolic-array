# 2D Systolic array accelerator
- An attempt to make 2D systolic array accelerator.
- Matrix Multiplication Units (MMUs)
- Systolic Arrays for VLSI ~ Kung & Leiserson 1978

## Architecture
- An array of $N \times N$ Processing Elements ($PE$)
- Each $PE$ performs Multiply-Accumulate (MAC) operation
- $P_{\text{sum}} = P_{\text{sum}} + A_n \times B_n$
```
      B0   B1   B2
       ↓    ↓    ↓
A0 → [PE]→[PE]→[PE]
       ↓    ↓    ↓
A1 → [PE]→[PE]→[PE]
       ↓    ↓    ↓
A2 → [PE]→[PE]→[PE]
```

```zsh
mkdir build
cd build
cmake -GNinja ..
ninja
./VBuffer_tb
```
