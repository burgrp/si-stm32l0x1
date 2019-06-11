namespace target {
  namespace syscfg {
    namespace reg {
      
      /**
        SYSCFG configuration register 1
      */
      class CFGR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Boot mode selected by the boot pins status bits
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getBOOT_MODE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Boot mode selected by the boot pins status bits
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setBOOT_MODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory mapping selection bits
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMEM_MODE() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Memory mapping selection bits
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMEM_MODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        SYSCFG configuration register 2
      */
      class CFGR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I2C2 Fm+ drive capability enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C2_FMP() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets I2C2 Fm+ drive capability enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C2_FMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets I2C1 Fm+ drive capability enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C1_FMP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets I2C1 Fm+ drive capability enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C1_FMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Fm+ drive capability on PB9 enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB9_FMP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Fm+ drive capability on PB9 enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB9_FMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Fm+ drive capability on PB8 enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB8_FMP() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Fm+ drive capability on PB8 enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB8_FMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Fm+ drive capability on PB7 enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB7_FMP() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Fm+ drive capability on PB7 enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB7_FMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Fm+ drive capability on PB6 enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C_PB6_FMP() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Fm+ drive capability on PB6 enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C_PB6_FMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Configuration of internal VLCD rail connection to optional external capacitor
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCAPA() volatile {
          return (raw & (0x7 << 1)) >> 1;
        }
        /**
          Sets Configuration of internal VLCD rail connection to optional external capacitor
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCAPA(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 1)) | ((value << 1) & (0x7 << 1));
        }
        /**
          Gets Firewall disable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFWDISEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Firewall disable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFWDISEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        external interrupt configuration register 1
      */
      class EXTICR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI x configuration (x = 0 to 3)
          @param index in range 0..3
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0));
        }
        /**
          Sets EXTI x configuration (x = 0 to 3)
          @param index in range 0..3
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((value << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
        }
        /**
          Gets EXTI x configuration (x = 0 to 3)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI x configuration (x = 0 to 3)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        external interrupt configuration register 2
      */
      class EXTICR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI x configuration (x = 4 to 7)
          @param index in range 4..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 4)))) >> (0 + 4 * (index - 4));
        }
        /**
          Sets EXTI x configuration (x = 4 to 7)
          @param index in range 4..7
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 4)))) | ((value << (0 + 4 * (index - 4))) & (0xF << (0 + 4 * (index - 4))));
        }
        /**
          Gets EXTI x configuration (x = 4 to 7)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI x configuration (x = 4 to 7)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        external interrupt configuration register 3
      */
      class EXTICR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI x configuration (x = 8 to 11)
          @param index in range 8..11
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8));
        }
        /**
          Sets EXTI x configuration (x = 8 to 11)
          @param index in range 8..11
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((value << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
        }
        /**
          Gets EXTI x configuration (x = 8 to 11)
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI x configuration (x = 8 to 11)
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        external interrupt configuration register 4
      */
      class EXTICR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets EXTI12
          @param index in range 12..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEXTI(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 12)))) >> (0 + 4 * (index - 12));
        }
        /**
          Sets EXTI12
          @param index in range 12..15
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEXTI(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 12)))) | ((value << (0 + 4 * (index - 12))) & (0xF << (0 + 4 * (index - 12))));
        }
        /**
          Gets EXTI12
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getEXTI() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets EXTI12
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setEXTI(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        SYSCFG configuration register 3
      */
      class CFGR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets REF_CTRL lock bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREF_LOCK() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets REF_CTRL lock bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREF_LOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets VREFINT ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVREFINT_RDYF() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets VREFINT ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVREFINT_RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets VREFINT for comparator ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVREFINT_COMP_RDYF() volatile {
          return (raw & (0x1 << 29)) >> 29;
        }
        /**
          Sets VREFINT for comparator ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVREFINT_COMP_RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
        }
        /**
          Gets VREFINT for ADC ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVREFINT_ADC_RDYF() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets VREFINT for ADC ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVREFINT_ADC_RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets Sensor for ADC ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSENSOR_ADC_RDYF() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets Sensor for ADC ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSENSOR_ADC_RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets VREFINT for 48 MHz RC oscillator ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREF_RC48MHz_RDYF() volatile {
          return (raw & (0x1 << 26)) >> 26;
        }
        /**
          Sets VREFINT for 48 MHz RC oscillator ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREF_RC48MHz_RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((value << 26) & (0x1 << 26));
        }
        /**
          Gets VREFINT reference for 48 MHz RC oscillator enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENREF_RC48MHz() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets VREFINT reference for 48 MHz RC oscillator enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENREF_RC48MHz(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets VREFINT reference for comparator 2 enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENBUF_VREFINT_COMP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets VREFINT reference for comparator 2 enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENBUF_VREFINT_COMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Sensor reference for ADC enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENBUF_SENSOR_ADC() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Sensor reference for ADC enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENBUF_SENSOR_ADC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets VREFINT reference for ADC enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENBUF_BGAP_ADC() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets VREFINT reference for ADC enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENBUF_BGAP_ADC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets BGAP_ADC connection bit
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSEL_VREF_OUT() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets BGAP_ADC connection bit
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSEL_VREF_OUT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Vref Enable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN_BGAP() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Vref Enable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN_BGAP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            SYSCFG configuration register 1
          */
          volatile reg::CFGR1 CFGR1;
        };
        struct {
          volatile char _space_CFGR2[4];
          /**
            SYSCFG configuration register 2
          */
          volatile reg::CFGR2 CFGR2;
        };
        struct {
          volatile char _space_EXTICR1[8];
          /**
            external interrupt configuration register 1
          */
          volatile reg::EXTICR1 EXTICR1;
        };
        struct {
          volatile char _space_EXTICR2[12];
          /**
            external interrupt configuration register 2
          */
          volatile reg::EXTICR2 EXTICR2;
        };
        struct {
          volatile char _space_EXTICR3[16];
          /**
            external interrupt configuration register 3
          */
          volatile reg::EXTICR3 EXTICR3;
        };
        struct {
          volatile char _space_EXTICR4[20];
          /**
            external interrupt configuration register 4
          */
          volatile reg::EXTICR4 EXTICR4;
        };
        struct {
          volatile char _space_CFGR3[32];
          /**
            SYSCFG configuration register 3
          */
          volatile reg::CFGR3 CFGR3;
        };
      };
    };
  }
  
  extern syscfg::Peripheral SYSCFG;
}