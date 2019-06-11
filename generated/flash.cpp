namespace target {
  namespace flash {
    namespace reg {
      
      /**
        Access control register
      */
      class ACR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Latency
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLATENCY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Latency
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLATENCY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Prefetch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRFTEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Prefetch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRFTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Flash mode during Sleep
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLEEP_PD() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Flash mode during Sleep
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLEEP_PD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Flash mode during Run
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUN_PD() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Flash mode during Run
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUN_PD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Disable Buffer
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDESAB_BUF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Disable Buffer
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDESAB_BUF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Pre-read data address
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRE_READ() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Pre-read data address
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRE_READ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
      };
      
      /**
        Program/erase control register
      */
      class PECR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets FLASH_PECR and data EEPROM lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPELOCK() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets FLASH_PECR and data EEPROM lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPELOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Program memory lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRGLOCK() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Program memory lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRGLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Option bytes block lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPTLOCK() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Option bytes block lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPTLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Program memory selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPROG() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Program memory selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPROG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data EEPROM selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data EEPROM selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Fixed time data write for Byte, Half Word and Word programming
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFTDW() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Fixed time data write for Byte, Half Word and Word programming
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFTDW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Page or Double Word erase mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERASE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Page or Double Word erase mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERASE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Half Page/Double Word programming mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFPRG() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Half Page/Double Word programming mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFPRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Parallel bank mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPARALLELBANK() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Parallel bank mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPARALLELBANK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets End of programming interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOPIE() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets End of programming interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOPIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRIE() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Launch the option byte loading
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOBL_LAUNCH() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Launch the option byte loading
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOBL_LAUNCH(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
      };
      
      /**
        Power down key register
      */
      class PDKEYR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RUN_PD in FLASH_ACR key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPDKEYR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets RUN_PD in FLASH_ACR key
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPDKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Program/erase key register
      */
      class PEKEYR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets FLASH_PEC and data EEPROM key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPEKEYR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets FLASH_PEC and data EEPROM key
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPEKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Program memory key register
      */
      class PRGKEYR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Program memory key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPRGKEYR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Program memory key
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPRGKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Option byte key register
      */
      class OPTKEYR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Option byte key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOPTKEYR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Option byte key
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setOPTKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
          Gets Write/erase operations in progress
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBSY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Write/erase operations in progress
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets End of operation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets End of operation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets End of high voltage
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENDHV() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets End of high voltage
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENDHV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Flash memory module ready after low power mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREADY() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Flash memory module ready after low power mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREADY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Write protected error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRPERR() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Write protected error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRPERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Programming alignment error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPGAERR() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Programming alignment error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPGAERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Size error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSIZERR() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Size error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSIZERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Option validity error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPTVERR() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Option validity error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPTVERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets RDERR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRDERR() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets RDERR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRDERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets NOTZEROERR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNOTZEROERR() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets NOTZEROERR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNOTZEROERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets FWWERR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFWWERR() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets FWWERR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFWWERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
      };
      
      /**
        Option byte register
      */
      class OBR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Read protection
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getRDPRT() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Read protection
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setRDPRT(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets BOR_LEV
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getBOR_LEV() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets BOR_LEV
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setBOR_LEV(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Selection of protection mode of WPR bits
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPRMOD() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Selection of protection mode of WPR bits
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPRMOD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
      };
      
      /**
        Write protection register
      */
      class WRPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write protection
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getWRP() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Write protection
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setWRP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Access control register
          */
          volatile reg::ACR ACR;
        };
        struct {
          volatile char _space_PECR[4];
          /**
            Program/erase control register
          */
          volatile reg::PECR PECR;
        };
        struct {
          volatile char _space_PDKEYR[8];
          /**
            Power down key register
          */
          volatile reg::PDKEYR PDKEYR;
        };
        struct {
          volatile char _space_PEKEYR[12];
          /**
            Program/erase key register
          */
          volatile reg::PEKEYR PEKEYR;
        };
        struct {
          volatile char _space_PRGKEYR[16];
          /**
            Program memory key register
          */
          volatile reg::PRGKEYR PRGKEYR;
        };
        struct {
          volatile char _space_OPTKEYR[20];
          /**
            Option byte key register
          */
          volatile reg::OPTKEYR OPTKEYR;
        };
        struct {
          volatile char _space_SR[24];
          /**
            Status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_OBR[28];
          /**
            Option byte register
          */
          volatile reg::OBR OBR;
        };
        struct {
          volatile char _space_WRPR[32];
          /**
            Write protection register
          */
          volatile reg::WRPR WRPR;
        };
      };
    };
  }
  
  extern flash::Peripheral FLASH;
}