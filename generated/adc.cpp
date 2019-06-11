namespace target {
  namespace adc {
    namespace reg {
      
      /**
        interrupt and status register
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
          Gets ADC ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets ADC ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets End of sampling flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOSMP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets End of sampling flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOSMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets End of conversion flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOC() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets End of conversion flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets End of sequence flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOS() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets End of sequence flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets ADC overrun
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets ADC overrun
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Analog watchdog flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAWD() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Analog watchdog flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAWD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets End Of Calibration flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOCAL() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets End Of Calibration flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOCAL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
      };
      
      /**
        interrupt enable register
      */
      class IER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets ADC ready interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADRDYIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets ADC ready interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADRDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets End of sampling flag interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOSMPIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets End of sampling flag interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOSMPIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets End of conversion interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOCIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets End of conversion interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets End of conversion sequence interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOSIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets End of conversion sequence interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOSIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Overrun interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVRIE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Overrun interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Analog watchdog interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAWDIE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Analog watchdog interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAWDIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets End of calibration interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOCALIE() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets End of calibration interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOCALIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
      };
      
      /**
        control register
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
          Gets ADC enable command
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets ADC enable command
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets ADC disable command
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADDIS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets ADC disable command
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets ADC start conversion command
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADSTART() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets ADC start conversion command
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADSTART(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets ADC stop conversion command
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADSTP() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets ADC stop conversion command
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADSTP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets ADC Voltage Regulator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADVREGEN() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets ADC Voltage Regulator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADVREGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets ADC calibration
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCAL() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets ADC calibration
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCAL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        configuration register 1
      */
      class CFGR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Analog watchdog channel selection
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getAWDCH() volatile {
          return (raw & (0x1F << 26)) >> 26;
        }
        /**
          Sets Analog watchdog channel selection
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setAWDCH(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 26)) | ((value << 26) & (0x1F << 26));
        }
        /**
          Gets Analog watchdog enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAWDEN() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets Analog watchdog enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAWDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets Enable the watchdog on a single channel or on all channels
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAWDSGL() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets Enable the watchdog on a single channel or on all channels
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAWDSGL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Discontinuous mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDISCEN() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Discontinuous mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDISCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Auto-off mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAUTOFF() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Auto-off mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAUTOFF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Auto-delayed conversion mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAUTDLY() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Auto-delayed conversion mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAUTDLY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Single / continuous conversion mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCONT() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Single / continuous conversion mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCONT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Overrun management mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVRMOD() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Overrun management mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVRMOD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets External trigger enable and polarity selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEXTEN() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets External trigger enable and polarity selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEXTEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets External trigger selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getEXTSEL() volatile {
          return (raw & (0x7 << 6)) >> 6;
        }
        /**
          Sets External trigger selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setEXTSEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 6)) | ((value << 6) & (0x7 << 6));
        }
        /**
          Gets Data alignment
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALIGN() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Data alignment
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALIGN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data resolution
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRES() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Data resolution
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRES(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Scan sequence direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSCANDIR() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Scan sequence direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSCANDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Direct memery access configuration
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMACFG() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Direct memery access configuration
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMACFG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Direct memory access enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Direct memory access enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        configuration register 2
      */
      class CFGR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Oversampler Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVSE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Oversampler Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVSE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Oversampling ratio
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOVSR() volatile {
          return (raw & (0x7 << 2)) >> 2;
        }
        /**
          Sets Oversampling ratio
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setOVSR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 2)) | ((value << 2) & (0x7 << 2));
        }
        /**
          Gets Oversampling shift
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getOVSS() volatile {
          return (raw & (0xF << 5)) >> 5;
        }
        /**
          Sets Oversampling shift
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setOVSS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 5)) | ((value << 5) & (0xF << 5));
        }
        /**
          Gets Triggered Oversampling
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTOVS() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Triggered Oversampling
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTOVS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets ADC clock mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCKMODE() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets ADC clock mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCKMODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        sampling time register
      */
      class SMPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Sampling time selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSMPR() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Sampling time selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSMPR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        watchdog threshold register
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
          Gets Analog watchdog higher threshold
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0xFFF << 16)) >> 16;
        }
        /**
          Sets Analog watchdog higher threshold
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 16)) | ((value << 16) & (0xFFF << 16));
        }
        /**
          Gets Analog watchdog lower threshold
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getLT() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Analog watchdog lower threshold
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setLT(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        channel selection register
      */
      class CHSELR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel-x selection
          @param index in range 0..18
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCHSEL(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Channel-x selection
          @param index in range 0..18
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCHSEL(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Channel-x selection
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getCHSEL() volatile {
          return (raw & (0x7FFFF << 0)) >> 0;
        }
        /**
          Sets Channel-x selection
          @param value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long setCHSEL(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 0)) | ((value << 0) & (0x7FFFF << 0));
        }
      };
      
      /**
        data register
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
          Gets Converted data
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Converted data
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        ADC Calibration factor
      */
      class CALFACT {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Calibration factor
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCALFACT() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets Calibration factor
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setCALFACT(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
      };
      
      /**
        ADC common configuration register
      */
      class CCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets ADC prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPRESC() volatile {
          return (raw & (0xF << 18)) >> 18;
        }
        /**
          Sets ADC prescaler
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPRESC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 18)) | ((value << 18) & (0xF << 18));
        }
        /**
          Gets VREFINT enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVREFEN() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets VREFINT enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVREFEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Temperature sensor enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSEN() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets Temperature sensor enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets VLCD enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVLCDEN() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets VLCD enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVLCDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets Low Frequency Mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLFMEN() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets Low Frequency Mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLFMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            interrupt and status register
          */
          volatile reg::ISR ISR;
        };
        struct {
          volatile char _space_IER[4];
          /**
            interrupt enable register
          */
          volatile reg::IER IER;
        };
        struct {
          volatile char _space_CR[8];
          /**
            control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_CFGR1[12];
          /**
            configuration register 1
          */
          volatile reg::CFGR1 CFGR1;
        };
        struct {
          volatile char _space_CFGR2[16];
          /**
            configuration register 2
          */
          volatile reg::CFGR2 CFGR2;
        };
        struct {
          volatile char _space_SMPR[20];
          /**
            sampling time register
          */
          volatile reg::SMPR SMPR;
        };
        struct {
          volatile char _space_TR[32];
          /**
            watchdog threshold register
          */
          volatile reg::TR TR;
        };
        struct {
          volatile char _space_CHSELR[40];
          /**
            channel selection register
          */
          volatile reg::CHSELR CHSELR;
        };
        struct {
          volatile char _space_DR[64];
          /**
            data register
          */
          volatile reg::DR DR;
        };
        struct {
          volatile char _space_CALFACT[180];
          /**
            ADC Calibration factor
          */
          volatile reg::CALFACT CALFACT;
        };
        struct {
          volatile char _space_CCR[776];
          /**
            ADC common configuration register
          */
          volatile reg::CCR CCR;
        };
      };
    };
  }
  
  extern adc::Peripheral ADC;
}