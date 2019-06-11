namespace target {
  namespace comp {
    namespace reg {
      
      /**
        Comparator 1 control and status register
      */
      class COMP1_CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Comparator 1 enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP1_EN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Comparator 1 enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP1_EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Comparator 1 Input Minus connection configuration bit
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP1_INN_SEL() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Comparator 1 Input Minus connection configuration bit
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP1_INN_SEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Comparator 1 window mode selection bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP1_WM() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Comparator 1 window mode selection bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP1_WM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets COMP1 output select
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCOMP1_OUT_SEL() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets COMP1 output select
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCOMP1_OUT_SEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Comparator 1 polarity selection bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP1_POLARITY() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Comparator 1 polarity selection bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP1_POLARITY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Comparator 1 output status bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP1_VALUE() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Comparator 1 output status bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP1_VALUE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets COMP1_CSR register lock bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP1_LOCK() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets COMP1_CSR register lock bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP1_LOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        Comparator 2 control and status register
      */
      class COMP2_CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets COMP2_CSR register lock bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP2_LOCK() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets COMP2_CSR register lock bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP2_LOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets Comparator 2 output status bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP2_VALUE() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Comparator 2 output status bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP2_VALUE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets Comparator 2 polarity selection bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP2_POLARITY() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Comparator 2 polarity selection bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP2_POLARITY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Comparator 2 Input Plus connection configuration bit
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCOMP2_INP_SEL() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Comparator 2 Input Plus connection configuration bit
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCOMP2_INP_SEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Comparator 2 Input Minus connection configuration bit
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCOMP2_INN_SEL() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Comparator 2 Input Minus connection configuration bit
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCOMP2_INN_SEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Comparator 2 power mode selection bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP2_SPEED() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Comparator 2 power mode selection bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP2_SPEED(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Comparator 2 enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP2_EN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Comparator 2 enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP2_EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets COMP2 output select
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCOMP2_OUT_SEL() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets COMP2 output select
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCOMP2_OUT_SEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          volatile char _space_COMP1_CSR[24];
          /**
            Comparator 1 control and status register
          */
          volatile reg::COMP1_CSR COMP1_CSR;
        };
        struct {
          volatile char _space_COMP2_CSR[28];
          /**
            Comparator 2 control and status register
          */
          volatile reg::COMP2_CSR COMP2_CSR;
        };
      };
    };
  }
  
  extern comp::Peripheral COMP;
}