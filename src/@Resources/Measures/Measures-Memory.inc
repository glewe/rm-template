;==================================================================================================
; Measure-Memory.inc
;
; This file defines measures for memory values. They are iuncluded in Rainmeter.
; https://docs.rainmeter.net/manual/measures/memory/
;
; - Measure=PhysicalMemory => measures Physical Memory (equal to RAM).
; - Measure=SwapMemory => measures Swap Memory (equal to RAM + Pagefile.sys).
; - Measure=Memory => measures Virtual Memory (equal to RAM + RAM + Pagefile.sys).
;

;------------------------------------------------------------------------------
;
; Physical Memory
;
[MeasureRamTotal]
Measure=PhysicalMemory
UpdateDivider=3600
Total=1

[MeasureRamUsed]
Measure=PhysicalMemory
UpdateDivider=2

[MeasureRamFree]
Measure=PhysicalMemory
UpdateDivider=2
InvertMeasure=1

;------------------------------------------------------------------------------
;
; Swap Memory
;
[MeasureSwapTotal]
Measure=SwapMemory
UpdateDivider=3600
Total=1

[MeasureSwapUsed]
Measure=SwapMemory
UpdateDivider=2

[MeasureSwapFree]
Measure=SwapMemory
UpdateDivider=2
InvertMeasure=1

;------------------------------------------------------------------------------
;
; Virtual Memory
;
[MeasureVirtualTotal]
Measure=Memory
UpdateDivider=3600
Total=1

[MeasureVirtualUsed]
Measure=Memory
UpdateDivider=2

[MeasureVirtualFree]
Measure=Memory
UpdateDivider=2
InvertMeasure=1
