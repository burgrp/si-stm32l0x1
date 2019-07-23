namespace target {
  namespace aes {
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
          Gets Enable DMA management of data output phase
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAOUTEN() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Enable DMA management of data output phase
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAOUTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Enable DMA management of data input phase
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAINEN() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Enable DMA management of data input phase
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAINEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRIE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets CCF flag interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCFIE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets CCF flag interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCFIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Error clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRC() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Error clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Computation Complete Flag Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCFC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Computation Complete Flag Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCFC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets AES chaining mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCHMOD() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets AES chaining mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCHMOD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets AES operating mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMODE() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets AES operating mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Data type selection (for data in and data out to/from the cryptographic block)
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDATATYPE() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Data type selection (for data in and data out to/from the cryptographic block)
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDATATYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
        }
        /**
          Gets AES enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets AES enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
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
          Gets Write error flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRERR() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Write error flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Read error flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRDERR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Read error flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRDERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Computation complete flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Computation complete flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        data input register
      */
      class DINR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data Input Register.
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_DINR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Data Input Register.
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_DINR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        data output register
      */
      class DOUTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data output register
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_DOUTR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Data output register
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_DOUTR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        key register 0
      */
      class KEYR0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data Output Register (LSB key [31:0])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_KEYR0() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Data Output Register (LSB key [31:0])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_KEYR0(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        key register 1
      */
      class KEYR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets AES key register (key [63:32])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_KEYR1() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets AES key register (key [63:32])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_KEYR1(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        key register 2
      */
      class KEYR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets AES key register (key [95:64])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_KEYR2() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets AES key register (key [95:64])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_KEYR2(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        key register 3
      */
      class KEYR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets AES key register (MSB key [127:96])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_KEYR3() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets AES key register (MSB key [127:96])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_KEYR3(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        initialization vector register 0
      */
      class IVR0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets initialization vector register (LSB IVR [31:0])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_IVR0() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets initialization vector register (LSB IVR [31:0])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_IVR0(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        initialization vector register 1
      */
      class IVR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Initialization Vector Register (IVR [63:32])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_IVR1() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Initialization Vector Register (IVR [63:32])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_IVR1(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        initialization vector register 2
      */
      class IVR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Initialization Vector Register (IVR [95:64])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_IVR2() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Initialization Vector Register (IVR [95:64])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_IVR2(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        initialization vector register 3
      */
      class IVR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Initialization Vector Register (MSB IVR [127:96])
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getAES_IVR3() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Initialization Vector Register (MSB IVR [127:96])
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setAES_IVR3(unsigned long value) volatile {
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
          volatile char _space_DINR[8];
          /**
            data input register
          */
          volatile reg::DINR DINR;
        };
        struct {
          volatile char _space_DOUTR[12];
          /**
            data output register
          */
          volatile reg::DOUTR DOUTR;
        };
        struct {
          volatile char _space_KEYR0[16];
          /**
            key register 0
          */
          volatile reg::KEYR0 KEYR0;
        };
        struct {
          volatile char _space_KEYR1[20];
          /**
            key register 1
          */
          volatile reg::KEYR1 KEYR1;
        };
        struct {
          volatile char _space_KEYR2[24];
          /**
            key register 2
          */
          volatile reg::KEYR2 KEYR2;
        };
        struct {
          volatile char _space_KEYR3[28];
          /**
            key register 3
          */
          volatile reg::KEYR3 KEYR3;
        };
        struct {
          volatile char _space_IVR0[32];
          /**
            initialization vector register 0
          */
          volatile reg::IVR0 IVR0;
        };
        struct {
          volatile char _space_IVR1[36];
          /**
            initialization vector register 1
          */
          volatile reg::IVR1 IVR1;
        };
        struct {
          volatile char _space_IVR2[40];
          /**
            initialization vector register 2
          */
          volatile reg::IVR2 IVR2;
        };
        struct {
          volatile char _space_IVR3[44];
          /**
            initialization vector register 3
          */
          volatile reg::IVR3 IVR3;
        };
      };
    };
  }
  
  extern aes::Peripheral AES;
}