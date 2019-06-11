namespace target {
  namespace spi {
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
          Gets Bidirectional data mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBIDIMODE() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Bidirectional data mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBIDIMODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Output enable in bidirectional mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBIDIOE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Output enable in bidirectional mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBIDIOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Hardware CRC calculation enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCEN() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Hardware CRC calculation enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets CRC transfer next
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCNEXT() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets CRC transfer next
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCNEXT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Data frame format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFF() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Data frame format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Receive only
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXONLY() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Receive only
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXONLY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Software slave management
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSSM() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Software slave management
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSSM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Internal slave select
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSSI() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Internal slave select
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSSI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Frame format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSBFIRST() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Frame format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSBFIRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets SPI enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets SPI enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Baud rate control
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getBR() volatile {
          return (raw & (0x7 << 3)) >> 3;
        }
        /**
          Sets Baud rate control
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setBR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 3)) | ((value << 3) & (0x7 << 3));
        }
        /**
          Gets Master selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSTR() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Master selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Clock polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCPOL() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Clock polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCPOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Clock phase
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCPHA() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Clock phase
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCPHA(unsigned long value) volatile {
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
          Gets Rx buffer DMA enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXDMAEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Rx buffer DMA enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXDMAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Tx buffer DMA enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXDMAEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Tx buffer DMA enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXDMAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets SS output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSSOE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets SS output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSSOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Frame format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFRF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Frame format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFRF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRIE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets RX buffer not empty interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXNEIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets RX buffer not empty interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXNEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Tx buffer empty interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXEIE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Tx buffer empty interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
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
          Gets Receive buffer not empty
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXNE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Receive buffer not empty
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXNE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transmit buffer empty
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transmit buffer empty
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel side
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCHSIDE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Channel side
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCHSIDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Underrun flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUDR() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Underrun flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUDR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets CRC error flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCERR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets CRC error flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Mode fault
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMODF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Mode fault
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMODF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Overrun flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVR() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Overrun flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Busy flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBSY() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Busy flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets TI frame format error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIFRFE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets TI frame format error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIFRFE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
      };
      
      /**
        data register
      */
      class DR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Data register
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        CRC polynomial register
      */
      class CRCPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CRC polynomial register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCRCPOLY() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets CRC polynomial register
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCRCPOLY(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        RX CRC register
      */
      class RXCRCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Rx CRC register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getRxCRC() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Rx CRC register
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setRxCRC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        TX CRC register
      */
      class TXCRCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Tx CRC register
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getTxCRC() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Tx CRC register
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setTxCRC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        I2S configuration register
      */
      class I2SCFGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I2S mode selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2SMOD() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets I2S mode selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2SMOD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets I2S Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2SE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets I2S Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2SE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets I2S configuration mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getI2SCFG() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets I2S configuration mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setI2SCFG(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets PCM frame synchronization
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPCMSYNC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets PCM frame synchronization
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPCMSYNC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets I2S standard selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getI2SSTD() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets I2S standard selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setI2SSTD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Steady state clock polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCKPOL() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Steady state clock polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCKPOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data length to be transferred
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDATLEN() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Data length to be transferred
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDATLEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
        }
        /**
          Gets Channel length (number of bits per audio channel)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCHLEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel length (number of bits per audio channel)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCHLEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        I2S prescaler register
      */
      class I2SPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Master clock output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMCKOE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Master clock output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMCKOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Odd factor for the prescaler
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getODD() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Odd factor for the prescaler
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setODD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets I2S Linear prescaler
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getI2SDIV() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets I2S Linear prescaler
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setI2SDIV(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
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
          volatile char _space_SR[8];
          /**
            status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_DR[12];
          /**
            data register
          */
          volatile reg::DR DR;
        };
        struct {
          volatile char _space_CRCPR[16];
          /**
            CRC polynomial register
          */
          volatile reg::CRCPR CRCPR;
        };
        struct {
          volatile char _space_RXCRCR[20];
          /**
            RX CRC register
          */
          volatile reg::RXCRCR RXCRCR;
        };
        struct {
          volatile char _space_TXCRCR[24];
          /**
            TX CRC register
          */
          volatile reg::TXCRCR TXCRCR;
        };
        struct {
          volatile char _space_I2SCFGR[28];
          /**
            I2S configuration register
          */
          volatile reg::I2SCFGR I2SCFGR;
        };
        struct {
          volatile char _space_I2SPR[32];
          /**
            I2S prescaler register
          */
          volatile reg::I2SPR I2SPR;
        };
      };
    };
  }
  
  extern spi::Peripheral SPI1;
  extern spi::Peripheral SPI2;
}