# MIPS notes
for interAptiv
## Registers
### CP0
- GCR base
  - default:
```
0xbfbf8000
```
  - from CP0:
```
mfc0 t0, 15, 3
```

### GCR
### GIC
- GIC base
  - GCR_Base + 0x80
- GIC timer
  - Lo: GIC_Base + 0x10
  - Hi: GIC_Base + 0x14
  
# Example
## Platform A
- uart_base 0xb8300000
- timer_base 0xb8310000
