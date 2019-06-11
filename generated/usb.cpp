namespace target {
  namespace usb {
    namespace reg {
      
      /**
        endpoint register
      */
      class EP0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        endpoint register
      */
      class EP1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        endpoint register
      */
      class EP2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        endpoint register
      */
      class EP3R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        endpoint register
      */
      class EP4R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        endpoint register
      */
      class EP5R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        endpoint register
      */
      class EP6R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        endpoint register
      */
      class EP7R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DTOG_RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DTOG_RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets STAT_RX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets STAT_RX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets SETUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SETUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets EPTYPE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets EPTYPE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets EP_KIND
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EP_KIND
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets CTR_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets CTR_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DTOG_TX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DTOG_TX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets STAT_TX
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets STAT_TX
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets EA
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EA
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        control register
      */
      class CNTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTRM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTRM() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTRM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets PMAOVRM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPMAOVRM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets PMAOVRM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPMAOVRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets ERRM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRM() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets ERRM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets WKUPM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWKUPM() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets WKUPM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWKUPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets SUSPM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSPM() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SUSPM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets RESETM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESETM() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets RESETM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESETM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets SOFM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSOFM() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets SOFM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSOFM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets ESOFM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getESOFM() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets ESOFM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setESOFM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets L1REQM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getL1REQM() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets L1REQM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setL1REQM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets L1RESUME
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getL1RESUME() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets L1RESUME
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setL1RESUME(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets RESUME
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESUME() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets RESUME
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESUME(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets FSUSP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFSUSP() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets FSUSP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets LPMODE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPMODE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets LPMODE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPMODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets PDWN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPDWN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets PDWN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPDWN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets FRES
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFRES() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets FRES
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFRES(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        interrupt status register
      */
      class ISTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CTR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets CTR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets PMAOVR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPMAOVR() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets PMAOVR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPMAOVR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets ERR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERR() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets ERR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets WKUP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWKUP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets WKUP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWKUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets SUSP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets SUSP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets RESET
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESET() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets RESET
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets SOF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSOF() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets SOF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSOF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets ESOF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getESOF() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets ESOF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setESOF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets L1REQ
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getL1REQ() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets L1REQ
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setL1REQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DIR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets DIR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets EP_ID
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEP_ID() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets EP_ID
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEP_ID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        frame number register
      */
      class FNR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RXDP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXDP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets RXDP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXDP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets RXDM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXDM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets RXDM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXDM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets LCK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLCK() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets LCK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets LSOF
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLSOF() volatile {
          return (raw & (0x3 << 11)) >> 11;
        }
        /**
          Sets LSOF
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setLSOF(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((value << 11) & (0x3 << 11));
        }
        /**
          Gets FN
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getFN() volatile {
          return (raw & (0x7FF << 0)) >> 0;
        }
        /**
          Sets FN
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setFN(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 0)) | ((value << 0) & (0x7FF << 0));
        }
      };
      
      /**
        device address
      */
      class DADDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEF() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets EF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets ADD
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getADD() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets ADD
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setADD(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
      };
      
      /**
        Buffer table address
      */
      class BTABLE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BTABLE
          @return value in range 0..8191
        */
        __attribute__((always_inline)) unsigned long getBTABLE() volatile {
          return (raw & (0x1FFF << 3)) >> 3;
        }
        /**
          Sets BTABLE
          @param value in range 0..8191
        */
        __attribute__((always_inline)) unsigned long setBTABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1FFF << 3)) | ((value << 3) & (0x1FFF << 3));
        }
      };
      
      /**
        LPM control and status register
      */
      class LPMCSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BESL
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getBESL() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets BESL
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setBESL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
        /**
          Gets REMWAKE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREMWAKE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets REMWAKE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREMWAKE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets LPMACK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPMACK() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets LPMACK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPMACK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets LPMEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPMEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets LPMEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Battery charging detector
      */
      class BCDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DPPU
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPPU() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets DPPU
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPPU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets PS2DET
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPS2DET() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets PS2DET
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPS2DET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets SDET
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSDET() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets SDET
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSDET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets PDET
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPDET() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets PDET
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPDET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets DCDET
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDCDET() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets DCDET
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDCDET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets SDEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSDEN() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets SDEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets PDEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPDEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets PDEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets DCDEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDCDEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets DCDEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDCDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets BCDEN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBCDEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets BCDEN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBCDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            endpoint register
          */
          volatile reg::EP0R EP0R;
        };
        struct {
          volatile char _space_EP1R[4];
          /**
            endpoint register
          */
          volatile reg::EP1R EP1R;
        };
        struct {
          volatile char _space_EP2R[8];
          /**
            endpoint register
          */
          volatile reg::EP2R EP2R;
        };
        struct {
          volatile char _space_EP3R[12];
          /**
            endpoint register
          */
          volatile reg::EP3R EP3R;
        };
        struct {
          volatile char _space_EP4R[16];
          /**
            endpoint register
          */
          volatile reg::EP4R EP4R;
        };
        struct {
          volatile char _space_EP5R[20];
          /**
            endpoint register
          */
          volatile reg::EP5R EP5R;
        };
        struct {
          volatile char _space_EP6R[24];
          /**
            endpoint register
          */
          volatile reg::EP6R EP6R;
        };
        struct {
          volatile char _space_EP7R[28];
          /**
            endpoint register
          */
          volatile reg::EP7R EP7R;
        };
        struct {
          volatile char _space_CNTR[64];
          /**
            control register
          */
          volatile reg::CNTR CNTR;
        };
        struct {
          volatile char _space_ISTR[68];
          /**
            interrupt status register
          */
          volatile reg::ISTR ISTR;
        };
        struct {
          volatile char _space_FNR[72];
          /**
            frame number register
          */
          volatile reg::FNR FNR;
        };
        struct {
          volatile char _space_DADDR[76];
          /**
            device address
          */
          volatile reg::DADDR DADDR;
        };
        struct {
          volatile char _space_BTABLE[80];
          /**
            Buffer table address
          */
          volatile reg::BTABLE BTABLE;
        };
        struct {
          volatile char _space_LPMCSR[84];
          /**
            LPM control and status register
          */
          volatile reg::LPMCSR LPMCSR;
        };
        struct {
          volatile char _space_BCDR[88];
          /**
            Battery charging detector
          */
          volatile reg::BCDR BCDR;
        };
      };
    };
  }
  
  extern usb::Peripheral USB_FS;
}