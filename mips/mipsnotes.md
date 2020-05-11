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
- cpc base 0xbbde0000
- stack size 0x20000(64kb)
```
WDT_BASE                 0xB8700000
SYSCTL_BASE              0xB9E00000
DDR_CTL_BASE             0xB9F00000
DDR_PHY_BASE             0xB9F80000
```
