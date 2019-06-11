namespace target {
  namespace rcc {
    namespace reg {
      
      /**
        Clock control register
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
          Gets PLL clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDY() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets PLL clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
        /**
          Gets PLL enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLON() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets PLL enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets TC/LCD prescaler
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRTCPRE() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets TC/LCD prescaler
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRTCPRE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Clock security system on HSE enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSLSEON() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Clock security system on HSE enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSLSEON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets HSE clock bypass bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSEBYP() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets HSE clock bypass bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSEBYP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets HSE clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDY() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets HSE clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets HSE clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSEON() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets HSE clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSEON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets MSI clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSIRDY() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets MSI clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSIRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets MSI clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSION() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets MSI clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSION(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets HSI16DIVF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16DIVF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets HSI16DIVF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16DIVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets HSI16DIVEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16DIVEN() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets HSI16DIVEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16DIVEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Internal high-speed clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16RDYF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Internal high-speed clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets High-speed internal clock enable bit for some IP kernels
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16KERON() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets High-speed internal clock enable bit for some IP kernels
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16KERON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets 16 MHz high-speed internal clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16ON() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets 16 MHz high-speed internal clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16ON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Internal clock sources calibration register
      */
      class ICSCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets MSI clock trimming
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getMSITRIM() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets MSI clock trimming
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setMSITRIM(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
        /**
          Gets MSI clock calibration
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getMSICAL() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets MSI clock calibration
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setMSICAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets MSI clock ranges
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMSIRANGE() volatile {
          return (raw & (0x7 << 13)) >> 13;
        }
        /**
          Sets MSI clock ranges
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMSIRANGE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
        }
        /**
          Gets High speed internal clock trimming
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getHSI16TRIM() volatile {
          return (raw & (0x1F << 8)) >> 8;
        }
        /**
          Sets High speed internal clock trimming
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setHSI16TRIM(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((value << 8) & (0x1F << 8));
        }
        /**
          Gets nternal high speed clock calibration
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getHSI16CAL() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets nternal high speed clock calibration
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setHSI16CAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Clock recovery RC register
      */
      class CRRCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets 48 MHz HSI clock calibration
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getHSI48CAL() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets 48 MHz HSI clock calibration
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setHSI48CAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets 48MHz HSI clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets 48MHz HSI clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets 48MHz HSI clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48ON() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets 48MHz HSI clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48ON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Clock configuration register
      */
      class CFGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets APB low-speed prescaler (APB1)
          @param index in range 1..2
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPPRE(int index) volatile {
          return (raw & (0x7 << (8 + 3 * (index - 1)))) >> (8 + 3 * (index - 1));
        }
        /**
          Sets APB low-speed prescaler (APB1)
          @param index in range 1..2
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPPRE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (8 + 3 * (index - 1)))) | ((value << (8 + 3 * (index - 1))) & (0x7 << (8 + 3 * (index - 1))));
        }
        /**
          Gets APB low-speed prescaler (APB1)
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getPPRE() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets APB low-speed prescaler (APB1)
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setPPRE(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
        }
        /**
          Gets Microcontroller clock output prescaler
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMCOPRE() volatile {
          return (raw & (0x7 << 28)) >> 28;
        }
        /**
          Sets Microcontroller clock output prescaler
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMCOPRE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 28)) | ((value << 28) & (0x7 << 28));
        }
        /**
          Gets Microcontroller clock output selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMCOSEL() volatile {
          return (raw & (0x7 << 24)) >> 24;
        }
        /**
          Sets Microcontroller clock output selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMCOSEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 24)) | ((value << 24) & (0x7 << 24));
        }
        /**
          Gets PLL output division
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPLLDIV() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PLL output division
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPLLDIV(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PLL multiplication factor
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPLLMUL() volatile {
          return (raw & (0xF << 18)) >> 18;
        }
        /**
          Sets PLL multiplication factor
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPLLMUL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 18)) | ((value << 18) & (0xF << 18));
        }
        /**
          Gets PLL entry clock source
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLSRC() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets PLL entry clock source
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLSRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Wake-up from stop clock selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTOPWUCK() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Wake-up from stop clock selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTOPWUCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets AHB prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHPRE() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets AHB prescaler
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHPRE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
        /**
          Gets System clock switch status
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSWS() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets System clock switch status
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSWS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets System clock switch
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSW() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets System clock switch
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSW(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        Clock interrupt enable register
      */
      class CIER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets LSE CSS interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSLSE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets LSE CSS interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSLSE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets HSI48 ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDYIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets HSI48 ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets MSI ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSIRDYIE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets MSI ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSIRDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets PLL ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDYIE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets PLL ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets HSE ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDYIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets HSE ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets HSI16 ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16RDYIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets HSI16 ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16RDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets LSE ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDYIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets LSE ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets LSI ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDYIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets LSI ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Clock interrupt flag register
      */
      class CIFR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock Security System Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSHSEF() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Clock Security System Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSHSEF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets LSE Clock Security System Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSLSEF() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets LSE Clock Security System Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSLSEF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets HSI48 ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDYF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets HSI48 ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets MSI ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSIRDYF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets MSI ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSIRDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets PLL ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDYF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets PLL ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets HSE ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDYF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets HSE ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets HSI16 ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16RDYF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets HSI16 ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets LSE ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDYF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets LSE ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets LSI ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDYF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets LSI ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Clock interrupt clear register
      */
      class CICR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock Security System Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSHSEC() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Clock Security System Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSHSEC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets LSE Clock Security System Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSLSEC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets LSE Clock Security System Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSLSEC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets HSI48 ready Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDYC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets HSI48 ready Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets MSI ready Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSIRDYC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets MSI ready Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSIRDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets PLL ready Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDYC() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets PLL ready Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets HSE ready Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDYC() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets HSE ready Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets HSI16 ready Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI16RDYC() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets HSI16 ready Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI16RDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets LSE ready Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDYC() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets LSE ready Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets LSI ready Interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDYC() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets LSI ready Interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        GPIO reset register
      */
      class IOPRSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I/O port H reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPHRST() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets I/O port H reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPHRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets I/O port D reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPDRST() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets I/O port D reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPDRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets I/O port A reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPCRST() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets I/O port A reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPCRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets I/O port B reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPBRST() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets I/O port B reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPBRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets I/O port A reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPARST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets I/O port A reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPARST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        AHB peripheral reset register
      */
      class AHBRSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Crypto module reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRYPRST() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets Crypto module reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRYPRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets Random Number Generator module reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRNGRST() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Random Number Generator module reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRNGRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Touch Sensing reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTOUCHRST() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Touch Sensing reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTOUCHRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Test integration module reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCRST() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Test integration module reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Memory interface reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMIFRST() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Memory interface reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMIFRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets DMA reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMARST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets DMA reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMARST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        APB2 peripheral reset register
      */
      class APB2RSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DBG reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGRST() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets DBG reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets USART1 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART1RST() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets USART1 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART1RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets SPI 1 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI1RST() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets SPI 1 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI1RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets ADC interface reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCRST() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets ADC interface reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets TIM22 timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTM12RST() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets TIM22 timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTM12RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets TIM21 timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM21RST() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets TIM21 timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM21RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets System configuration controller reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYSCFGRST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets System configuration controller reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYSCFGRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        APB1 peripheral reset register
      */
      class APB1RSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I2C1 reset
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getC_RST(int index) volatile {
          return (raw & (0x1 << (21 + 1 * (index - 1)))) >> (21 + 1 * (index - 1));
        }
        /**
          Sets I2C1 reset
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setC_RST(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 1)))) | ((value << (21 + 1 * (index - 1))) & (0x1 << (21 + 1 * (index - 1))));
        }
        /**
          Gets I2C1 reset
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getC_RST() volatile {
          return (raw & (0x3 << 21)) >> 21;
        }
        /**
          Sets I2C1 reset
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setC_RST(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((value << 21) & (0x3 << 21));
        }
        /**
          Gets Low power timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPTIM1RST() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Low power timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPTIM1RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets DAC interface reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDACRST() volatile {
          return (raw & (0x1 << 29)) >> 29;
        }
        /**
          Sets DAC interface reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDACRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
        }
        /**
          Gets Power interface reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPWRRST() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Power interface reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPWRRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets Clock recovery system reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRSRST() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets Clock recovery system reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRSRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets USB reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSBRST() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets USB reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSBRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets LPUART1 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPUART1RST() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets LPUART1 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPUART1RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets UART2 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPUART12RST() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets UART2 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPUART12RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets SPI2 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI2RST() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets SPI2 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI2RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Window watchdog reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWWDRST() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Window watchdog reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWWDRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Timer 6 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM6RST() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Timer 6 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM6RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Timer2 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM2RST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Timer2 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM2RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        GPIO clock enable register
      */
      class IOPENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I/O port H clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPHEN() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets I/O port H clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPHEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets I/O port D clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPDEN() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets I/O port D clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets IO port A clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPCEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets IO port A clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets IO port B clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPBEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets IO port B clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPBEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets IO port A clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPAEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets IO port A clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        AHB peripheral clock enable register
      */
      class AHBENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Crypto clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRYPEN() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets Crypto clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRYPEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets Random Number Generator clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRNGEN() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Random Number Generator clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRNGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Touch Sensing clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTOUCHEN() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Touch Sensing clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTOUCHEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets CRC clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCEN() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets CRC clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets NVM interface clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMIFEN() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets NVM interface clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMIFEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets DMA clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets DMA clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        APB2 peripheral clock enable register
      */
      class APB2ENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIM21 timer clock enable bit
          @param index in range 21..22
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM_EN(int index) volatile {
          return (raw & (0x1 << (2 + 3 * (index - 21)))) >> (2 + 3 * (index - 21));
        }
        /**
          Sets TIM21 timer clock enable bit
          @param index in range 21..22
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM_EN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 3 * (index - 21)))) | ((value << (2 + 3 * (index - 21))) & (0x1 << (2 + 3 * (index - 21))));
        }
        /**
          Gets TIM21 timer clock enable bit
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTIM_EN() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets TIM21 timer clock enable bit
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTIM_EN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets DBG clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGEN() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets DBG clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets USART1 clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART1EN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets USART1 clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets SPI1 clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI1EN() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets SPI1 clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets ADC clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCEN() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets ADC clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets MiFaRe Firewall clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMIFIEN() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets MiFaRe Firewall clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMIFIEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets System configuration controller clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYSCFGEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets System configuration controller clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYSCFGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        APB1 peripheral clock enable register
      */
      class APB1ENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I2C1 clock enable bit
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getC_EN(int index) volatile {
          return (raw & (0x1 << (21 + 1 * (index - 1)))) >> (21 + 1 * (index - 1));
        }
        /**
          Sets I2C1 clock enable bit
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setC_EN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 1)))) | ((value << (21 + 1 * (index - 1))) & (0x1 << (21 + 1 * (index - 1))));
        }
        /**
          Gets I2C1 clock enable bit
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getC_EN() volatile {
          return (raw & (0x3 << 21)) >> 21;
        }
        /**
          Sets I2C1 clock enable bit
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setC_EN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((value << 21) & (0x3 << 21));
        }
        /**
          Gets Low power timer clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPTIM1EN() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Low power timer clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPTIM1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets DAC interface clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDACEN() volatile {
          return (raw & (0x1 << 29)) >> 29;
        }
        /**
          Sets DAC interface clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDACEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
        }
        /**
          Gets Power interface clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPWREN() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Power interface clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPWREN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets Clock recovery system clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRSEN() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets Clock recovery system clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRSEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets USB clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSBEN() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets USB clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSBEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets LPUART1 clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPUART1EN() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets LPUART1 clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPUART1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets UART2 clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART2EN() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets UART2 clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART2EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets SPI2 clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI2EN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets SPI2 clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI2EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Window watchdog clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWWDGEN() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Window watchdog clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWWDGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Timer 6 clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM6EN() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Timer 6 clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM6EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Timer2 clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM2EN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Timer2 clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM2EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        GPIO clock enable in sleep mode register
      */
      class IOPSMEN {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets IOPHSMEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPHSMEN() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets IOPHSMEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPHSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets IOPDSMEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPDSMEN() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets IOPDSMEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPDSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets IOPCSMEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPCSMEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets IOPCSMEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPCSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets IOPBSMEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPBSMEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets IOPBSMEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPBSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets IOPASMEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPASMEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets IOPASMEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPASMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        AHB peripheral clock enable in sleep mode register
      */
      class AHBSMENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Crypto clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRYPSMEN() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets Crypto clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRYPSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets Random Number Generator clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRNGSMEN() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Random Number Generator clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRNGSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Touch Sensing clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTOUCHSMEN() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Touch Sensing clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTOUCHSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets CRC clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCSMEN() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets CRC clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets SRAM interface clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSRAMSMEN() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets SRAM interface clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSRAMSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets NVM interface clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMIFSMEN() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets NVM interface clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMIFSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets DMA clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMASMEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets DMA clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMASMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        APB2 peripheral clock enable in sleep mode register
      */
      class APB2SMENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIM21 timer clock enable during sleep mode bit
          @param index in range 21..22
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM_SMEN(int index) volatile {
          return (raw & (0x1 << (2 + 3 * (index - 21)))) >> (2 + 3 * (index - 21));
        }
        /**
          Sets TIM21 timer clock enable during sleep mode bit
          @param index in range 21..22
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM_SMEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 3 * (index - 21)))) | ((value << (2 + 3 * (index - 21))) & (0x1 << (2 + 3 * (index - 21))));
        }
        /**
          Gets TIM21 timer clock enable during sleep mode bit
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTIM_SMEN() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets TIM21 timer clock enable during sleep mode bit
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTIM_SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets DBG clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGSMEN() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets DBG clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets USART1 clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART1SMEN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets USART1 clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART1SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets SPI1 clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI1SMEN() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets SPI1 clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI1SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets ADC clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCSMEN() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets ADC clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets System configuration controller clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYSCFGSMEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets System configuration controller clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYSCFGSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        APB1 peripheral clock enable in sleep mode register
      */
      class APB1SMENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I2C1 clock enable during sleep mode bit
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getC_SMEN(int index) volatile {
          return (raw & (0x1 << (21 + 1 * (index - 1)))) >> (21 + 1 * (index - 1));
        }
        /**
          Sets I2C1 clock enable during sleep mode bit
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setC_SMEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 1)))) | ((value << (21 + 1 * (index - 1))) & (0x1 << (21 + 1 * (index - 1))));
        }
        /**
          Gets I2C1 clock enable during sleep mode bit
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getC_SMEN() volatile {
          return (raw & (0x3 << 21)) >> 21;
        }
        /**
          Sets I2C1 clock enable during sleep mode bit
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setC_SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((value << 21) & (0x3 << 21));
        }
        /**
          Gets Low power timer clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPTIM1SMEN() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Low power timer clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPTIM1SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets DAC interface clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDACSMEN() volatile {
          return (raw & (0x1 << 29)) >> 29;
        }
        /**
          Sets DAC interface clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDACSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
        }
        /**
          Gets Power interface clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPWRSMEN() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Power interface clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPWRSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets Clock recovery system clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRSSMEN() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets Clock recovery system clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRSSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets USB clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSBSMEN() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets USB clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSBSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets LPUART1 clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPUART1SMEN() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets LPUART1 clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPUART1SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets UART2 clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART2SMEN() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets UART2 clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART2SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets SPI2 clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI2SMEN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets SPI2 clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI2SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Window watchdog clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWWDGSMEN() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Window watchdog clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWWDGSMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Timer 6 clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM6SMEN() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Timer 6 clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM6SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Timer2 clock enable during sleep mode bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM2SMEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Timer2 clock enable during sleep mode bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM2SMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Clock configuration register
      */
      class CCIPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets USART1SEL0
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSEL(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets USART1SEL0
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSEL(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets USART1SEL0
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSEL() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets USART1SEL0
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets 48 MHz HSI48 clock source selection bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48MSEL() volatile {
          return (raw & (0x1 << 26)) >> 26;
        }
        /**
          Sets 48 MHz HSI48 clock source selection bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48MSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((value << 26) & (0x1 << 26));
        }
        /**
          Gets Low Power Timer clock source selection bits
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPTIM1SEL1() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Low Power Timer clock source selection bits
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPTIM1SEL1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets LPTIM1SEL0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPTIM1SEL0() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets LPTIM1SEL0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPTIM1SEL0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets I2C1 clock source selection bits
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C1SEL1() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets I2C1 clock source selection bits
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C1SEL1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets I2C1SEL0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C1SEL0() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets I2C1SEL0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C1SEL0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets LPUART1 clock source selection bits
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPUART1SEL1() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets LPUART1 clock source selection bits
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPUART1SEL1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets LPUART1SEL0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPUART1SEL0() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets LPUART1SEL0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPUART1SEL0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets USART2 clock source selection bits
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART2SEL1() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets USART2 clock source selection bits
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART2SEL1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets USART2SEL0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART2SEL0() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets USART2SEL0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART2SEL0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Control and status register
      */
      class CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Low-power reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPWRSTF() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Low-power reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPWRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets Window watchdog reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWWDGRSTF() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Window watchdog reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWWDGRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets Independent watchdog reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIWDGRSTF() volatile {
          return (raw & (0x1 << 29)) >> 29;
        }
        /**
          Sets Independent watchdog reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIWDGRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
        }
        /**
          Gets Software reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSFTRSTF() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Software reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSFTRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets POR/PDR reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPORRSTF() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets POR/PDR reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPORRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets PIN reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINRSTF() volatile {
          return (raw & (0x1 << 26)) >> 26;
        }
        /**
          Sets PIN reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((value << 26) & (0x1 << 26));
        }
        /**
          Gets OBLRSTF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOBLRSTF() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets OBLRSTF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOBLRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
        /**
          Gets Remove reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRMVF() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets Remove reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRMVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets RTC software reset bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTCRST() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets RTC software reset bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTCRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets RTC clock enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTCEN() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets RTC clock enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets RTC and LCD clock source selection bits
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRTCSEL() volatile {
          return (raw & (0x3 << 16)) >> 16;
        }
        /**
          Sets RTC and LCD clock source selection bits
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRTCSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
        }
        /**
          Gets CSS on LSE failure detection flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSLSED() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets CSS on LSE failure detection flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSLSED(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets CSSLSEON
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSLSEON() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets CSSLSEON
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSLSEON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets LSEDRV
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLSEDRV() volatile {
          return (raw & (0x3 << 11)) >> 11;
        }
        /**
          Sets LSEDRV
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setLSEDRV(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((value << 11) & (0x3 << 11));
        }
        /**
          Gets External low-speed oscillator bypass bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSEBYP() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets External low-speed oscillator bypass bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSEBYP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets External low-speed oscillator ready bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDY() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets External low-speed oscillator ready bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets External low-speed oscillator enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSEON() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets External low-speed oscillator enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSEON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Internal low-speed oscillator ready bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Internal low-speed oscillator ready bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Internal low-speed oscillator enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSION() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Internal low-speed oscillator enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSION(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Clock control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_ICSCR[4];
          /**
            Internal clock sources calibration register
          */
          volatile reg::ICSCR ICSCR;
        };
        struct {
          volatile char _space_CRRCR[8];
          /**
            Clock recovery RC register
          */
          volatile reg::CRRCR CRRCR;
        };
        struct {
          volatile char _space_CFGR[12];
          /**
            Clock configuration register
          */
          volatile reg::CFGR CFGR;
        };
        struct {
          volatile char _space_CIER[16];
          /**
            Clock interrupt enable register
          */
          volatile reg::CIER CIER;
        };
        struct {
          volatile char _space_CIFR[20];
          /**
            Clock interrupt flag register
          */
          volatile reg::CIFR CIFR;
        };
        struct {
          volatile char _space_CICR[24];
          /**
            Clock interrupt clear register
          */
          volatile reg::CICR CICR;
        };
        struct {
          volatile char _space_IOPRSTR[28];
          /**
            GPIO reset register
          */
          volatile reg::IOPRSTR IOPRSTR;
        };
        struct {
          volatile char _space_AHBRSTR[32];
          /**
            AHB peripheral reset register
          */
          volatile reg::AHBRSTR AHBRSTR;
        };
        struct {
          volatile char _space_APB2RSTR[36];
          /**
            APB2 peripheral reset register
          */
          volatile reg::APB2RSTR APB2RSTR;
        };
        struct {
          volatile char _space_APB1RSTR[40];
          /**
            APB1 peripheral reset register
          */
          volatile reg::APB1RSTR APB1RSTR;
        };
        struct {
          volatile char _space_IOPENR[44];
          /**
            GPIO clock enable register
          */
          volatile reg::IOPENR IOPENR;
        };
        struct {
          volatile char _space_AHBENR[48];
          /**
            AHB peripheral clock enable register
          */
          volatile reg::AHBENR AHBENR;
        };
        struct {
          volatile char _space_APB2ENR[52];
          /**
            APB2 peripheral clock enable register
          */
          volatile reg::APB2ENR APB2ENR;
        };
        struct {
          volatile char _space_APB1ENR[56];
          /**
            APB1 peripheral clock enable register
          */
          volatile reg::APB1ENR APB1ENR;
        };
        struct {
          volatile char _space_IOPSMEN[60];
          /**
            GPIO clock enable in sleep mode register
          */
          volatile reg::IOPSMEN IOPSMEN;
        };
        struct {
          volatile char _space_AHBSMENR[64];
          /**
            AHB peripheral clock enable in sleep mode register
          */
          volatile reg::AHBSMENR AHBSMENR;
        };
        struct {
          volatile char _space_APB2SMENR[68];
          /**
            APB2 peripheral clock enable in sleep mode register
          */
          volatile reg::APB2SMENR APB2SMENR;
        };
        struct {
          volatile char _space_APB1SMENR[72];
          /**
            APB1 peripheral clock enable in sleep mode register
          */
          volatile reg::APB1SMENR APB1SMENR;
        };
        struct {
          volatile char _space_CCIPR[76];
          /**
            Clock configuration register
          */
          volatile reg::CCIPR CCIPR;
        };
        struct {
          volatile char _space_CSR[80];
          /**
            Control and status register
          */
          volatile reg::CSR CSR;
        };
      };
    };
  }
  
  extern rcc::Peripheral RCC;
}