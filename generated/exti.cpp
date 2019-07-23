namespace target {
  namespace exti {
    namespace reg {
      
      /**
        Interrupt mask register (EXTI_IMR)
      */
      class IMR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Interrupt Mask on line 0
          @param index in range 0..29
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIM(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Interrupt Mask on line 0
          @param index in range 0..29
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIM(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Interrupt Mask on line 0
          @return value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long getIM() volatile {
          return (raw & (0x3FFFFFFF << 0)) >> 0;
        }
        /**
          Sets Interrupt Mask on line 0
          @param value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long setIM(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFFFF << 0)) | ((value << 0) & (0x3FFFFFFF << 0));
        }
      };
      
      /**
        Event mask register (EXTI_EMR)
      */
      class EMR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Event Mask on line 0
          @param index in range 0..29
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEM(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Event Mask on line 0
          @param index in range 0..29
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEM(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Event Mask on line 0
          @return value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long getEM() volatile {
          return (raw & (0x3FFFFFFF << 0)) >> 0;
        }
        /**
          Sets Event Mask on line 0
          @param value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long setEM(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFFFF << 0)) | ((value << 0) & (0x3FFFFFFF << 0));
        }
      };
      
      /**
        Rising Trigger selection register (EXTI_RTSR)
      */
      class RTSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Rising trigger event configuration of line 0
          @param index in range 0..22
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Rising trigger event configuration of line 0
          @param index in range 0..22
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Rising trigger event configuration of line 0
          @return value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long getRT() volatile {
          return (raw & (0x7FFFFF << 0)) >> 0;
        }
        /**
          Sets Rising trigger event configuration of line 0
          @param value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long setRT(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFF << 0)) | ((value << 0) & (0x7FFFFF << 0));
        }
      };
      
      /**
        Falling Trigger selection register (EXTI_FTSR)
      */
      class FTSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Falling trigger event configuration of line 0
          @param index in range 0..22
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Falling trigger event configuration of line 0
          @param index in range 0..22
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Falling trigger event configuration of line 0
          @return value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long getFT() volatile {
          return (raw & (0x7FFFFF << 0)) >> 0;
        }
        /**
          Sets Falling trigger event configuration of line 0
          @param value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long setFT(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFF << 0)) | ((value << 0) & (0x7FFFFF << 0));
        }
      };
      
      /**
        Software interrupt event register (EXTI_SWIER)
      */
      class SWIER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Software Interrupt on line 0
          @param index in range 0..22
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWI(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Software Interrupt on line 0
          @param index in range 0..22
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWI(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Software Interrupt on line 0
          @return value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long getSWI() volatile {
          return (raw & (0x7FFFFF << 0)) >> 0;
        }
        /**
          Sets Software Interrupt on line 0
          @param value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long setSWI(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFF << 0)) | ((value << 0) & (0x7FFFFF << 0));
        }
      };
      
      /**
        Pending register (EXTI_PR)
      */
      class PR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Pending bit 0
          @param index in range 0..22
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPIF(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Pending bit 0
          @param index in range 0..22
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Pending bit 0
          @return value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long getPIF() volatile {
          return (raw & (0x7FFFFF << 0)) >> 0;
        }
        /**
          Sets Pending bit 0
          @param value in range 0..8388607
        */
        __attribute__((always_inline)) unsigned long setPIF(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFF << 0)) | ((value << 0) & (0x7FFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Interrupt mask register (EXTI_IMR)
          */
          volatile reg::IMR IMR;
        };
        struct {
          volatile char _space_EMR[4];
          /**
            Event mask register (EXTI_EMR)
          */
          volatile reg::EMR EMR;
        };
        struct {
          volatile char _space_RTSR[8];
          /**
            Rising Trigger selection register (EXTI_RTSR)
          */
          volatile reg::RTSR RTSR;
        };
        struct {
          volatile char _space_FTSR[12];
          /**
            Falling Trigger selection register (EXTI_FTSR)
          */
          volatile reg::FTSR FTSR;
        };
        struct {
          volatile char _space_SWIER[16];
          /**
            Software interrupt event register (EXTI_SWIER)
          */
          volatile reg::SWIER SWIER;
        };
        struct {
          volatile char _space_PR[20];
          /**
            Pending register (EXTI_PR)
          */
          volatile reg::PR PR;
        };
      };
    };
  }
  
  extern exti::Peripheral EXTI;
}