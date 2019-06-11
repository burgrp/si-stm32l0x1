namespace target {
  namespace iwdg {
    namespace reg {
      
      /**
        Key register
      */
      class KR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Key value (write only, read 0x0000)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getKEY() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Key value (write only, read 0x0000)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setKEY(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Prescaler register
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
          Gets Prescaler divider
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPR() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Prescaler divider
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        Reload register
      */
      class RLR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Watchdog counter reload value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getRL() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Watchdog counter reload value
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setRL(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        Status register
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
          Gets Watchdog counter window value update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWVU() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Watchdog counter window value update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWVU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Watchdog counter reload value update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRVU() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Watchdog counter reload value update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRVU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Watchdog prescaler value update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPVU() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Watchdog prescaler value update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPVU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Window register
      */
      class WINR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Watchdog counter window value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getWIN() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Watchdog counter window value
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setWIN(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Key register
          */
          volatile reg::KR KR;
        };
        struct {
          volatile char _space_PR[4];
          /**
            Prescaler register
          */
          volatile reg::PR PR;
        };
        struct {
          volatile char _space_RLR[8];
          /**
            Reload register
          */
          volatile reg::RLR RLR;
        };
        struct {
          volatile char _space_SR[12];
          /**
            Status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_WINR[16];
          /**
            Window register
          */
          volatile reg::WINR WINR;
        };
      };
    };
  }
  
  extern iwdg::Peripheral IWDG;
}