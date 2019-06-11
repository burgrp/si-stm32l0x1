namespace target {
  namespace crs {
    namespace reg {
      
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
          Gets HSI48 oscillator smooth trimming
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getTRIM() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets HSI48 oscillator smooth trimming
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setTRIM(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
        }
        /**
          Gets Generate software SYNC event
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWSYNC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Generate software SYNC event
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWSYNC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Automatic trimming enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAUTOTRIMEN() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Automatic trimming enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAUTOTRIMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Frequency error counter enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCEN() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Frequency error counter enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Expected SYNC interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getESYNCIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Expected SYNC interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setESYNCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Synchronization or trimming error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Synchronization or trimming error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets SYNC warning interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCWARNIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SYNC warning interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCWARNIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets SYNC event OK interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCOKIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets SYNC event OK interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCOKIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        configuration register
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
          Gets SYNC polarity selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCPOL() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets SYNC polarity selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCPOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets SYNC signal source selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSYNCSRC() volatile {
          return (raw & (0x3 << 28)) >> 28;
        }
        /**
          Sets SYNC signal source selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSYNCSRC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 28)) | ((value << 28) & (0x3 << 28));
        }
        /**
          Gets SYNC divider
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSYNCDIV() volatile {
          return (raw & (0x7 << 24)) >> 24;
        }
        /**
          Sets SYNC divider
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSYNCDIV(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 24)) | ((value << 24) & (0x7 << 24));
        }
        /**
          Gets Frequency error limit
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getFELIM() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Frequency error limit
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setFELIM(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets Counter reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getRELOAD() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Counter reload value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setRELOAD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
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
          Gets Frequency error capture
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getFECAP() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Frequency error capture
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setFECAP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Frequency error direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFEDIR() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Frequency error direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFEDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Trimming overflow or underflow
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTRIMOVF() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Trimming overflow or underflow
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTRIMOVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets SYNC missed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCMISS() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets SYNC missed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCMISS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets SYNC error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCERR() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets SYNC error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Expected SYNC flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getESYNCF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Expected SYNC flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setESYNCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Error flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Error flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets SYNC warning flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCWARNF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SYNC warning flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCWARNF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets SYNC event OK flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCOKF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets SYNC event OK flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCOKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        interrupt flag clear register
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
          Gets Expected SYNC clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getESYNCC() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Expected SYNC clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setESYNCC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Error clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRC() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Error clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets SYNC warning clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCWARNC() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SYNC warning clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCWARNC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets SYNC event OK clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCOKC() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets SYNC event OK clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCOKC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_CFGR[4];
          /**
            configuration register
          */
          volatile reg::CFGR CFGR;
        };
        struct {
          volatile char _space_ISR[8];
          /**
            interrupt and status register
          */
          volatile reg::ISR ISR;
        };
        struct {
          volatile char _space_ICR[12];
          /**
            interrupt flag clear register
          */
          volatile reg::ICR ICR;
        };
      };
    };
  }
  
  extern crs::Peripheral CRS;
}