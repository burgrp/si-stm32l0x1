namespace target {
  namespace tim_21 {
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
          Gets Capture/Compare 1 interrupt enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_IE(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 interrupt enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_IE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 interrupt enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_IE() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Capture/Compare 1 interrupt enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_IE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
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
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_OF(int index) volatile {
          return (raw & (0x1 << (9 + 1 * (index - 1)))) >> (9 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 overcapture flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_OF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (9 + 1 * (index - 1)))) | ((value << (9 + 1 * (index - 1))) & (0x1 << (9 + 1 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 overcapture flag
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_OF() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Capture/Compare 1 overcapture flag
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_OF(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Capture/compare 1 interrupt flag
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_IF(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/compare 1 interrupt flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_IF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Capture/compare 1 interrupt flag
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_IF() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Capture/compare 1 interrupt flag
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_IF(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
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
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_G(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/compare 1 generation
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_G(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Capture/compare 1 generation
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_G() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Capture/compare 1 generation
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_G(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
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
        capture/compare mode register (output mode)
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
          Gets Output Compare 1 mode
          @param index in range 1..2
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOC_M(int index) volatile {
          return (raw & (0x7 << (4 + 8 * (index - 1)))) >> (4 + 8 * (index - 1));
        }
        /**
          Sets Output Compare 1 mode
          @param index in range 1..2
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setOC_M(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (4 + 8 * (index - 1)))) | ((value << (4 + 8 * (index - 1))) & (0x7 << (4 + 8 * (index - 1))));
        }
        /**
          Gets Output Compare 1 mode
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getOC_M() volatile {
          return (raw & (0x3F << 4)) >> 4;
        }
        /**
          Sets Output Compare 1 mode
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setOC_M(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 4)) | ((value << 4) & (0x3F << 4));
        }
        /**
          Gets Output Compare 1 preload enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_PE(int index) volatile {
          return (raw & (0x1 << (3 + 8 * (index - 1)))) >> (3 + 8 * (index - 1));
        }
        /**
          Sets Output Compare 1 preload enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_PE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 8 * (index - 1)))) | ((value << (3 + 8 * (index - 1))) & (0x1 << (3 + 8 * (index - 1))));
        }
        /**
          Gets Output Compare 1 preload enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_PE() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Output Compare 1 preload enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOC_PE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Output Compare 1 fast enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_FE(int index) volatile {
          return (raw & (0x1 << (2 + 8 * (index - 1)))) >> (2 + 8 * (index - 1));
        }
        /**
          Sets Output Compare 1 fast enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_FE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 8 * (index - 1)))) | ((value << (2 + 8 * (index - 1))) & (0x1 << (2 + 8 * (index - 1))));
        }
        /**
          Gets Output Compare 1 fast enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOC_FE() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets Output Compare 1 fast enable
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
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_NP(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_NP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((value << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_NP() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_NP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_P(int index) volatile {
          return (raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_P(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((value << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_P() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_P(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
        }
        /**
          Gets Capture/Compare 1 output enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_E(int index) volatile {
          return (raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_E(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_E() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 output enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_E(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
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
          Gets counter value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets counter value
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
          Gets Auto-reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Auto-reload value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setARR(unsigned long value) volatile {
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
          Gets Capture/Compare 1 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR1() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR1(unsigned long value) volatile {
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
          Gets Capture/Compare 2 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR2() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 2 value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR2(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        TIM21 option register
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
          Gets Timer21 ETR remap
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getETR_RMP() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Timer21 ETR remap
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setETR_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Timer21 TI1
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTI1_RMP() volatile {
          return (raw & (0x7 << 2)) >> 2;
        }
        /**
          Sets Timer21 TI1
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTI1_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 2)) | ((value << 2) & (0x7 << 2));
        }
        /**
          Gets Timer21 TI2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTI2_RMP() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Timer21 TI2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTI2_RMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
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
            capture/compare mode register (output mode)
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
          volatile char _space_OR[80];
          /**
            TIM21 option register
          */
          volatile reg::OR OR;
        };
      };
    };
  }
  
  extern tim_21::Peripheral TIM21;
}