namespace target {
  namespace dbgmcu {
    namespace reg {
      
      /**
        MCU Device ID Code Register
      */
      class IDCODE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Device Identifier
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDEV_ID() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Device Identifier
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDEV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
        /**
          Gets Revision Identifier
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getREV_ID() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Revision Identifier
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setREV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
      };
      
      /**
        Debug MCU Configuration Register
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
          Gets Debug Stop Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_STOP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Debug Stop Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Debug Standby Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_STANDBY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Debug Standby Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_STANDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Debug Sleep Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_SLEEP() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Debug Sleep Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_SLEEP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        APB Low Freeze Register
      */
      class APB1_FZ {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Debug Timer 2 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER2_STOP() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Debug Timer 2 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER2_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Debug Timer 6 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER6_STOP() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Debug Timer 6 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER6_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Debug RTC stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_RTC_STOP() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Debug RTC stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_RTC_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Debug Window Wachdog stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_WWDG_STOP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Debug Window Wachdog stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_WWDG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Debug Independent Wachdog stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_IWDG_STOP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Debug Independent Wachdog stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_IWDG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets I2C1 SMBUS timeout mode stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_I2C1_STOP() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets I2C1 SMBUS timeout mode stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_I2C1_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets I2C2 SMBUS timeout mode stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_I2C2_STOP() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets I2C2 SMBUS timeout mode stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_I2C2_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets LPTIM1 counter stopped when core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_LPTIMER_STOP() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets LPTIM1 counter stopped when core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_LPTIMER_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        APB High Freeze Register
      */
      class APB2_FZ {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Debug Timer 21 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER21_STOP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Debug Timer 21 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER21_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Debug Timer 22 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER22_STO() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Debug Timer 22 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER22_STO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            MCU Device ID Code Register
          */
          volatile reg::IDCODE IDCODE;
        };
        struct {
          volatile char _space_CR[4];
          /**
            Debug MCU Configuration Register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_APB1_FZ[8];
          /**
            APB Low Freeze Register
          */
          volatile reg::APB1_FZ APB1_FZ;
        };
        struct {
          volatile char _space_APB2_FZ[12];
          /**
            APB High Freeze Register
          */
          volatile reg::APB2_FZ APB2_FZ;
        };
      };
    };
  }
  
  extern dbgmcu::Peripheral DBG;
}