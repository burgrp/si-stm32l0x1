namespace target {
  namespace nvic {
    namespace reg {
      
      /**
        Interrupt Set Enable Register
      */
      class ISER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SETENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETENA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets SETENA
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setSETENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Clear Enable Register
      */
      class ICER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CLRENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRENA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets CLRENA
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setCLRENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Set-Pending Register
      */
      class ISPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SETPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETPEND() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets SETPEND
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setSETPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Clear-Pending Register
      */
      class ICPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CLRPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRPEND() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets CLRPEND
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setCLRPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Priority Register 0
      */
      class IPR0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt 0
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_0() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt 0
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_0(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt 1
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_1() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt 1
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_1(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt 2
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_2() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt 2
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_2(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt 3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_3() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt 3
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_3(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt Priority Register 1
      */
      class IPR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_4() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_4(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_5() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_5(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_6() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_6(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_7() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_7(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt Priority Register 2
      */
      class IPR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_8() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_8(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_9() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_9(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_10() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_10(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_11() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_11(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt Priority Register 3
      */
      class IPR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_12() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_12(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_13() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_13(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_14() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_14(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_15() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_15(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt Priority Register 4
      */
      class IPR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_16() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_16(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_17() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_17(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_18() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_18(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_19() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_19(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt Priority Register 5
      */
      class IPR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_20() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_20(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_21() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_21(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_22() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_22(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_23() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_23(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt Priority Register 6
      */
      class IPR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_24() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_24(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_25() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_25(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_26() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_26(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_27() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_27(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt Priority Register 7
      */
      class IPR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_28() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_28(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_29() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_29(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_30() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_30(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets priority for interrupt n
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_31() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets priority for interrupt n
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_31(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Interrupt Set Enable Register
          */
          volatile reg::ISER ISER;
        };
        struct {
          volatile char _space_ICER[128];
          /**
            Interrupt Clear Enable Register
          */
          volatile reg::ICER ICER;
        };
        struct {
          volatile char _space_ISPR[256];
          /**
            Interrupt Set-Pending Register
          */
          volatile reg::ISPR ISPR;
        };
        struct {
          volatile char _space_ICPR[384];
          /**
            Interrupt Clear-Pending Register
          */
          volatile reg::ICPR ICPR;
        };
        struct {
          volatile char _space_IPR0[768];
          /**
            Interrupt Priority Register 0
          */
          volatile reg::IPR0 IPR0;
        };
        struct {
          volatile char _space_IPR1[772];
          /**
            Interrupt Priority Register 1
          */
          volatile reg::IPR1 IPR1;
        };
        struct {
          volatile char _space_IPR2[776];
          /**
            Interrupt Priority Register 2
          */
          volatile reg::IPR2 IPR2;
        };
        struct {
          volatile char _space_IPR3[780];
          /**
            Interrupt Priority Register 3
          */
          volatile reg::IPR3 IPR3;
        };
        struct {
          volatile char _space_IPR4[784];
          /**
            Interrupt Priority Register 4
          */
          volatile reg::IPR4 IPR4;
        };
        struct {
          volatile char _space_IPR5[788];
          /**
            Interrupt Priority Register 5
          */
          volatile reg::IPR5 IPR5;
        };
        struct {
          volatile char _space_IPR6[792];
          /**
            Interrupt Priority Register 6
          */
          volatile reg::IPR6 IPR6;
        };
        struct {
          volatile char _space_IPR7[796];
          /**
            Interrupt Priority Register 7
          */
          volatile reg::IPR7 IPR7;
        };
      };
    };
  }
  
  extern nvic::Peripheral NVIC;
}