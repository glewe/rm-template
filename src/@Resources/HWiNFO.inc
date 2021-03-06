;==================================================================================================
; HWiNFO.inc
;
; This file defines sensors, instances and entry IDs of HWiNFO.
; These values will mot probably be different in your system. You have to adjuste them accordingly.
; Please check the HWiNFO.txt file for details about how to use and configure HWiNFO.
;
; This file needs to be included in skins that use these values.
;

[Variables]

;------------------------------------------------------------------------------
; CPU #0
;

;
; Sensor ID and Instance
;
HWiNFO-CPU0-SensorId=0xf0000300
HWiNFO-CPU0-SensorInstance=0x0

;
; Entry IDs
;
HWiNFO-CPU0-Usage=0x7000019
HWiNFO-CPU0-Core0Thread0Usage=0x7000000
HWiNFO-CPU0-Core0Thread1Usage=0x7000001
HWiNFO-CPU1-Core0Thread0Usage=0x7000002
HWiNFO-CPU1-Core0Thread1Usage=0x7000003
HWiNFO-CPU2-Core0Thread0Usage=0x7000004
HWiNFO-CPU3-Core0Thread1Usage=0x7000005
HWiNFO-CPU3-Core0Thread0Usage=0x7000006
HWiNFO-CPU4-Core0Thread1Usage=0x7000007
HWiNFO-CPU4-Core0Thread0Usage=0x7000008
HWiNFO-CPU5-Core0Thread1Usage=0x7000009
HWiNFO-CPU5-Core0Thread0Usage=0x700000a
HWiNFO-CPU6-Core0Thread1Usage=0x700000b
HWiNFO-CPU6-Core0Thread0Usage=0x700000c
HWiNFO-CPU7-Core0Thread1Usage=0x700000d
HWiNFO-CPU7-Core0Thread0Usage=0x700000e
HWiNFO-CPU8-Core0Thread1Usage=0x700000f
HWiNFO-CPU8-Core0Thread0Usage=0x7000010
HWiNFO-CPU8-Core0Thread1Usage=0x7000011
HWiNFO-CPU9-Core0Thread0Usage=0x7000012
HWiNFO-CPU9-Core0Thread1Usage=0x7000013
HWiNFO-CPU10-Core0Thread0Usage=0x7000014
HWiNFO-CPU10-Core0Thread1Usage=0x7000015
HWiNFO-CPU11-Core0Thread0Usage=0x7000016
HWiNFO-CPU11-Core0Thread1Usage=0x7000017

HWiNFO-CPU0-Core0Clock=0x6000000
HWiNFO-CPU0-Core1Clock=0x6000001
HWiNFO-CPU0-Core2Clock=0x6000002
HWiNFO-CPU0-Core3Clock=0x6000003
HWiNFO-CPU0-Core4Clock=0x6000004
HWiNFO-CPU0-Core5Clock=0x6000005
HWiNFO-CPU0-Core6Clock=0x6000006
HWiNFO-CPU0-Core7Clock=0x6000007
HWiNFO-CPU0-Core8Clock=0x0
HWiNFO-CPU0-Core9Clock=0x0
HWiNFO-CPU0-Core10Clock=0x0
HWiNFO-CPU0-Core11Clock=0x0
HWiNFO-CPU0-Core12Clock=0x0
HWiNFO-CPU0-Core13Clock=0x0
HWiNFO-CPU0-Core14Clock=0x0
HWiNFO-CPU0-Core15Clock=0x0
HWiNFO-CPU0-Core16Clock=0x0
HWiNFO-CPU0-Core17Clock=0x0
HWiNFO-CPU0-Core18Clock=0x0
HWiNFO-CPU0-Core19Clock=0x0
HWiNFO-CPU0-Core20Clock=0x0
HWiNFO-CPU0-Core21Clock=0x0
HWiNFO-CPU0-Core22Clock=0x0
HWiNFO-CPU0-Core23Clock=0x0
HWiNFO-CPU0-Core24Clock=0x0
HWiNFO-CPU0-Core25Clock=0x0
HWiNFO-CPU0-Core26Clock=0x0
HWiNFO-CPU0-Core27Clock=0x0
HWiNFO-CPU0-Core28Clock=0x0
HWiNFO-CPU0-Core29Clock=0x0
HWiNFO-CPU0-Core30Clock=0x0
HWiNFO-CPU0-Core31Clock=0x0

;------------------------------------------------------------------------------
; CPU #0 DTS
; Some systems provide a separate sensor for addl. info, e.g. temperature
;

;
; Sensor ID and Instance
;
HWiNFO-CPU0-DTS-SensorId=0xf0000501
HWiNFO-CPU0-DTS-SensorInstance=0x0

;
; Entry IDs
;
HWiNFO-CPU0-DTS-CPUTemp=0x1000000
HWiNFO-CPU0-DTS-Core0Temp=0x1000000
HWiNFO-CPU0-DTS-Core1Temp=0x1000001
HWiNFO-CPU0-DTS-Core2Temp=0x1000002
HWiNFO-CPU0-DTS-Core3Temp=0x1000003
HWiNFO-CPU0-DTS-Core4Temp=0x1000004
HWiNFO-CPU0-DTS-Core5Temp=0x1000005
HWiNFO-CPU0-DTS-Core6Temp=0x1000006
HWiNFO-CPU0-DTS-Core7Temp=0x1000007
HWiNFO-CPU0-DTS-Core8Temp=0x0
HWiNFO-CPU0-DTS-Core9Temp=0x0
HWiNFO-CPU0-DTS-Core10Temp=0x0
HWiNFO-CPU0-DTS-Core11Temp=0x0
HWiNFO-CPU0-DTS-Core12Temp=0x0
HWiNFO-CPU0-DTS-Core13Temp=0x0
HWiNFO-CPU0-DTS-Core14Temp=0x0
HWiNFO-CPU0-DTS-Core15Temp=0x0
HWiNFO-CPU0-DTS-Core16Temp=0x0
HWiNFO-CPU0-DTS-Core17Temp=0x0
HWiNFO-CPU0-DTS-Core18Temp=0x0
HWiNFO-CPU0-DTS-Core19Temp=0x0
HWiNFO-CPU0-DTS-Core20Temp=0x0
HWiNFO-CPU0-DTS-Core21Temp=0x0
HWiNFO-CPU0-DTS-Core22Temp=0x0
HWiNFO-CPU0-DTS-Core23Temp=0x0
HWiNFO-CPU0-DTS-Core24Temp=0x0
HWiNFO-CPU0-DTS-Core25Temp=0x0
HWiNFO-CPU0-DTS-Core26Temp=0x0
HWiNFO-CPU0-DTS-Core27Temp=0x0
HWiNFO-CPU0-DTS-Core28Temp=0x0
HWiNFO-CPU0-DTS-Core29Temp=0x0
HWiNFO-CPU0-DTS-Core30Temp=0x0
HWiNFO-CPU0-DTS-Core31Temp=0x0


;------------------------------------------------------------------------------
; DIMM Temperature
;

;
; Sensor ID and Instance
;
HWiNFO-DIMM-SensorId=0xf3000002
HWiNFO-DIMM-SensorInstance=0x0

;
; Entry IDs
;
HWiNFO-DIMM0-Temp=0x1000000
HWiNFO-DIMM1-Temp=0x1000001
HWiNFO-DIMM2-Temp=0x1000002
HWiNFO-DIMM3-Temp=0x1000003

;------------------------------------------------------------------------------
; Motherboard
;

;
; Sensor ID and Instance
;
HWiNFO-MOBO-SensorId=0xf7067980
HWiNFO-MOBO-SensorInstance=0x0

;
; Entry IDs
;
HWiNFO-MOBO-SysTemp=0x1000000
HWiNFO-MOBO-Temp2=0x1000002
HWiNFO-MOBO-Temp3=0x1000003
HWiNFO-MOBO-Temp4=0x1000004
HWiNFO-MOBO-Temp5=0x1000005
HWiNFO-MOBO-CPUWeightTemp=0x1000006
HWiNFO-MOBO-CPUPackageTemp=0x1000007
HWiNFO-MOBO-CPUTemp=0x1000008
HWiNFO-MOBO-Temp9=0x1000009
HWiNFO-MOBO-CPUFan=0x3000001

;------------------------------------------------------------------------------
; AIO CPU Cooler
;

;
; Sensor ID and Instance
;
HWiNFO-AIO-SensorId=0xfc04a100
HWiNFO-AIO-SensorInstance=0x8

;
; Entry IDs
;
HWiNFO-AIO-CPUCoolantTemp=0x1000000
HWiNFO-AIO-Fan1=0x3000000
HWiNFO-AIO-Fan2=0x3000001
HWiNFO-AIO-CPUPump=0x3000002

;------------------------------------------------------------------------------
; Fan Controller
;

;
; Sensor ID and Instance
;
HWiNFO-FANC-SensorId=0xfc04a100
HWiNFO-FANC-SensorInstance=0x0

;
; Entry IDs
;
HWiNFO-FANC-Fan1=0x3000000
HWiNFO-FANC-Fan2=0x3000001
HWiNFO-FANC-Fan3=0x3000002
HWiNFO-FANC-Fan4=0x3000003
HWiNFO-FANC-Fan5=0x3000004
HWiNFO-FANC-Fan6=0x3000005

;------------------------------------------------------------------------------
; GPU #0
;

;
; Sensor ID and Instance
;
HWiNFO-GPU0-SensorId=0xe0002000
HWiNFO-GPU0-SensorInstance=0x0

;
; Entry IDs
;

; GPU temperature (degrees)
HWiNFO-GPU0-Temp=0x1000000

HWiNFO-GPU0-CoreVoltage=0x2000000
HWiNFO-GPU0-GPUFan1=0x3000000
HWiNFO-GPU0-GPUFan2=0x3000001
HWiNFO-GPU0-Clock=0x6000000
HWiNFO-GPU0-MemoryClock=0x6000004

; GPU load (percent)
HWiNFO-GPU0-CoreLoad=0x7000000

; GPU memory usage (percent)
;   NOTE: for nVidia GPUs ONLY, this sensor reports the percentage of RAM in use
;   NOTE: for all AMD and Intel GPUs, you MUST set this value to 0x0 since this sensor does not exist
HWiNFO-GPU0-MemoryUsage=0x7000008

; GPU memory allocated (MB)
;   NOTE: for nVidia GPUs, set the following value to the ID of the "GPU Memory Allocated" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *some* AMD GPUs, set the following value to the ID of the "GPU Memory Usage" sensor (i.e., amount of VRAM allocated, in megabytes)
;   NOTE: for *most* AMD GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
;   NOTE: for Intel GPUs, set the following value to 0x0 since there is no sensor available to report allocated VRAM
HWiNFO-GPU0-MemoryAlloc=0x80000fc

; GPU fan usage (percent, not RPM!)
;   IMPORTANT:  If your GPU sensor does not report fan usage, see below to set FanCalcMethod=1
HWiNFO-GPU0-FanSpeed=0x8000000

; GPU #0 RAM: for AMD GPUs, enter the total amount of dedicated RAM in megabytes (1 GB = 1024 MB)
;             for nVidia GPUs, you MUST set this value to 0 (zero)
;             for Intel GPUs, you MUST set this value to 0 (zero), as these GPUs have no dedicated RAM.
GPU0-MemoryTotal=0

;------------------------------------------------------------------------------
; SSD #0
;

;
; Sensor ID and Instance
;
HWiNFO-SSD0-SensorId=0xf0000100
HWiNFO-SSD0-SensorInstance=0x0

;
; Entry IDs
;
HWiNFO-SSD0-Temp=0x1000000

;------------------------------------------------------------------------------
; SSD #1
;

;
; Sensor ID and Instance
;
HWiNFO-SSD1-SensorId=0xf0000100
HWiNFO-SSD1-SensorInstance=0x1

;
; Entry IDs
;
HWiNFO-SSD1-Temp=0x1000000

;------------------------------------------------------------------------------
;
; Maximum fan speeds (used for hardware that cannot report fan usage as a percentage)
;
; NOTE: If higher fan speeds than shown here are encountered, GPU Meter/All CPU Meter will
;       automatically correct these values to the new maximum speed if FanMaxAutoUpdate is set to 1.
;
; NOTE: Set FanMaxAutoUpdate=0 to prevent GPU Meter/All CPU Meter from adjusting the maximum values.
;
; NOTE: Some systems do not report GPU fan usage (i.e., the percentage of the maximum fan speed).
;       The GPU Meter will calculate the percent utilization for you using the maximum fan speed
;       values.  The calculation is controlled by the FanCalcMethod variable.  Note that this
;       applies to the GPU Meter gadget only; the All CPU Meter gadget must always calculate the
;       percent usage for the CPU fan since neither HWiNFO nor SpeedFan can report this value.
;
;       FanCalcMethod 0 = Hardware/HWiNFO reports percentages.
;       FanCalcMethod 1 = GPU Meter will calculate percentages.
;
FanCalcMethod=1
FanCpuMax=500
FanGpuMax=500
FanMaxAutoUpdate=1
