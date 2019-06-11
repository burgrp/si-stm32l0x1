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
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Interrupt Mask on line 0
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Interrupt Mask on line 0
          @return value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long getMR() volatile {
          return (raw & (0xFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Interrupt Mask on line 0
          @param value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long setMR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFF << 0));
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
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Event Mask on line 0
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Event Mask on line 0
          @return value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long getMR() volatile {
          return (raw & (0xFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Event Mask on line 0
          @param value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long setMR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFF << 0));
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
          @param index in range 0..19
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Rising trigger event configuration of line 0
          @param index in range 0..19
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Rising trigger event configuration of line 0
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getTR() volatile {
          return (raw & (0xFFFFF << 0)) >> 0;
        }
        /**
          Sets Rising trigger event configuration of line 0
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setTR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 0)) | ((value << 0) & (0xFFFFF << 0));
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
          @param index in range 0..19
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Falling trigger event configuration of line 0
          @param index in range 0..19
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Falling trigger event configuration of line 0
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getTR() volatile {
          return (raw & (0xFFFFF << 0)) >> 0;
        }
        /**
          Sets Falling trigger event configuration of line 0
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setTR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 0)) | ((value << 0) & (0xFFFFF << 0));
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
          @param index in range 0..19
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWIER(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Software Interrupt on line 0
          @param index in range 0..19
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWIER(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Software Interrupt on line 0
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getSWIER() volatile {
          return (raw & (0xFFFFF << 0)) >> 0;
        }
        /**
          Sets Software Interrupt on line 0
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setSWIER(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 0)) | ((value << 0) & (0xFFFFF << 0));
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
          @param index in range 0..19
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Pending bit 0
          @param index in range 0..19
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Pending bit 0
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getPR() volatile {
          return (raw & (0xFFFFF << 0)) >> 0;
        }
        /**
          Sets Pending bit 0
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setPR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 0)) | ((value << 0) & (0xFFFFF << 0));
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