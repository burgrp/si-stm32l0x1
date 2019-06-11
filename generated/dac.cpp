namespace target {
  namespace dac {
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
          Gets DAC channel1 DMA Underrun Interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAUDRIE1() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets DAC channel1 DMA Underrun Interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAUDRIE1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets DAC channel1 DMA enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAEN1() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets DAC channel1 DMA enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAEN1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets DAC channel1 mask/amplitude selector
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMAMP1() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets DAC channel1 mask/amplitude selector
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMAMP1(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets DAC channel1 noise/triangle wave generation enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWAVE1() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets DAC channel1 noise/triangle wave generation enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWAVE1(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets DAC channel1 trigger selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTSEL1() volatile {
          return (raw & (0x7 << 3)) >> 3;
        }
        /**
          Sets DAC channel1 trigger selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTSEL1(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 3)) | ((value << 3) & (0x7 << 3));
        }
        /**
          Gets DAC channel1 trigger enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEN1() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets DAC channel1 trigger enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEN1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets DAC channel1 output buffer disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOFF1() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets DAC channel1 output buffer disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOFF1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets DAC channel1 enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN1() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets DAC channel1 enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        software trigger register
      */
      class SWTRIGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 software trigger
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWTRIG1() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets DAC channel1 software trigger
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWTRIG1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel1 12-bit right-aligned data holding register
      */
      class DHR12R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 12-bit right-aligned data
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC1DHR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 12-bit right-aligned data
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC1DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        channel1 12-bit left-aligned data holding register
      */
      class DHR12L1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 12-bit left-aligned data
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC1DHR() volatile {
          return (raw & (0xFFF << 4)) >> 4;
        }
        /**
          Sets DAC channel1 12-bit left-aligned data
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC1DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 4)) | ((value << 4) & (0xFFF << 4));
        }
      };
      
      /**
        channel1 8-bit right-aligned data holding register
      */
      class DHR8R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 8-bit right-aligned data
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDACC1DHR() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 8-bit right-aligned data
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDACC1DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        channel1 data output register
      */
      class DOR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 data output
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC1DOR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 data output
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC1DOR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
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
          Gets DAC channel1 DMA underrun flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAUDR1() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets DAC channel1 DMA underrun flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAUDR1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
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
          volatile char _space_SWTRIGR[4];
          /**
            software trigger register
          */
          volatile reg::SWTRIGR SWTRIGR;
        };
        struct {
          volatile char _space_DHR12R1[8];
          /**
            channel1 12-bit right-aligned data holding register
          */
          volatile reg::DHR12R1 DHR12R1;
        };
        struct {
          volatile char _space_DHR12L1[12];
          /**
            channel1 12-bit left-aligned data holding register
          */
          volatile reg::DHR12L1 DHR12L1;
        };
        struct {
          volatile char _space_DHR8R1[16];
          /**
            channel1 8-bit right-aligned data holding register
          */
          volatile reg::DHR8R1 DHR8R1;
        };
        struct {
          volatile char _space_DOR1[44];
          /**
            channel1 data output register
          */
          volatile reg::DOR1 DOR1;
        };
        struct {
          volatile char _space_SR[52];
          /**
            status register
          */
          volatile reg::SR SR;
        };
      };
    };
  }
  
  extern dac::Peripheral DAC;
}