namespace target {
  namespace tim_2_3 {
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
          Gets Clock division
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCKD() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Clock division
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCKD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
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
          Gets Center-aligned mode selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCMS() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets Center-aligned mode selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCMS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets Direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
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
          Gets TI1 selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTI1S() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets TI1 selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTI1S(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
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
        /**
          Gets Capture/compare DMA selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCDS() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Capture/compare DMA selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCDS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
      };
      
      /**
        slave mode control register
      */
      class SMCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External trigger polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getETP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets External trigger polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setETP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets External clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getECE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets External clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setECE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets External trigger prescaler
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getETPS() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets External trigger prescaler
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setETPS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets External trigger filter
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getETF() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets External trigger filter
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setETF(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Master/Slave mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSM() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Master/Slave mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Trigger selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTS() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Trigger selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Slave mode selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSMS() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Slave mode selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSMS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
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
          Gets Capture/Compare 1 DMA request enable
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_DE(int index) volatile {
          return (raw & (0x1 << (9 + 1 * (index - 1)))) >> (9 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 DMA request enable
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_DE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (9 + 1 * (index - 1)))) | ((value << (9 + 1 * (index - 1))) & (0x1 << (9 + 1 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 DMA request enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_DE() volatile {
          return (raw & (0xF << 9)) >> 9;
        }
        /**
          Sets Capture/Compare 1 DMA request enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_DE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 9)) | ((value << 9) & (0xF << 9));
        }
        /**
          Gets Capture/Compare 1 interrupt enable
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_IE(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 interrupt enable
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_IE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 interrupt enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_IE() volatile {
          return (raw & (0xF << 1)) >> 1;
        }
        /**
          Sets Capture/Compare 1 interrupt enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_IE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 1)) | ((value << 1) & (0xF << 1));
        }
        /**
          Gets Trigger DMA request enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTDE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Trigger DMA request enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
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
          Gets Trigger interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Trigger interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
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
          Gets Capture/Compare 1 overcapture flag
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_OF(int index) volatile {
          return (raw & (0x1 << (9 + 1 * (index - 1)))) >> (9 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 overcapture flag
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_OF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (9 + 1 * (index - 1)))) | ((value << (9 + 1 * (index - 1))) & (0x1 << (9 + 1 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 overcapture flag
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_OF() volatile {
          return (raw & (0xF << 9)) >> 9;
        }
        /**
          Sets Capture/Compare 1 overcapture flag
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_OF(unsigned long value) volatile {
          raw = (raw & ~(0xF << 9)) | ((value << 9) & (0xF << 9));
        }
        /**
          Gets Capture/compare 1 interrupt flag
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_IF(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/compare 1 interrupt flag
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_IF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Capture/compare 1 interrupt flag
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_IF() volatile {
          return (raw & (0xF << 1)) >> 1;
        }
        /**
          Sets Capture/compare 1 interrupt flag
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_IF(unsigned long value) volatile {
          raw = (raw & ~(0xF << 1)) | ((value << 1) & (0xF << 1));
        }
        /**
          Gets Trigger interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Trigger interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
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
          Gets Capture/compare 1 generation
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_G(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/compare 1 generation
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_G(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Capture/compare 1 generation
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_G() volatile {
          return (raw & (0xF << 1)) >> 1;
        }
        /**
          Sets Capture/compare 1 generation
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_G(unsigned long value) volatile {
          raw = (raw & ~(0xF << 1)) | ((value << 1) & (0xF << 1));
        }
        /**
          Gets Trigger generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTG() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Trigger generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
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
        capture/compare mode register 1 (output mode)
      */
      class CCMR1_Output {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Output compare 1 clear enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_CE(int index) volatile {
          return (raw & (0x1 << (7 + 8 * (index - 1)))) >> (7 + 8 * (index - 1));
        }
        /**
          Sets Output compare 1 clear enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_CE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 1)))) | ((value << (7 + 8 * (index - 1))) & (0x1 << (7 + 8 * (index - 1))));
        }
        /**
          Gets Output compare 1 clear enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_CE() volatile {
          return (raw & (0x3 << 7)) >> 7;
        }
        /**
          Sets Output compare 1 clear enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOC_CE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 7)) | ((value << 7) & (0x3 << 7));
        }
        /**
          Gets Output compare 1 mode
          @param index in range 1..2
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOC_M(int index) volatile {
          return (raw & (0x7 << (4 + 8 * (index - 1)))) >> (4 + 8 * (index - 1));
        }
        /**
          Sets Output compare 1 mode
          @param index in range 1..2
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setOC_M(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (4 + 8 * (index - 1)))) | ((value << (4 + 8 * (index - 1))) & (0x7 << (4 + 8 * (index - 1))));
        }
        /**
          Gets Output compare 1 mode
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getOC_M() volatile {
          return (raw & (0x3F << 4)) >> 4;
        }
        /**
          Sets Output compare 1 mode
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setOC_M(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 4)) | ((value << 4) & (0x3F << 4));
        }
        /**
          Gets Output compare 1 preload enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_PE(int index) volatile {
          return (raw & (0x1 << (3 + 8 * (index - 1)))) >> (3 + 8 * (index - 1));
        }
        /**
          Sets Output compare 1 preload enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_PE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 8 * (index - 1)))) | ((value << (3 + 8 * (index - 1))) & (0x1 << (3 + 8 * (index - 1))));
        }
        /**
          Gets Output compare 1 preload enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_PE() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Output compare 1 preload enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOC_PE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Output compare 1 fast enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_FE(int index) volatile {
          return (raw & (0x1 << (2 + 8 * (index - 1)))) >> (2 + 8 * (index - 1));
        }
        /**
          Sets Output compare 1 fast enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_FE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 8 * (index - 1)))) | ((value << (2 + 8 * (index - 1))) & (0x1 << (2 + 8 * (index - 1))));
        }
        /**
          Gets Output compare 1 fast enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_FE() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets Output compare 1 fast enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOC_FE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets Capture/Compare 1 selection
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_S(int index) volatile {
          return (raw & (0x3 << (0 + 8 * (index - 1)))) >> (0 + 8 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 selection
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 8 * (index - 1)))) | ((value << (0 + 8 * (index - 1))) & (0x3 << (0 + 8 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_S() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_S(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        capture/compare mode register 1 (input mode)
      */
      class CCMR1_Input {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Input capture 1 filter
          @param index in range 1..2
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getIC_F(int index) volatile {
          return (raw & (0xF << (4 + 8 * (index - 1)))) >> (4 + 8 * (index - 1));
        }
        /**
          Sets Input capture 1 filter
          @param index in range 1..2
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setIC_F(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (4 + 8 * (index - 1)))) | ((value << (4 + 8 * (index - 1))) & (0xF << (4 + 8 * (index - 1))));
        }
        /**
          Gets Input capture 1 filter
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getIC_F() volatile {
          return (raw & (0xFF << 4)) >> 4;
        }
        /**
          Sets Input capture 1 filter
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setIC_F(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 4)) | ((value << 4) & (0xFF << 4));
        }
        /**
          Gets Input capture 1 prescaler
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIC_PSC(int index) volatile {
          return (raw & (0x3 << (2 + 8 * (index - 1)))) >> (2 + 8 * (index - 1));
        }
        /**
          Sets Input capture 1 prescaler
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setIC_PSC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (2 + 8 * (index - 1)))) | ((value << (2 + 8 * (index - 1))) & (0x3 << (2 + 8 * (index - 1))));
        }
        /**
          Gets Input capture 1 prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getIC_PSC() volatile {
          return (raw & (0xF << 2)) >> 2;
        }
        /**
          Sets Input capture 1 prescaler
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setIC_PSC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 2)) | ((value << 2) & (0xF << 2));
        }
        /**
          Gets Capture/Compare 1 selection
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_S(int index) volatile {
          return (raw & (0x3 << (0 + 8 * (index - 1)))) >> (0 + 8 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 selection
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 8 * (index - 1)))) | ((value << (0 + 8 * (index - 1))) & (0x3 << (0 + 8 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_S() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_S(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        capture/compare mode register 2 (output mode)
      */
      class CCMR2_Output {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Output compare 3 clear enable
          @param index in range 3..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_CE(int index) volatile {
          return (raw & (0x1 << (7 + 8 * (index - 3)))) >> (7 + 8 * (index - 3));
        }
        /**
          Sets Output compare 3 clear enable
          @param index in range 3..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_CE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 3)))) | ((value << (7 + 8 * (index - 3))) & (0x1 << (7 + 8 * (index - 3))));
        }
        /**
          Gets Output compare 3 clear enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_CE() volatile {
          return (raw & (0x3 << 7)) >> 7;
        }
        /**
          Sets Output compare 3 clear enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOC_CE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 7)) | ((value << 7) & (0x3 << 7));
        }
        /**
          Gets Output compare 3 mode
          @param index in range 3..4
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOC_M(int index) volatile {
          return (raw & (0x7 << (4 + 8 * (index - 3)))) >> (4 + 8 * (index - 3));
        }
        /**
          Sets Output compare 3 mode
          @param index in range 3..4
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setOC_M(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (4 + 8 * (index - 3)))) | ((value << (4 + 8 * (index - 3))) & (0x7 << (4 + 8 * (index - 3))));
        }
        /**
          Gets Output compare 3 mode
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getOC_M() volatile {
          return (raw & (0x3F << 4)) >> 4;
        }
        /**
          Sets Output compare 3 mode
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setOC_M(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 4)) | ((value << 4) & (0x3F << 4));
        }
        /**
          Gets Output compare 3 preload enable
          @param index in range 3..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_PE(int index) volatile {
          return (raw & (0x1 << (3 + 8 * (index - 3)))) >> (3 + 8 * (index - 3));
        }
        /**
          Sets Output compare 3 preload enable
          @param index in range 3..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_PE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 8 * (index - 3)))) | ((value << (3 + 8 * (index - 3))) & (0x1 << (3 + 8 * (index - 3))));
        }
        /**
          Gets Output compare 3 preload enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_PE() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Output compare 3 preload enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOC_PE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Output compare 3 fast enable
          @param index in range 3..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_FE(int index) volatile {
          return (raw & (0x1 << (2 + 8 * (index - 3)))) >> (2 + 8 * (index - 3));
        }
        /**
          Sets Output compare 3 fast enable
          @param index in range 3..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_FE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 8 * (index - 3)))) | ((value << (2 + 8 * (index - 3))) & (0x1 << (2 + 8 * (index - 3))));
        }
        /**
          Gets Output compare 3 fast enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_FE() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets Output compare 3 fast enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOC_FE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets Capture/Compare 3 selection
          @param index in range 3..4
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_S(int index) volatile {
          return (raw & (0x3 << (0 + 8 * (index - 3)))) >> (0 + 8 * (index - 3));
        }
        /**
          Sets Capture/Compare 3 selection
          @param index in range 3..4
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 8 * (index - 3)))) | ((value << (0 + 8 * (index - 3))) & (0x3 << (0 + 8 * (index - 3))));
        }
        /**
          Gets Capture/Compare 3 selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_S() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 3 selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_S(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        capture/compare mode register 2 (input mode)
      */
      class CCMR2_Input {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Input capture 3 filter
          @param index in range 3..4
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getIC_F(int index) volatile {
          return (raw & (0xF << (4 + 8 * (index - 3)))) >> (4 + 8 * (index - 3));
        }
        /**
          Sets Input capture 3 filter
          @param index in range 3..4
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setIC_F(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (4 + 8 * (index - 3)))) | ((value << (4 + 8 * (index - 3))) & (0xF << (4 + 8 * (index - 3))));
        }
        /**
          Gets Input capture 3 filter
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getIC_F() volatile {
          return (raw & (0xFF << 4)) >> 4;
        }
        /**
          Sets Input capture 3 filter
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setIC_F(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 4)) | ((value << 4) & (0xFF << 4));
        }
        /**
          Gets Input capture 3 prescaler
          @param index in range 3..4
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIC_PSC(int index) volatile {
          return (raw & (0x3 << (2 + 8 * (index - 3)))) >> (2 + 8 * (index - 3));
        }
        /**
          Sets Input capture 3 prescaler
          @param index in range 3..4
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setIC_PSC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (2 + 8 * (index - 3)))) | ((value << (2 + 8 * (index - 3))) & (0x3 << (2 + 8 * (index - 3))));
        }
        /**
          Gets Input capture 3 prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getIC_PSC() volatile {
          return (raw & (0xF << 2)) >> 2;
        }
        /**
          Sets Input capture 3 prescaler
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setIC_PSC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 2)) | ((value << 2) & (0xF << 2));
        }
        /**
          Gets Capture/Compare 3 selection
          @param index in range 3..4
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_S(int index) volatile {
          return (raw & (0x3 << (0 + 8 * (index - 3)))) >> (0 + 8 * (index - 3));
        }
        /**
          Sets Capture/Compare 3 selection
          @param index in range 3..4
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 8 * (index - 3)))) | ((value << (0 + 8 * (index - 3))) & (0x3 << (0 + 8 * (index - 3))));
        }
        /**
          Gets Capture/Compare 3 selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_S() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 3 selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_S(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        capture/compare enable register
      */
      class CCER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_NP(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_NP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((value << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_NP() volatile {
          return (raw & (0xF << 3)) >> 3;
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_NP(unsigned long value) volatile {
          raw = (raw & ~(0xF << 3)) | ((value << 3) & (0xF << 3));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_P(int index) volatile {
          return (raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_P(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((value << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_P() volatile {
          return (raw & (0xF << 1)) >> 1;
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_P(unsigned long value) volatile {
          raw = (raw & ~(0xF << 1)) | ((value << 1) & (0xF << 1));
        }
        /**
          Gets Capture/Compare 1 output enable
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_E(int index) volatile {
          return (raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output enable
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_E(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC_E() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 output enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC_E(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
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
          Gets High counter value (TIM2 only)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT_H() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets High counter value (TIM2 only)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCNT_H(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Low counter value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT_L() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low counter value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCNT_L(unsigned long value) volatile {
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
          Gets High Auto-reload value (TIM2 only)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR_H() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets High Auto-reload value (TIM2 only)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setARR_H(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Low Auto-reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR_L() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low Auto-reload value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setARR_L(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        capture/compare register 1
      */
      class CCR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets High Capture/Compare 1 value (TIM2 only)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR1_H() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets High Capture/Compare 1 value (TIM2 only)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR1_H(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Low Capture/Compare 1 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR1_L() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low Capture/Compare 1 value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR1_L(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        capture/compare register 2
      */
      class CCR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets High Capture/Compare 2 value (TIM2 only)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR2_H() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets High Capture/Compare 2 value (TIM2 only)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR2_H(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Low Capture/Compare 2 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR2_L() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low Capture/Compare 2 value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR2_L(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        capture/compare register 3
      */
      class CCR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets High Capture/Compare value (TIM2 only)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR3_H() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets High Capture/Compare value (TIM2 only)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR3_H(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Low Capture/Compare value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR3_L() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low Capture/Compare value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR3_L(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        capture/compare register 4
      */
      class CCR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets High Capture/Compare value (TIM2 only)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR4_H() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets High Capture/Compare value (TIM2 only)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR4_H(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Low Capture/Compare value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR4_L() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Low Capture/Compare value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR4_L(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA control register
      */
      class DCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DMA burst length
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDBL() volatile {
          return (raw & (0x1F << 8)) >> 8;
        }
        /**
          Sets DMA burst length
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDBL(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((value << 8) & (0x1F << 8));
        }
        /**
          Gets DMA base address
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDBA() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets DMA base address
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDBA(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
      };
      
      /**
        DMA address for full transfer
      */
      class DMAR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DMA register for burst accesses
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDMAB() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets DMA register for burst accesses
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDMAB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        TIM2 option register
      */
      class OR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Timer2 ETR remap
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getETR_RMP() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Timer2 ETR remap
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setETR_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets Internal trigger
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTI4_RMP() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Internal trigger
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTI4_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
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
          volatile char _space_SMCR[8];
          /**
            slave mode control register
          */
          volatile reg::SMCR SMCR;
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
          volatile char _space_CCMR1_Output[24];
          /**
            capture/compare mode register 1 (output mode)
          */
          volatile reg::CCMR1_Output CCMR1_Output;
        };
        struct {
          volatile char _space_CCMR1_Input[24];
          /**
            capture/compare mode register 1 (input mode)
          */
          volatile reg::CCMR1_Input CCMR1_Input;
        };
        struct {
          volatile char _space_CCMR2_Output[28];
          /**
            capture/compare mode register 2 (output mode)
          */
          volatile reg::CCMR2_Output CCMR2_Output;
        };
        struct {
          volatile char _space_CCMR2_Input[28];
          /**
            capture/compare mode register 2 (input mode)
          */
          volatile reg::CCMR2_Input CCMR2_Input;
        };
        struct {
          volatile char _space_CCER[32];
          /**
            capture/compare enable register
          */
          volatile reg::CCER CCER;
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
        struct {
          volatile char _space_CCR1[52];
          /**
            capture/compare register 1
          */
          volatile reg::CCR1 CCR1;
        };
        struct {
          volatile char _space_CCR2[56];
          /**
            capture/compare register 2
          */
          volatile reg::CCR2 CCR2;
        };
        struct {
          volatile char _space_CCR3[60];
          /**
            capture/compare register 3
          */
          volatile reg::CCR3 CCR3;
        };
        struct {
          volatile char _space_CCR4[64];
          /**
            capture/compare register 4
          */
          volatile reg::CCR4 CCR4;
        };
        struct {
          volatile char _space_DCR[72];
          /**
            DMA control register
          */
          volatile reg::DCR DCR;
        };
        struct {
          volatile char _space_DMAR[76];
          /**
            DMA address for full transfer
          */
          volatile reg::DMAR DMAR;
        };
        struct {
          volatile char _space_OR[80];
          /**
            TIM2 option register
          */
          volatile reg::OR OR;
        };
      };
    };
  }
  
  extern tim_2_3::Peripheral TIM2;
  extern tim_2_3::Peripheral TIM3;
}