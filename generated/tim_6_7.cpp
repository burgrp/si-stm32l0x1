namespace target {
  namespace tim_6_7 {
    namespace reg {
      
      /**
        control register 1
      */
      class CR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Auto-reload preload enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARPE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Auto-reload preload enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets One-pulse mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPM() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets One-pulse mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Update request source
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getURS() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Update request source
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setURS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Update disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUDIS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Update disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Counter enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Counter enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        control register 2
      */
      class CR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Master mode selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMMS() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Master mode selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMMS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
      };
      
      /**
        DMA/Interrupt enable register
      */
      class DIER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Update DMA request enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUDE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Update DMA request enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Update interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
          Gets Update interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUIF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        event generation register
      */
      class EGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Update generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUG() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        counter
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
          Gets Low counter value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low counter value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        prescaler
      */
      class PSC {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Prescaler value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getPSC() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Prescaler value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setPSC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        auto-reload register
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
          Gets Low Auto-reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low Auto-reload value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setARR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            control register 1
          */
          volatile reg::CR1 CR1;
        };
        struct {
          volatile char _space_CR2[4];
          /**
            control register 2
          */
          volatile reg::CR2 CR2;
        };
        struct {
          volatile char _space_DIER[12];
          /**
            DMA/Interrupt enable register
          */
          volatile reg::DIER DIER;
        };
        struct {
          volatile char _space_SR[16];
          /**
            status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_EGR[20];
          /**
            event generation register
          */
          volatile reg::EGR EGR;
        };
        struct {
          volatile char _space_CNT[36];
          /**
            counter
          */
          volatile reg::CNT CNT;
        };
        struct {
          volatile char _space_PSC[40];
          /**
            prescaler
          */
          volatile reg::PSC PSC;
        };
        struct {
          volatile char _space_ARR[44];
          /**
            auto-reload register
          */
          volatile reg::ARR ARR;
        };
      };
    };
  }
  
  extern tim_6_7::Peripheral TIM6;
  extern tim_6_7::Peripheral TIM7;
}