namespace target {
  namespace lpusart1 {
    namespace reg {
      
      /**
        Control register 1
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
          Gets Word length
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getM(int index) volatile {
          return (raw & (0x1 << (12 + 16 * (index - 0)))) >> (12 + 16 * (index - 0));
        }
        /**
          Sets Word length
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setM(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (12 + 16 * (index - 0)))) | ((value << (12 + 16 * (index - 0))) & (0x1 << (12 + 16 * (index - 0))));
        }
        /**
          Gets Word length
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getM() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Word length
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setM(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets DEAT0
          @param index in range 0..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDEAT(int index) volatile {
          return (raw & (0x1 << (21 + 1 * (index - 0)))) >> (21 + 1 * (index - 0));
        }
        /**
          Sets DEAT0
          @param index in range 0..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDEAT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 0)))) | ((value << (21 + 1 * (index - 0))) & (0x1 << (21 + 1 * (index - 0))));
        }
        /**
          Gets DEAT0
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDEAT() volatile {
          return (raw & (0x1F << 21)) >> 21;
        }
        /**
          Sets DEAT0
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDEAT(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 21)) | ((value << 21) & (0x1F << 21));
        }
        /**
          Gets DEDT0
          @param index in range 0..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDEDT(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets DEDT0
          @param index in range 0..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDEDT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets DEDT0
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDEDT() volatile {
          return (raw & (0x1F << 16)) >> 16;
        }
        /**
          Sets DEDT0
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDEDT(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 16)) | ((value << 16) & (0x1F << 16));
        }
        /**
          Gets Character match interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMIE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Character match interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Mute mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMME() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Mute mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMME(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Receiver wakeup method
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAKE() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Receiver wakeup method
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAKE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Parity control enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPCE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Parity control enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPCE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Parity selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPS() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Parity selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets PE interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPEIE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets PE interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXEIE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Transmission complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Transmission complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets RXNE interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXNEIE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets RXNE interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXNEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets IDLE interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDLEIE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets IDLE interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDLEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transmitter enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transmitter enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Receiver enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Receiver enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets USART enable in Stop mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUESM() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets USART enable in Stop mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUESM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets USART enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets USART enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Control register 2
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
          Gets Address of the USART node
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getADD4_7() volatile {
          return (raw & (0xF << 28)) >> 28;
        }
        /**
          Sets Address of the USART node
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setADD4_7(unsigned long value) volatile {
          raw = (raw & ~(0xF << 28)) | ((value << 28) & (0xF << 28));
        }
        /**
          Gets Address of the USART node
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getADD0_3() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Address of the USART node
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setADD0_3(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Most significant bit first
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSBFIRST() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Most significant bit first
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSBFIRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets Binary data inversion
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAINV() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Binary data inversion
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAINV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets TX pin active level inversion
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXINV() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets TX pin active level inversion
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXINV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets RX pin active level inversion
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXINV() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets RX pin active level inversion
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXINV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Swap TX/RX pins
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWAP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Swap TX/RX pins
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWAP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets STOP bits
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTOP() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STOP bits
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTOP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCLKEN() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCLKEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets 7-bit Address Detection/4-bit Address Detection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADDM7() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets 7-bit Address Detection/4-bit Address Detection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADDM7(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        Control register 3
      */
      class CR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Wakeup from Stop mode interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUFIE() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets Wakeup from Stop mode interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUFIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Wakeup from Stop mode interrupt flag selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWUS() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Wakeup from Stop mode interrupt flag selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWUS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Driver enable polarity selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDEP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Driver enable polarity selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDEP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Driver enable mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Driver enable mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets DMA Disable on Reception Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDDRE() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets DMA Disable on Reception Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDDRE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Overrun Disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVRDIS() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Overrun Disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVRDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets CTS interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTSIE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets CTS interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTSIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets CTS enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTSE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets CTS enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTSE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets RTS enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTSE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets RTS enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTSE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets DMA enable transmitter
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAT() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets DMA enable transmitter
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DMA enable receiver
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAR() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DMA enable receiver
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Half-duplex selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHDSEL() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Half-duplex selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHDSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Baud rate register
      */
      class BRR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BRR
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getBRR() volatile {
          return (raw & (0xFFFFF << 0)) >> 0;
        }
        /**
          Sets BRR
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setBRR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 0)) | ((value << 0) & (0xFFFFF << 0));
        }
      };
      
      /**
        Request register
      */
      class RQR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Receive data flush request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXFRQ() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Receive data flush request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXFRQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Mute mode request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMMRQ() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Mute mode request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMMRQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Send break request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSBKRQ() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Send break request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSBKRQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Interrupt & status register
      */
      class ISR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets REACK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREACK() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets REACK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREACK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets TEACK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEACK() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets TEACK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEACK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets WUF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUF() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets WUF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets RWU
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRWU() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets RWU
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRWU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets SBKF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSBKF() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets SBKF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSBKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets CMF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMF() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets CMF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets BUSY
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBUSY() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets BUSY
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets CTS
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTS() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets CTS
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets CTSIF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTSIF() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets CTSIF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTSIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets TXE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets TXE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets TC
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets TC
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets RXNE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXNE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets RXNE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXNE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets IDLE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDLE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets IDLE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets ORE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getORE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets ORE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setORE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets NF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets NF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets FE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets FE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets PE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets PE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Interrupt flag clear register
      */
      class ICR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Wakeup from Stop mode clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUCF() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Wakeup from Stop mode clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Character match clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMCF() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Character match clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets CTS clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTSCF() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets CTS clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTSCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Transmission complete clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCCF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Transmission complete clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Idle line detected clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDLECF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Idle line detected clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDLECF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Overrun error clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getORECF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Overrun error clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setORECF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Noise detected clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNCF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Noise detected clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Framing error clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFECF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Framing error clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFECF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Parity error clear flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPECF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Parity error clear flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPECF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Receive data register
      */
      class RDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Receive data value
          @return value in range 0..511
        */
        __attribute__((always_inline)) unsigned long getRDR() volatile {
          return (raw & (0x1FF << 0)) >> 0;
        }
        /**
          Sets Receive data value
          @param value in range 0..511
        */
        __attribute__((always_inline)) unsigned long setRDR(unsigned long value) volatile {
          raw = (raw & ~(0x1FF << 0)) | ((value << 0) & (0x1FF << 0));
        }
      };
      
      /**
        Transmit data register
      */
      class TDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Transmit data value
          @return value in range 0..511
        */
        __attribute__((always_inline)) unsigned long getTDR() volatile {
          return (raw & (0x1FF << 0)) >> 0;
        }
        /**
          Sets Transmit data value
          @param value in range 0..511
        */
        __attribute__((always_inline)) unsigned long setTDR(unsigned long value) volatile {
          raw = (raw & ~(0x1FF << 0)) | ((value << 0) & (0x1FF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control register 1
          */
          volatile reg::CR1 CR1;
        };
        struct {
          volatile char _space_CR2[4];
          /**
            Control register 2
          */
          volatile reg::CR2 CR2;
        };
        struct {
          volatile char _space_CR3[8];
          /**
            Control register 3
          */
          volatile reg::CR3 CR3;
        };
        struct {
          volatile char _space_BRR[12];
          /**
            Baud rate register
          */
          volatile reg::BRR BRR;
        };
        struct {
          volatile char _space_RQR[24];
          /**
            Request register
          */
          volatile reg::RQR RQR;
        };
        struct {
          volatile char _space_ISR[28];
          /**
            Interrupt & status register
          */
          volatile reg::ISR ISR;
        };
        struct {
          volatile char _space_ICR[32];
          /**
            Interrupt flag clear register
          */
          volatile reg::ICR ICR;
        };
        struct {
          volatile char _space_RDR[36];
          /**
            Receive data register
          */
          volatile reg::RDR RDR;
        };
        struct {
          volatile char _space_TDR[40];
          /**
            Transmit data register
          */
          volatile reg::TDR TDR;
        };
      };
    };
  }
  
  extern lpusart1::Peripheral LPUSART1;
}