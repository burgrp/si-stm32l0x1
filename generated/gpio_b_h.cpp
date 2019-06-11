namespace target {
  namespace gpio_b_h {
    namespace reg {
      
      /**
        GPIO port mode register
      */
      class MODER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMODE(int index) volatile {
          return (raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMODE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((value << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMODE() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        GPIO port output type register
      */
      class OTYPER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getOT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setOT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        GPIO port output speed register
      */
      class OSPEEDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOSPEED(int index) volatile {
          return (raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOSPEED(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((value << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOSPEED() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setOSPEED(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        GPIO port pull-up/pull-down register
      */
      class PUPDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPUPD(int index) volatile {
          return (raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPUPD(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((value << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPUPD() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPUPD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        GPIO port input data register
      */
      class IDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port input data bit (y = 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getID(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port input data bit (y = 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setID(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Port input data bit (y = 0..15)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Port input data bit (y = 0..15)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setID(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        GPIO port output data register
      */
      class ODR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port output data bit (y = 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOD(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port output data bit (y = 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOD(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Port output data bit (y = 0..15)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getOD() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Port output data bit (y = 0..15)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setOD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        GPIO port bit set/reset register
      */
      class BSRR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x reset bit y (y = 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBR(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Port x reset bit y (y = 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Port x reset bit y (y = 0..15)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getBR() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Port x reset bit y (y = 0..15)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setBR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBS(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBS(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Port x set bit y (y= 0..15)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getBS() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Port x set bit y (y= 0..15)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setBS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        GPIO port configuration lock register
      */
      class LCKR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x lock bit y (y= 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLCK(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x lock bit y (y= 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLCK(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Port x lock bit y (y= 0..15)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getLCK() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Port x lock bit y (y= 0..15)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setLCK(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
        /**
          Gets Port x lock bit y (y= 0..15)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLCKK() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Port x lock bit y (y= 0..15)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLCKK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
      };
      
      /**
        GPIO alternate function low register
      */
      class AFRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Alternate function selection for port x pin y (y = 0..7)
          @param index in range 0..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getAFSEL(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0));
        }
        /**
          Sets Alternate function selection for port x pin y (y = 0..7)
          @param index in range 0..7
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setAFSEL(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((value << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
        }
        /**
          Gets Alternate function selection for port x pin y (y = 0..7)
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAFSEL() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Alternate function selection for port x pin y (y = 0..7)
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAFSEL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        GPIO alternate function high register
      */
      class AFRH {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Alternate function selection for port x pin y (y = 8..15)
          @param index in range 8..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getAFSEL(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8));
        }
        /**
          Sets Alternate function selection for port x pin y (y = 8..15)
          @param index in range 8..15
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setAFSEL(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((value << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
        }
        /**
          Gets Alternate function selection for port x pin y (y = 8..15)
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAFSEL() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Alternate function selection for port x pin y (y = 8..15)
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAFSEL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        GPIO port bit reset register
      */
      class BRR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x Reset bit y (y= 0 .. 15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x Reset bit y (y= 0 .. 15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Port x Reset bit y (y= 0 .. 15)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getBR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Port x Reset bit y (y= 0 .. 15)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setBR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            GPIO port mode register
          */
          volatile reg::MODER MODER;
        };
        struct {
          volatile char _space_OTYPER[4];
          /**
            GPIO port output type register
          */
          volatile reg::OTYPER OTYPER;
        };
        struct {
          volatile char _space_OSPEEDR[8];
          /**
            GPIO port output speed register
          */
          volatile reg::OSPEEDR OSPEEDR;
        };
        struct {
          volatile char _space_PUPDR[12];
          /**
            GPIO port pull-up/pull-down register
          */
          volatile reg::PUPDR PUPDR;
        };
        struct {
          volatile char _space_IDR[16];
          /**
            GPIO port input data register
          */
          volatile reg::IDR IDR;
        };
        struct {
          volatile char _space_ODR[20];
          /**
            GPIO port output data register
          */
          volatile reg::ODR ODR;
        };
        struct {
          volatile char _space_BSRR[24];
          /**
            GPIO port bit set/reset register
          */
          volatile reg::BSRR BSRR;
        };
        struct {
          volatile char _space_LCKR[28];
          /**
            GPIO port configuration lock register
          */
          volatile reg::LCKR LCKR;
        };
        struct {
          volatile char _space_AFRL[32];
          /**
            GPIO alternate function low register
          */
          volatile reg::AFRL AFRL;
        };
        struct {
          volatile char _space_AFRH[36];
          /**
            GPIO alternate function high register
          */
          volatile reg::AFRH AFRH;
        };
        struct {
          volatile char _space_BRR[40];
          /**
            GPIO port bit reset register
          */
          volatile reg::BRR BRR;
        };
      };
    };
  }
  
  extern gpio_b_h::Peripheral GPIOB;
  extern gpio_b_h::Peripheral GPIOC;
  extern gpio_b_h::Peripheral GPIOD;
  extern gpio_b_h::Peripheral GPIOH;
}