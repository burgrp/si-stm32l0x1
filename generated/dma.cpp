namespace target {
  namespace dma {
    namespace reg {
      
      /**
        interrupt status register
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
          Gets Channel x transfer error flag (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIF(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1));
        }
        /**
          Sets Channel x transfer error flag (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((value << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
        }
        /**
          Gets Channel x transfer error flag (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getTEIF() volatile {
          return (raw & (0x7F << 3)) >> 3;
        }
        /**
          Sets Channel x transfer error flag (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setTEIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 3)) | ((value << 3) & (0x7F << 3));
        }
        /**
          Gets Channel x half transfer flag (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIF(int index) volatile {
          return (raw & (0x1 << (2 + 4 * (index - 1)))) >> (2 + 4 * (index - 1));
        }
        /**
          Sets Channel x half transfer flag (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 4 * (index - 1)))) | ((value << (2 + 4 * (index - 1))) & (0x1 << (2 + 4 * (index - 1))));
        }
        /**
          Gets Channel x half transfer flag (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getHTIF() volatile {
          return (raw & (0x7F << 2)) >> 2;
        }
        /**
          Sets Channel x half transfer flag (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setHTIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 2)) | ((value << 2) & (0x7F << 2));
        }
        /**
          Gets Channel x transfer complete flag (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIF(int index) volatile {
          return (raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1));
        }
        /**
          Sets Channel x transfer complete flag (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((value << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
        }
        /**
          Gets Channel x transfer complete flag (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getTCIF() volatile {
          return (raw & (0x7F << 1)) >> 1;
        }
        /**
          Sets Channel x transfer complete flag (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setTCIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 1)) | ((value << 1) & (0x7F << 1));
        }
        /**
          Gets Channel x global interrupt flag (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getGIF(int index) volatile {
          return (raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets Channel x global interrupt flag (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setGIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
        }
        /**
          Gets Channel x global interrupt flag (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getGIF() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets Channel x global interrupt flag (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setGIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
      };
      
      /**
        interrupt flag clear register
      */
      class IFCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel x transfer error clear (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTEIF(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1));
        }
        /**
          Sets Channel x transfer error clear (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTEIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((value << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
        }
        /**
          Gets Channel x transfer error clear (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCTEIF() volatile {
          return (raw & (0x7F << 3)) >> 3;
        }
        /**
          Sets Channel x transfer error clear (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setCTEIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 3)) | ((value << 3) & (0x7F << 3));
        }
        /**
          Gets Channel x half transfer clear (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCHTIF(int index) volatile {
          return (raw & (0x1 << (2 + 4 * (index - 1)))) >> (2 + 4 * (index - 1));
        }
        /**
          Sets Channel x half transfer clear (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCHTIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 4 * (index - 1)))) | ((value << (2 + 4 * (index - 1))) & (0x1 << (2 + 4 * (index - 1))));
        }
        /**
          Gets Channel x half transfer clear (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCHTIF() volatile {
          return (raw & (0x7F << 2)) >> 2;
        }
        /**
          Sets Channel x half transfer clear (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setCHTIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 2)) | ((value << 2) & (0x7F << 2));
        }
        /**
          Gets Channel x transfer complete clear (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTCIF(int index) volatile {
          return (raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1));
        }
        /**
          Sets Channel x transfer complete clear (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTCIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((value << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
        }
        /**
          Gets Channel x transfer complete clear (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCTCIF() volatile {
          return (raw & (0x7F << 1)) >> 1;
        }
        /**
          Sets Channel x transfer complete clear (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setCTCIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 1)) | ((value << 1) & (0x7F << 1));
        }
        /**
          Gets Channel x global interrupt clear (x = 1 ..7)
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCGIF(int index) volatile {
          return (raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets Channel x global interrupt clear (x = 1 ..7)
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCGIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
        }
        /**
          Gets Channel x global interrupt clear (x = 1 ..7)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCGIF() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets Channel x global interrupt clear (x = 1 ..7)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setCGIF(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
      };
      
      /**
        channel x configuration register
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
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Channel priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Half transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel x number of data register
      */
      class CNDTR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        channel x peripheral address register
      */
      class CPAR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x memory address register
      */
      class CMAR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x configuration register
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
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Channel priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Half transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel x number of data register
      */
      class CNDTR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        channel x peripheral address register
      */
      class CPAR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x memory address register
      */
      class CMAR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x configuration register
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
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Channel priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Half transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel x number of data register
      */
      class CNDTR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        channel x peripheral address register
      */
      class CPAR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x memory address register
      */
      class CMAR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x configuration register
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
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Channel priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Half transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel x number of data register
      */
      class CNDTR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        channel x peripheral address register
      */
      class CPAR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x memory address register
      */
      class CMAR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x configuration register
      */
      class CCR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Channel priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Half transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel x number of data register
      */
      class CNDTR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        channel x peripheral address register
      */
      class CPAR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x memory address register
      */
      class CMAR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x configuration register
      */
      class CCR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Channel priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Half transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel x number of data register
      */
      class CNDTR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        channel x peripheral address register
      */
      class CPAR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x memory address register
      */
      class CMAR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x configuration register
      */
      class CCR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Channel priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Half transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        channel x number of data register
      */
      class CNDTR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        channel x peripheral address register
      */
      class CPAR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel x memory address register
      */
      class CMAR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        channel selection register
      */
      class CSELR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DMA channel 1 selection
          @param index in range 1..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getC_S(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets DMA channel 1 selection
          @param index in range 1..7
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setC_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0xF << (0 + 4 * (index - 1))));
        }
        /**
          Gets DMA channel 1 selection
          @return value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long getC_S() volatile {
          return (raw & (0xFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DMA channel 1 selection
          @param value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long setC_S(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            interrupt status register
          */
          volatile reg::ISR ISR;
        };
        struct {
          volatile char _space_IFCR[4];
          /**
            interrupt flag clear register
          */
          volatile reg::IFCR IFCR;
        };
        struct {
          volatile char _space_CCR1[8];
          /**
            channel x configuration register
          */
          volatile reg::CCR1 CCR1;
        };
        struct {
          volatile char _space_CNDTR1[12];
          /**
            channel x number of data register
          */
          volatile reg::CNDTR1 CNDTR1;
        };
        struct {
          volatile char _space_CPAR1[16];
          /**
            channel x peripheral address register
          */
          volatile reg::CPAR1 CPAR1;
        };
        struct {
          volatile char _space_CMAR1[20];
          /**
            channel x memory address register
          */
          volatile reg::CMAR1 CMAR1;
        };
        struct {
          volatile char _space_CCR2[28];
          /**
            channel x configuration register
          */
          volatile reg::CCR2 CCR2;
        };
        struct {
          volatile char _space_CNDTR2[32];
          /**
            channel x number of data register
          */
          volatile reg::CNDTR2 CNDTR2;
        };
        struct {
          volatile char _space_CPAR2[36];
          /**
            channel x peripheral address register
          */
          volatile reg::CPAR2 CPAR2;
        };
        struct {
          volatile char _space_CMAR2[40];
          /**
            channel x memory address register
          */
          volatile reg::CMAR2 CMAR2;
        };
        struct {
          volatile char _space_CCR3[48];
          /**
            channel x configuration register
          */
          volatile reg::CCR3 CCR3;
        };
        struct {
          volatile char _space_CNDTR3[52];
          /**
            channel x number of data register
          */
          volatile reg::CNDTR3 CNDTR3;
        };
        struct {
          volatile char _space_CPAR3[56];
          /**
            channel x peripheral address register
          */
          volatile reg::CPAR3 CPAR3;
        };
        struct {
          volatile char _space_CMAR3[60];
          /**
            channel x memory address register
          */
          volatile reg::CMAR3 CMAR3;
        };
        struct {
          volatile char _space_CCR4[68];
          /**
            channel x configuration register
          */
          volatile reg::CCR4 CCR4;
        };
        struct {
          volatile char _space_CNDTR4[72];
          /**
            channel x number of data register
          */
          volatile reg::CNDTR4 CNDTR4;
        };
        struct {
          volatile char _space_CPAR4[76];
          /**
            channel x peripheral address register
          */
          volatile reg::CPAR4 CPAR4;
        };
        struct {
          volatile char _space_CMAR4[80];
          /**
            channel x memory address register
          */
          volatile reg::CMAR4 CMAR4;
        };
        struct {
          volatile char _space_CCR5[88];
          /**
            channel x configuration register
          */
          volatile reg::CCR5 CCR5;
        };
        struct {
          volatile char _space_CNDTR5[92];
          /**
            channel x number of data register
          */
          volatile reg::CNDTR5 CNDTR5;
        };
        struct {
          volatile char _space_CPAR5[96];
          /**
            channel x peripheral address register
          */
          volatile reg::CPAR5 CPAR5;
        };
        struct {
          volatile char _space_CMAR5[100];
          /**
            channel x memory address register
          */
          volatile reg::CMAR5 CMAR5;
        };
        struct {
          volatile char _space_CCR6[108];
          /**
            channel x configuration register
          */
          volatile reg::CCR6 CCR6;
        };
        struct {
          volatile char _space_CNDTR6[112];
          /**
            channel x number of data register
          */
          volatile reg::CNDTR6 CNDTR6;
        };
        struct {
          volatile char _space_CPAR6[116];
          /**
            channel x peripheral address register
          */
          volatile reg::CPAR6 CPAR6;
        };
        struct {
          volatile char _space_CMAR6[120];
          /**
            channel x memory address register
          */
          volatile reg::CMAR6 CMAR6;
        };
        struct {
          volatile char _space_CCR7[128];
          /**
            channel x configuration register
          */
          volatile reg::CCR7 CCR7;
        };
        struct {
          volatile char _space_CNDTR7[132];
          /**
            channel x number of data register
          */
          volatile reg::CNDTR7 CNDTR7;
        };
        struct {
          volatile char _space_CPAR7[136];
          /**
            channel x peripheral address register
          */
          volatile reg::CPAR7 CPAR7;
        };
        struct {
          volatile char _space_CMAR7[140];
          /**
            channel x memory address register
          */
          volatile reg::CMAR7 CMAR7;
        };
        struct {
          volatile char _space_CSELR[168];
          /**
            channel selection register
          */
          volatile reg::CSELR CSELR;
        };
      };
    };
  }
  
  extern dma::Peripheral DMA1;
}