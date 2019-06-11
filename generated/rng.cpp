namespace target {
  namespace rng {
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
          Gets Interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Random number generator enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRNGEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Random number generator enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRNGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        status register
      */
      class SR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Seed error interrupt status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSEIS() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Seed error interrupt status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSEIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Clock error interrupt status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCEIS() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Clock error interrupt status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCEIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Seed error current status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSECS() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Seed error current status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSECS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Clock error current status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCECS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Clock error current status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCECS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Data ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Data ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
          Gets Random data
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getRNDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Random data
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setRNDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
          volatile char _space_SR[4];
          /**
            status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_DR[8];
          /**
            data register
          */
          volatile reg::DR DR;
        };
      };
    };
  }
  
  extern rng::Peripheral RNG;
}