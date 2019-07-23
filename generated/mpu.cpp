namespace target {
  namespace mpu {
    namespace reg {
      
      /**
        MPU type register
      */
      class MPU_TYPER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Separate flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSEPARATE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Separate flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSEPARATE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Number of MPU data regions
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDREGION() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets Number of MPU data regions
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDREGION(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets Number of MPU instruction regions
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getIREGION() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Number of MPU instruction regions
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setIREGION(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
      };
      
      /**
        MPU control register
      */
      class MPU_CTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Enables the MPU
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Enables the MPU
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Enables the operation of MPU during hard fault
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHFNMIENA() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Enables the operation of MPU during hard fault
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHFNMIENA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Enable priviliged software access to default memory map
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRIVDEFENA() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Enable priviliged software access to default memory map
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRIVDEFENA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        MPU region number register
      */
      class MPU_RNR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets MPU region
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getREGION() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets MPU region
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setREGION(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        MPU region base address register
      */
      class MPU_RBAR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets MPU region field
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREGION() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets MPU region field
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setREGION(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets MPU region number valid
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVALID() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets MPU region number valid
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVALID(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Region base address field
          @return value in range 0..134217727
        */
        __attribute__((always_inline)) unsigned long getADDR() volatile {
          return (raw & (0x7FFFFFF << 5)) >> 5;
        }
        /**
          Sets Region base address field
          @param value in range 0..134217727
        */
        __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFFF << 5)) | ((value << 5) & (0x7FFFFFF << 5));
        }
      };
      
      /**
        MPU region attribute and size register
      */
      class MPU_RASR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Region enable bit.
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Region enable bit.
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Size of the MPU protection region
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getSIZE() volatile {
          return (raw & (0x1F << 1)) >> 1;
        }
        /**
          Sets Size of the MPU protection region
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 1)) | ((value << 1) & (0x1F << 1));
        }
        /**
          Gets Subregion disable bits
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getSRD() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets Subregion disable bits
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setSRD(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets memory attribute
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getB() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets memory attribute
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets memory attribute
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getC() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets memory attribute
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Shareable memory attribute
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getS() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Shareable memory attribute
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets memory attribute
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTEX() volatile {
          return (raw & (0x7 << 19)) >> 19;
        }
        /**
          Sets memory attribute
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTEX(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 19)) | ((value << 19) & (0x7 << 19));
        }
        /**
          Gets Access permission
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getAP() volatile {
          return (raw & (0x7 << 24)) >> 24;
        }
        /**
          Sets Access permission
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setAP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 24)) | ((value << 24) & (0x7 << 24));
        }
        /**
          Gets Instruction access disable bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXN() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Instruction access disable bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            MPU type register
          */
          volatile reg::MPU_TYPER MPU_TYPER;
        };
        struct {
          volatile char _space_MPU_CTRL[4];
          /**
            MPU control register
          */
          volatile reg::MPU_CTRL MPU_CTRL;
        };
        struct {
          volatile char _space_MPU_RNR[8];
          /**
            MPU region number register
          */
          volatile reg::MPU_RNR MPU_RNR;
        };
        struct {
          volatile char _space_MPU_RBAR[12];
          /**
            MPU region base address register
          */
          volatile reg::MPU_RBAR MPU_RBAR;
        };
        struct {
          volatile char _space_MPU_RASR[16];
          /**
            MPU region attribute and size register
          */
          volatile reg::MPU_RASR MPU_RASR;
        };
      };
    };
  }
  
  extern mpu::Peripheral MPU;
}