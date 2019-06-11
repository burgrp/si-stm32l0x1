namespace target {
  namespace firewall {
    namespace reg {
      
      /**
        Code segment start address
      */
      class FIREWALL_CSSA {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets code segment start address
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getADD() volatile {
          return (raw & (0xFFFF << 8)) >> 8;
        }
        /**
          Sets code segment start address
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setADD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 8)) | ((value << 8) & (0xFFFF << 8));
        }
      };
      
      /**
        Code segment length
      */
      class FIREWALL_CSL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets code segment length
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getLENG() volatile {
          return (raw & (0x3FFF << 8)) >> 8;
        }
        /**
          Sets code segment length
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setLENG(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 8)) | ((value << 8) & (0x3FFF << 8));
        }
      };
      
      /**
        Non-volatile data segment start address
      */
      class FIREWALL_NVDSSA {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Non-volatile data segment start address
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getADD() volatile {
          return (raw & (0xFFFF << 8)) >> 8;
        }
        /**
          Sets Non-volatile data segment start address
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setADD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 8)) | ((value << 8) & (0xFFFF << 8));
        }
      };
      
      /**
        Non-volatile data segment length
      */
      class FIREWALL_NVDSL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Non-volatile data segment length
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getLENG() volatile {
          return (raw & (0x3FFF << 8)) >> 8;
        }
        /**
          Sets Non-volatile data segment length
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setLENG(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 8)) | ((value << 8) & (0x3FFF << 8));
        }
      };
      
      /**
        Volatile data segment start address
      */
      class FIREWALL_VDSSA {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Volatile data segment start address
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getADD() volatile {
          return (raw & (0x3FF << 6)) >> 6;
        }
        /**
          Sets Volatile data segment start address
          @param value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long setADD(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 6)) | ((value << 6) & (0x3FF << 6));
        }
      };
      
      /**
        Volatile data segment length
      */
      class FIREWALL_VDSL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Non-volatile data segment length
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getLENG() volatile {
          return (raw & (0x3FF << 6)) >> 6;
        }
        /**
          Sets Non-volatile data segment length
          @param value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long setLENG(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 6)) | ((value << 6) & (0x3FF << 6));
        }
      };
      
      /**
        Configuration register
      */
      class FIREWALL_CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Volatile data execution
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVDE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Volatile data execution
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Volatile data shared
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVDS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Volatile data shared
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVDS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Firewall pre alarm
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFPA() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Firewall pre alarm
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFPA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Code segment start address
          */
          volatile reg::FIREWALL_CSSA FIREWALL_CSSA;
        };
        struct {
          volatile char _space_FIREWALL_CSL[4];
          /**
            Code segment length
          */
          volatile reg::FIREWALL_CSL FIREWALL_CSL;
        };
        struct {
          volatile char _space_FIREWALL_NVDSSA[8];
          /**
            Non-volatile data segment start address
          */
          volatile reg::FIREWALL_NVDSSA FIREWALL_NVDSSA;
        };
        struct {
          volatile char _space_FIREWALL_NVDSL[12];
          /**
            Non-volatile data segment length
          */
          volatile reg::FIREWALL_NVDSL FIREWALL_NVDSL;
        };
        struct {
          volatile char _space_FIREWALL_VDSSA[16];
          /**
            Volatile data segment start address
          */
          volatile reg::FIREWALL_VDSSA FIREWALL_VDSSA;
        };
        struct {
          volatile char _space_FIREWALL_VDSL[20];
          /**
            Volatile data segment length
          */
          volatile reg::FIREWALL_VDSL FIREWALL_VDSL;
        };
        struct {
          volatile char _space_FIREWALL_CR[32];
          /**
            Configuration register
          */
          volatile reg::FIREWALL_CR FIREWALL_CR;
        };
      };
    };
  }
  
  extern firewall::Peripheral FIREWALL;
}