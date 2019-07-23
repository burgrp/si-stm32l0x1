namespace target {
  namespace i2c {
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
          Gets Peripheral enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Peripheral enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets TX Interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets TX Interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets RX Interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets RX Interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Address match interrupt enable (slave only)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADDRIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Address match interrupt enable (slave only)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADDRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Not acknowledge received interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNACKIE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Not acknowledge received interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNACKIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets STOP detection Interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTOPIE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets STOP detection Interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTOPIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Transfer Complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Transfer Complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Error interrupts enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRIE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Error interrupts enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Digital noise filter
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDNF() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Digital noise filter
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDNF(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Analog noise filter OFF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getANFOFF() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Analog noise filter OFF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setANFOFF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets DMA transmission requests enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXDMAEN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets DMA transmission requests enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXDMAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets DMA reception requests enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXDMAEN() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets DMA reception requests enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXDMAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Slave byte control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSBC() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Slave byte control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSBC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Clock stretching disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNOSTRETCH() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Clock stretching disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNOSTRETCH(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Wakeup from STOP enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUPEN() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Wakeup from STOP enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUPEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets General call enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getGCEN() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets General call enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setGCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets SMBus Host address enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSMBHEN() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets SMBus Host address enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSMBHEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets SMBus Device Default address enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSMBDEN() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets SMBus Device Default address enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSMBDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets SMBUS alert enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALERTEN() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets SMBUS alert enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALERTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets PEC enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPECEN() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets PEC enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPECEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
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
          Gets Packet error checking byte
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPECBYTE() volatile {
          return (raw & (0x1 << 26)) >> 26;
        }
        /**
          Sets Packet error checking byte
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPECBYTE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((value << 26) & (0x1 << 26));
        }
        /**
          Gets Automatic end mode (master mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAUTOEND() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets Automatic end mode (master mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAUTOEND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
        /**
          Gets NBYTES reload mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRELOAD() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets NBYTES reload mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRELOAD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets Number of bytes
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getNBYTES() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Number of bytes
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setNBYTES(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets NACK generation (slave mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNACK() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets NACK generation (slave mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNACK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Stop generation (master mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTOP() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Stop generation (master mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Start generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTART() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Start generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTART(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets 10-bit address header only read direction (master receiver mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHEAD10R() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets 10-bit address header only read direction (master receiver mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHEAD10R(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets 10-bit addressing mode (master mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADD10() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets 10-bit addressing mode (master mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADD10(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Transfer direction (master mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRD_WRN() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Transfer direction (master mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRD_WRN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Slave address bit (master mode)
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getSADD() volatile {
          return (raw & (0x3FF << 0)) >> 0;
        }
        /**
          Sets Slave address bit (master mode)
          @param value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long setSADD(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 0)) | ((value << 0) & (0x3FF << 0));
        }
      };
      
      /**
        Own address register 1
      */
      class OAR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Interface address
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getOA1() volatile {
          return (raw & (0x3FF << 0)) >> 0;
        }
        /**
          Sets Interface address
          @param value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long setOA1(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 0)) | ((value << 0) & (0x3FF << 0));
        }
        /**
          Gets Own Address 1 10-bit mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOA1MODE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Own Address 1 10-bit mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOA1MODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Own Address 1 enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOA1EN() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Own Address 1 enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOA1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        Own address register 2
      */
      class OAR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Interface address
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getOA2() volatile {
          return (raw & (0x7F << 1)) >> 1;
        }
        /**
          Sets Interface address
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setOA2(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 1)) | ((value << 1) & (0x7F << 1));
        }
        /**
          Gets Own Address 2 masks
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOA2MSK() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Own Address 2 masks
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setOA2MSK(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Own Address 2 enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOA2EN() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Own Address 2 enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOA2EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        Timing register
      */
      class TIMINGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SCL low period (master mode)
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getSCLL() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets SCL low period (master mode)
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setSCLL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets SCL high period (master mode)
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getSCLH() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets SCL high period (master mode)
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setSCLH(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets Data hold time
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSDADEL() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Data hold time
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSDADEL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Data setup time
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSCLDEL() volatile {
          return (raw & (0xF << 20)) >> 20;
        }
        /**
          Sets Data setup time
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSCLDEL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((value << 20) & (0xF << 20));
        }
        /**
          Gets Timing prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPRESC() volatile {
          return (raw & (0xF << 28)) >> 28;
        }
        /**
          Sets Timing prescaler
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPRESC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 28)) | ((value << 28) & (0xF << 28));
        }
      };
      
      /**
        Status register 1
      */
      class TIMEOUTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Bus timeout A
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getTIMEOUTA() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Bus timeout A
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setTIMEOUTA(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
        /**
          Gets Idle clock timeout detection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIDLE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Idle clock timeout detection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIDLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Clock timeout enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIMOUTEN() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Clock timeout enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIMOUTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Bus timeout B
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getTIMEOUTB() volatile {
          return (raw & (0xFFF << 16)) >> 16;
        }
        /**
          Sets Bus timeout B
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setTIMEOUTB(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 16)) | ((value << 16) & (0xFFF << 16));
        }
        /**
          Gets Extended clock timeout enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEXTEN() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Extended clock timeout enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEXTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        Interrupt and Status register
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
          Gets Address match code (Slave mode)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getADDCODE() volatile {
          return (raw & (0x7F << 17)) >> 17;
        }
        /**
          Sets Address match code (Slave mode)
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setADDCODE(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 17)) | ((value << 17) & (0x7F << 17));
        }
        /**
          Gets Transfer direction (Slave mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Transfer direction (Slave mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Bus busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBUSY() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Bus busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets SMBus alert
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALERT() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets SMBus alert
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALERT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Timeout or t_low detection flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIMEOUT() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Timeout or t_low detection flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIMEOUT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets PEC Error in reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPECERR() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets PEC Error in reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPECERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Overrun/Underrun (slave mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVR() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Overrun/Underrun (slave mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Arbitration lost
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARLO() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Arbitration lost
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARLO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Bus error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBERR() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Bus error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Transfer Complete Reload
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCR() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Transfer Complete Reload
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Transfer Complete (master mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Transfer Complete (master mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Stop detection flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTOPF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Stop detection flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTOPF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Not acknowledge received flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNACKF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Not acknowledge received flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNACKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Address matched (slave mode)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADDR() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Address matched (slave mode)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Receive data register not empty (receivers)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXNE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Receive data register not empty (receivers)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXNE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transmit interrupt status (transmitters)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXIS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transmit interrupt status (transmitters)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Transmit data register empty (transmitters)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Transmit data register empty (transmitters)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Interrupt clear register
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
          Gets Alert flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALERTCF() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Alert flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALERTCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Timeout detection flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIMOUTCF() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Timeout detection flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIMOUTCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets PEC Error flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPECCF() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets PEC Error flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPECCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Overrun/Underrun flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVRCF() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Overrun/Underrun flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVRCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Arbitration lost flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARLOCF() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Arbitration lost flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARLOCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Bus error flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBERRCF() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Bus error flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBERRCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Stop detection flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTOPCF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Stop detection flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTOPCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Not Acknowledge flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNACKCF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Not Acknowledge flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNACKCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Address Matched flag clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADDRCF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Address Matched flag clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADDRCF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
      };
      
      /**
        PEC register
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
          Gets Packet error checking register
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPEC() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Packet error checking register
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPEC(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Receive data register
      */
      class RXDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets 8-bit receive data
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getRXDATA() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets 8-bit receive data
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setRXDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Transmit data register
      */
      class TXDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets 8-bit transmit data
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getTXDATA() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets 8-bit transmit data
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setTXDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
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
          volatile char _space_OAR1[8];
          /**
            Own address register 1
          */
          volatile reg::OAR1 OAR1;
        };
        struct {
          volatile char _space_OAR2[12];
          /**
            Own address register 2
          */
          volatile reg::OAR2 OAR2;
        };
        struct {
          volatile char _space_TIMINGR[16];
          /**
            Timing register
          */
          volatile reg::TIMINGR TIMINGR;
        };
        struct {
          volatile char _space_TIMEOUTR[20];
          /**
            Status register 1
          */
          volatile reg::TIMEOUTR TIMEOUTR;
        };
        struct {
          volatile char _space_ISR[24];
          /**
            Interrupt and Status register
          */
          volatile reg::ISR ISR;
        };
        struct {
          volatile char _space_ICR[28];
          /**
            Interrupt clear register
          */
          volatile reg::ICR ICR;
        };
        struct {
          volatile char _space_PECR[32];
          /**
            PEC register
          */
          volatile reg::PECR PECR;
        };
        struct {
          volatile char _space_RXDR[36];
          /**
            Receive data register
          */
          volatile reg::RXDR RXDR;
        };
        struct {
          volatile char _space_TXDR[40];
          /**
            Transmit data register
          */
          volatile reg::TXDR TXDR;
        };
      };
    };
  }
  
  extern i2c::Peripheral I2C1;
  extern i2c::Peripheral I2C2;
  extern i2c::Peripheral I2C3;
}