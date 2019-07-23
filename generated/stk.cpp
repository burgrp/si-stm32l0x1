namespace target {
  namespace stk {
    namespace reg {
      
      /**
        SysTick control and status register
      */
      class CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Counter enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets SysTick exception request enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTICKINT() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SysTick exception request enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTICKINT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Clock source selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCLKSOURCE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Clock source selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCLKSOURCE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets COUNTFLAG
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOUNTFLAG() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets COUNTFLAG
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOUNTFLAG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
      };
      
      /**
        SysTick reload value register
      */
      class RVR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RELOAD value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getRELOAD() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets RELOAD value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setRELOAD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        SysTick current value register
      */
      class CVR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Current counter value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCURRENT() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Current counter value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setCURRENT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        SysTick calibration value register
      */
      class CALIB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Calibration value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getTENMS() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Calibration value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setTENMS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
        /**
          Gets SKEW flag: Indicates whether the TENMS value is exact
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSKEW() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets SKEW flag: Indicates whether the TENMS value is exact
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSKEW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets NOREF flag. Reads as zero
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNOREF() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets NOREF flag. Reads as zero
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNOREF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            SysTick control and status register
          */
          volatile reg::CSR CSR;
        };
        struct {
          volatile char _space_RVR[4];
          /**
            SysTick reload value register
          */
          volatile reg::RVR RVR;
        };
        struct {
          volatile char _space_CVR[8];
          /**
            SysTick current value register
          */
          volatile reg::CVR CVR;
        };
        struct {
          volatile char _space_CALIB[12];
          /**
            SysTick calibration value register
          */
          volatile reg::CALIB CALIB;
        };
      };
    };
  }
  
  extern stk::Peripheral STK;
}