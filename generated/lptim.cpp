namespace target {
  namespace lptim {
    namespace reg {
      
      /**
        Interrupt and Status Register
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
          Gets Counter direction change up to down
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDOWN() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Counter direction change up to down
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDOWN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Counter direction change down to up
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUP() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Counter direction change down to up
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Autoreload register update OK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARROK() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Autoreload register update OK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARROK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Compare register update OK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMPOK() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Compare register update OK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMPOK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets External trigger edge event
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXTTRIG() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets External trigger edge event
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXTTRIG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Autoreload match
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARRM() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Autoreload match
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Compare match
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMPM() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Compare match
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Interrupt Clear Register
      */
      class ICR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Direction change to down Clear Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDOWNCF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Direction change to down Clear Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDOWNCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Direction change to UP Clear Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUPCF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Direction change to UP Clear Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUPCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Autoreload register update OK Clear Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARROKCF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Autoreload register update OK Clear Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARROKCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Compare register update OK Clear Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMPOKCF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Compare register update OK Clear Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMPOKCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets External trigger valid edge Clear Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXTTRIGCF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets External trigger valid edge Clear Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXTTRIGCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Autoreload match Clear Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARRMCF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Autoreload match Clear Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARRMCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets compare match Clear Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMPMCF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets compare match Clear Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMPMCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Interrupt Enable Register
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
          Gets Direction change to down Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDOWNIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Direction change to down Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDOWNIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Direction change to UP Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUPIE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Direction change to UP Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUPIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Autoreload register update OK Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARROKIE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Autoreload register update OK Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARROKIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Compare register update OK Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMPOKIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Compare register update OK Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMPOKIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets External trigger valid edge Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXTTRIGIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets External trigger valid edge Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXTTRIGIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Autoreload match Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARRMIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Autoreload match Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARRMIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Compare match Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMPMIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Compare match Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMPMIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Configuration Register
      */
      class CFGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Encoder mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENC() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets Encoder mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets counter mode enabled
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOUNTMODE() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets counter mode enabled
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOUNTMODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets Registers update mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRELOAD() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets Registers update mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRELOAD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Waveform shape polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAVPOL() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets Waveform shape polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAVPOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets Waveform shape
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAVE() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Waveform shape
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAVE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Timeout enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIMOUT() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Timeout enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIMOUT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets Trigger enable and polarity
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTRIGEN() volatile {
          return (raw & (0x3 << 17)) >> 17;
        }
        /**
          Sets Trigger enable and polarity
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTRIGEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 17)) | ((value << 17) & (0x3 << 17));
        }
        /**
          Gets Trigger selector
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTRIGSEL() volatile {
          return (raw & (0x7 << 13)) >> 13;
        }
        /**
          Sets Trigger selector
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTRIGSEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
        }
        /**
          Gets Clock prescaler
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPRESC() volatile {
          return (raw & (0x7 << 9)) >> 9;
        }
        /**
          Sets Clock prescaler
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPRESC(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 9)) | ((value << 9) & (0x7 << 9));
        }
        /**
          Gets Configurable digital filter for trigger
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTRGFLT() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets Configurable digital filter for trigger
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTRGFLT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets Configurable digital filter for external clock
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCKFLT() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Configurable digital filter for external clock
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCKFLT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Clock Polarity
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCKPOL() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Clock Polarity
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCKPOL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
        }
        /**
          Gets Clock selector
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCKSEL() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Clock selector
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCKSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Control Register
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
          Gets Timer start in continuous mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCNTSTRT() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Timer start in continuous mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCNTSTRT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets LPTIM start in single mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSNGSTRT() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets LPTIM start in single mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSNGSTRT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets LPTIM Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets LPTIM Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Compare Register
      */
      class CMP {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Compare value.
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCMP() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Compare value.
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCMP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Autoreload Register
      */
      class ARR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Auto reload value.
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Auto reload value.
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setARR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Counter Register
      */
      class CNT {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter value.
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Counter value.
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Interrupt and Status Register
          */
          volatile reg::ISR ISR;
        };
        struct {
          volatile char _space_ICR[4];
          /**
            Interrupt Clear Register
          */
          volatile reg::ICR ICR;
        };
        struct {
          volatile char _space_IER[8];
          /**
            Interrupt Enable Register
          */
          volatile reg::IER IER;
        };
        struct {
          volatile char _space_CFGR[12];
          /**
            Configuration Register
          */
          volatile reg::CFGR CFGR;
        };
        struct {
          volatile char _space_CR[16];
          /**
            Control Register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_CMP[20];
          /**
            Compare Register
          */
          volatile reg::CMP CMP;
        };
        struct {
          volatile char _space_ARR[24];
          /**
            Autoreload Register
          */
          volatile reg::ARR ARR;
        };
        struct {
          volatile char _space_CNT[28];
          /**
            Counter Register
          */
          volatile reg::CNT CNT;
        };
      };
    };
  }
  
  extern lptim::Peripheral LPTIM;
}