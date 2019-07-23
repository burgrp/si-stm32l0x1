namespace target {
  namespace rtc {
    namespace reg {
      
      /**
        RTC time register
      */
      class TR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets AM/PM notation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets AM/PM notation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Hour tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Hour tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Hour units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Hour units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Minute tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Minute tens in BCD format
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Minute units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Minute units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Second tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Second tens in BCD format
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Second units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Second units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        RTC date register
      */
      class DR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Year tens in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getYT() volatile {
          return (raw & (0xF << 20)) >> 20;
        }
        /**
          Sets Year tens in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setYT(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((value << 20) & (0xF << 20));
        }
        /**
          Gets Year units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getYU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Year units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setYU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Week day units
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWDU() volatile {
          return (raw & (0x7 << 13)) >> 13;
        }
        /**
          Sets Week day units
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWDU(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
        }
        /**
          Gets Month tens in BCD format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMT() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Month tens in BCD format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Month units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Month units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Date tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Date tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Date units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Date units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        RTC control register
      */
      class CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Calibration output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOE() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets Calibration output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets Output selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOSEL() volatile {
          return (raw & (0x3 << 21)) >> 21;
        }
        /**
          Sets Output selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((value << 21) & (0x3 << 21));
        }
        /**
          Gets Output polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPOL() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Output polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Calibration output selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOSEL() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Calibration output selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets Backup
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Backup
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets Subtract 1 hour (winter time change)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUB1H() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Subtract 1 hour (winter time change)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUB1H(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Add 1 hour (summer time change)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADD1H() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Add 1 hour (summer time change)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADD1H(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Time-stamp interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSIE() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Time-stamp interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Wakeup timer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUTIE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Wakeup timer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Alarm B interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRBIE() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Alarm B interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRBIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Alarm A interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAIE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Alarm A interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets timestamp enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSE() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets timestamp enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Wakeup timer enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUTE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Wakeup timer enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUTE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Alarm B enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRBE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Alarm B enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRBE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Alarm A enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Alarm A enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Hour format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFMT() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Hour format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFMT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Bypass the shadow registers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBYPSHAD() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Bypass the shadow registers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBYPSHAD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets RTC_REFIN reference clock detection enable (50 or 60 Hz)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREFCKON() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets RTC_REFIN reference clock detection enable (50 or 60 Hz)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREFCKON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Time-stamp event active edge
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSEDGE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Time-stamp event active edge
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSEDGE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Wakeup clock selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWUCKSEL() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Wakeup clock selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWUCKSEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        RTC initialization and status register
      */
      class ISR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RTC_TAMP1 detection flag
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_F(int index) volatile {
          return (raw & (0x1 << (13 + 1 * (index - 1)))) >> (13 + 1 * (index - 1));
        }
        /**
          Sets RTC_TAMP1 detection flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_F(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (13 + 1 * (index - 1)))) | ((value << (13 + 1 * (index - 1))) & (0x1 << (13 + 1 * (index - 1))));
        }
        /**
          Gets RTC_TAMP1 detection flag
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMP_F() volatile {
          return (raw & (0x3 << 13)) >> 13;
        }
        /**
          Sets RTC_TAMP1 detection flag
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMP_F(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 13)) | ((value << 13) & (0x3 << 13));
        }
        /**
          Gets Time-stamp overflow flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSOVF() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Time-stamp overflow flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSOVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Time-stamp flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSF() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Time-stamp flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Wakeup timer flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUTF() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Wakeup timer flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Alarm B flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRBF() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Alarm B flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRBF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Alarm A flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAF() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Alarm A flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Initialization mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINIT() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Initialization mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINIT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Initialization flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINITF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Initialization flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINITF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Registers synchronization flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRSF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Registers synchronization flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRSF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Initialization status flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINITS() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Initialization status flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINITS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Shift operation pending
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSHPF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Shift operation pending
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSHPF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Wakeup timer write flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUTWF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Wakeup timer write flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUTWF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Alarm B write flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRBWF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Alarm B write flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRBWF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Alarm A write flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAWF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Alarm A write flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAWF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        RTC prescaler register
      */
      class PRER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Asynchronous prescaler factor
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getPREDIV_A() volatile {
          return (raw & (0x7F << 16)) >> 16;
        }
        /**
          Sets Asynchronous prescaler factor
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setPREDIV_A(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 16)) | ((value << 16) & (0x7F << 16));
        }
        /**
          Gets Synchronous prescaler factor
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getPREDIV_S() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Synchronous prescaler factor
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setPREDIV_S(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        RTC wakeup timer register
      */
      class WUTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Wakeup auto-reload value bits
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getWUT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Wakeup auto-reload value bits
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setWUT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        RTC alarm A register
      */
      class ALRMAR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Alarm A seconds mask
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSK(int index) volatile {
          return (raw & (0x1 << (7 + 8 * (index - 1)))) >> (7 + 8 * (index - 1));
        }
        /**
          Sets Alarm A seconds mask
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSK(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 1)))) | ((value << (7 + 8 * (index - 1))) & (0x1 << (7 + 8 * (index - 1))));
        }
        /**
          Gets Alarm A seconds mask
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMSK() volatile {
          return (raw & (0xF << 7)) >> 7;
        }
        /**
          Sets Alarm A seconds mask
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMSK(unsigned long value) volatile {
          raw = (raw & ~(0xF << 7)) | ((value << 7) & (0xF << 7));
        }
        /**
          Gets Week day selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWDSEL() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Week day selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWDSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets Date tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return (raw & (0x3 << 28)) >> 28;
        }
        /**
          Sets Date tens in BCD format.
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 28)) | ((value << 28) & (0x3 << 28));
        }
        /**
          Gets Date units or day in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Date units or day in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets AM/PM notation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets AM/PM notation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Hour tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Hour tens in BCD format.
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Hour units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Hour units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Minute tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Minute tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Minute units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Minute units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Second tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Second tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Second units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Second units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        RTC alarm B register
      */
      class ALRMBR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Alarm B seconds mask
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSK(int index) volatile {
          return (raw & (0x1 << (7 + 8 * (index - 1)))) >> (7 + 8 * (index - 1));
        }
        /**
          Sets Alarm B seconds mask
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSK(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 1)))) | ((value << (7 + 8 * (index - 1))) & (0x1 << (7 + 8 * (index - 1))));
        }
        /**
          Gets Alarm B seconds mask
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMSK() volatile {
          return (raw & (0xF << 7)) >> 7;
        }
        /**
          Sets Alarm B seconds mask
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMSK(unsigned long value) volatile {
          raw = (raw & ~(0xF << 7)) | ((value << 7) & (0xF << 7));
        }
        /**
          Gets Week day selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWDSEL() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Week day selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWDSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets Date tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return (raw & (0x3 << 28)) >> 28;
        }
        /**
          Sets Date tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 28)) | ((value << 28) & (0x3 << 28));
        }
        /**
          Gets Date units or day in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Date units or day in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets AM/PM notation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets AM/PM notation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Hour tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Hour tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Hour units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Hour units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Minute tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Minute tens in BCD format
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Minute units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Minute units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Second tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Second tens in BCD format
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Second units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Second units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        write protection register
      */
      class WPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write protection key
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getKEY() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Write protection key
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setKEY(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        RTC sub second register
      */
      class SSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Sub second value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Sub second value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setSS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        RTC shift control register
      */
      class SHIFTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Add one second
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADD1S() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Add one second
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADD1S(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets Subtract a fraction of a second
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getSUBFS() volatile {
          return (raw & (0x7FFF << 0)) >> 0;
        }
        /**
          Sets Subtract a fraction of a second
          @param value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long setSUBFS(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((value << 0) & (0x7FFF << 0));
        }
      };
      
      /**
        RTC timestamp time register
      */
      class TSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets AM/PM notation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets AM/PM notation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Hour tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Hour tens in BCD format.
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Hour units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Hour units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Minute tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Minute tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Minute units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Minute units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Second tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Second tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Second units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Second units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        RTC timestamp date register
      */
      class TSDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Week day units
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWDU() volatile {
          return (raw & (0x7 << 13)) >> 13;
        }
        /**
          Sets Week day units
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWDU(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
        }
        /**
          Gets Month tens in BCD format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMT() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Month tens in BCD format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Month units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Month units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Date tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Date tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Date units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Date units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        RTC time-stamp sub second register
      */
      class TSSSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Sub second value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Sub second value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setSS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        RTC calibration register
      */
      class CALR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Increase frequency of RTC by 488.5 ppm
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCALP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Increase frequency of RTC by 488.5 ppm
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCALP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Use an 8-second calibration cycle period
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCALW8() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Use an 8-second calibration cycle period
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCALW8(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Use a 16-second calibration cycle period
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCALW16() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Use a 16-second calibration cycle period
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCALW16(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Calibration minus
          @return value in range 0..511
        */
        __attribute__((always_inline)) unsigned long getCALM() volatile {
          return (raw & (0x1FF << 0)) >> 0;
        }
        /**
          Sets Calibration minus
          @param value in range 0..511
        */
        __attribute__((always_inline)) unsigned long setCALM(unsigned long value) volatile {
          raw = (raw & ~(0x1FF << 0)) | ((value << 0) & (0x1FF << 0));
        }
      };
      
      /**
        RTC tamper configuration register
      */
      class TAMPCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Tamper 1 mask flag
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_MF(int index) volatile {
          return (raw & (0x1 << (18 + 3 * (index - 1)))) >> (18 + 3 * (index - 1));
        }
        /**
          Sets Tamper 1 mask flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_MF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (18 + 3 * (index - 1)))) | ((value << (18 + 3 * (index - 1))) & (0x1 << (18 + 3 * (index - 1))));
        }
        /**
          Gets Tamper 1 mask flag
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMP_MF() volatile {
          return (raw & (0x3 << 18)) >> 18;
        }
        /**
          Sets Tamper 1 mask flag
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMP_MF(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 18)) | ((value << 18) & (0x3 << 18));
        }
        /**
          Gets Tamper 1 no erase
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_NOERASE(int index) volatile {
          return (raw & (0x1 << (17 + 3 * (index - 1)))) >> (17 + 3 * (index - 1));
        }
        /**
          Sets Tamper 1 no erase
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_NOERASE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (17 + 3 * (index - 1)))) | ((value << (17 + 3 * (index - 1))) & (0x1 << (17 + 3 * (index - 1))));
        }
        /**
          Gets Tamper 1 no erase
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMP_NOERASE() volatile {
          return (raw & (0x3 << 17)) >> 17;
        }
        /**
          Sets Tamper 1 no erase
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMP_NOERASE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 17)) | ((value << 17) & (0x3 << 17));
        }
        /**
          Gets Tamper 1 interrupt enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_IE(int index) volatile {
          return (raw & (0x1 << (16 + 3 * (index - 1)))) >> (16 + 3 * (index - 1));
        }
        /**
          Sets Tamper 1 interrupt enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_IE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 3 * (index - 1)))) | ((value << (16 + 3 * (index - 1))) & (0x1 << (16 + 3 * (index - 1))));
        }
        /**
          Gets Tamper 1 interrupt enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMP_IE() volatile {
          return (raw & (0x3 << 16)) >> 16;
        }
        /**
          Sets Tamper 1 interrupt enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMP_IE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
        }
        /**
          Gets RTC_TAMP1 input detection enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_E(int index) volatile {
          return (raw & (0x1 << (0 + 3 * (index - 1)))) >> (0 + 3 * (index - 1));
        }
        /**
          Sets RTC_TAMP1 input detection enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_E(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 3 * (index - 1)))) | ((value << (0 + 3 * (index - 1))) & (0x1 << (0 + 3 * (index - 1))));
        }
        /**
          Gets RTC_TAMP1 input detection enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMP_E() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets RTC_TAMP1 input detection enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMP_E(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets RTC_TAMPx pull-up disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMPPUDIS() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets RTC_TAMPx pull-up disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMPPUDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets RTC_TAMPx precharge duration
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMPPRCH() volatile {
          return (raw & (0x3 << 13)) >> 13;
        }
        /**
          Sets RTC_TAMPx precharge duration
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMPPRCH(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 13)) | ((value << 13) & (0x3 << 13));
        }
        /**
          Gets RTC_TAMPx filter count
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMPFLT() volatile {
          return (raw & (0x3 << 11)) >> 11;
        }
        /**
          Sets RTC_TAMPx filter count
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMPFLT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((value << 11) & (0x3 << 11));
        }
        /**
          Gets Tamper sampling frequency
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTAMPFREQ() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Tamper sampling frequency
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTAMPFREQ(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Activate timestamp on tamper detection event
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMPTS() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Activate timestamp on tamper detection event
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMPTS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Active level for RTC_TAMP2 input
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP2_TRG() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Active level for RTC_TAMP2 input
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP2_TRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Tamper interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMPIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Tamper interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMPIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Active level for RTC_TAMP1 input
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP1TRG() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Active level for RTC_TAMP1 input
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP1TRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        RTC alarm A sub second register
      */
      class ALRMASSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Mask the most-significant bits starting at this bit
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMASKSS() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Mask the most-significant bits starting at this bit
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMASKSS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Sub seconds value
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return (raw & (0x7FFF << 0)) >> 0;
        }
        /**
          Sets Sub seconds value
          @param value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long setSS(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((value << 0) & (0x7FFF << 0));
        }
      };
      
      /**
        RTC alarm B sub second register
      */
      class ALRMBSSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Mask the most-significant bits starting at this bit
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMASKSS() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Mask the most-significant bits starting at this bit
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMASKSS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Sub seconds value
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return (raw & (0x7FFF << 0)) >> 0;
        }
        /**
          Sets Sub seconds value
          @param value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long setSS(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((value << 0) & (0x7FFF << 0));
        }
      };
      
      /**
        option register
      */
      class OR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RTC_ALARM on PC13 output type
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTC_OUT_RMP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets RTC_ALARM on PC13 output type
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTC_OUT_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets RTC_ALARM on PC13 output type
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTC_ALARM_TYPE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets RTC_ALARM on PC13 output type
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTC_ALARM_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        RTC backup registers
      */
      class BKP0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        RTC backup registers
      */
      class BKP1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        RTC backup registers
      */
      class BKP2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        RTC backup registers
      */
      class BKP3R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        RTC backup registers
      */
      class BKP4R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            RTC time register
          */
          volatile reg::TR TR;
        };
        struct {
          volatile char _space_DR[4];
          /**
            RTC date register
          */
          volatile reg::DR DR;
        };
        struct {
          volatile char _space_CR[8];
          /**
            RTC control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_ISR[12];
          /**
            RTC initialization and status register
          */
          volatile reg::ISR ISR;
        };
        struct {
          volatile char _space_PRER[16];
          /**
            RTC prescaler register
          */
          volatile reg::PRER PRER;
        };
        struct {
          volatile char _space_WUTR[20];
          /**
            RTC wakeup timer register
          */
          volatile reg::WUTR WUTR;
        };
        struct {
          volatile char _space_ALRMAR[28];
          /**
            RTC alarm A register
          */
          volatile reg::ALRMAR ALRMAR;
        };
        struct {
          volatile char _space_ALRMBR[32];
          /**
            RTC alarm B register
          */
          volatile reg::ALRMBR ALRMBR;
        };
        struct {
          volatile char _space_WPR[36];
          /**
            write protection register
          */
          volatile reg::WPR WPR;
        };
        struct {
          volatile char _space_SSR[40];
          /**
            RTC sub second register
          */
          volatile reg::SSR SSR;
        };
        struct {
          volatile char _space_SHIFTR[44];
          /**
            RTC shift control register
          */
          volatile reg::SHIFTR SHIFTR;
        };
        struct {
          volatile char _space_TSTR[48];
          /**
            RTC timestamp time register
          */
          volatile reg::TSTR TSTR;
        };
        struct {
          volatile char _space_TSDR[52];
          /**
            RTC timestamp date register
          */
          volatile reg::TSDR TSDR;
        };
        struct {
          volatile char _space_TSSSR[56];
          /**
            RTC time-stamp sub second register
          */
          volatile reg::TSSSR TSSSR;
        };
        struct {
          volatile char _space_CALR[60];
          /**
            RTC calibration register
          */
          volatile reg::CALR CALR;
        };
        struct {
          volatile char _space_TAMPCR[64];
          /**
            RTC tamper configuration register
          */
          volatile reg::TAMPCR TAMPCR;
        };
        struct {
          volatile char _space_ALRMASSR[68];
          /**
            RTC alarm A sub second register
          */
          volatile reg::ALRMASSR ALRMASSR;
        };
        struct {
          volatile char _space_ALRMBSSR[72];
          /**
            RTC alarm B sub second register
          */
          volatile reg::ALRMBSSR ALRMBSSR;
        };
        struct {
          volatile char _space_OR[76];
          /**
            option register
          */
          volatile reg::OR OR;
        };
        struct {
          volatile char _space_BKP0R[80];
          /**
            RTC backup registers
          */
          volatile reg::BKP0R BKP0R;
        };
        struct {
          volatile char _space_BKP1R[84];
          /**
            RTC backup registers
          */
          volatile reg::BKP1R BKP1R;
        };
        struct {
          volatile char _space_BKP2R[88];
          /**
            RTC backup registers
          */
          volatile reg::BKP2R BKP2R;
        };
        struct {
          volatile char _space_BKP3R[92];
          /**
            RTC backup registers
          */
          volatile reg::BKP3R BKP3R;
        };
        struct {
          volatile char _space_BKP4R[96];
          /**
            RTC backup registers
          */
          volatile reg::BKP4R BKP4R;
        };
      };
    };
  }
  
  extern rtc::Peripheral RTC;
}