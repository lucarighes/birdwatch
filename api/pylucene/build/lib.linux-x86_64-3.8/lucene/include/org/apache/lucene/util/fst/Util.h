#ifndef org_apache_lucene_util_fst_Util_H
#define org_apache_lucene_util_fst_Util_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class FST$BytesReader;
          class Util$TopResults;
          class FST$Arc;
          class FST;
        }
        class BytesRefBuilder;
        class IntsRefBuilder;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Long;
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
    class Writer;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Util : public ::java::lang::Object {
           public:
            enum {
              mid_get_35edc978bad5c1db,
              mid_get_01d705500f6c3d43,
              mid_getByOutput_e9bda709015233a6,
              mid_getByOutput_6d7fec9ef481143f,
              mid_readCeilArc_de5e982d3430dea1,
              mid_shortestPaths_9f906d2bf57ec184,
              mid_toBytesRef_d7ea7a8fbb8893f1,
              mid_toDot_3c8a64e005a96f7c,
              mid_toIntsRef_e1cdf5ba258a774a,
              mid_toUTF16_979bf809961b697c,
              mid_toUTF32_979bf809961b697c,
              mid_toUTF32_53dbce2d6530aa8f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util(const Util& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::BytesRef &);
            static ::java::lang::Object get(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::IntsRef &);
            static ::org::apache::lucene::util::IntsRef getByOutput(const ::org::apache::lucene::util::fst::FST &, jlong);
            static ::org::apache::lucene::util::IntsRef getByOutput(const ::org::apache::lucene::util::fst::FST &, jlong, const ::org::apache::lucene::util::fst::FST$BytesReader &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::fst::FST$Arc readCeilArc(jint, const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &);
            static ::org::apache::lucene::util::fst::Util$TopResults shortestPaths(const ::org::apache::lucene::util::fst::FST &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::java::lang::Object &, const ::java::util::Comparator &, jint, jboolean);
            static ::org::apache::lucene::util::BytesRef toBytesRef(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::BytesRefBuilder &);
            static void toDot(const ::org::apache::lucene::util::fst::FST &, const ::java::io::Writer &, jboolean, jboolean);
            static ::org::apache::lucene::util::IntsRef toIntsRef(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF16(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const ::java::lang::CharSequence &, const ::org::apache::lucene::util::IntsRefBuilder &);
            static ::org::apache::lucene::util::IntsRef toUTF32(const JArray< jchar > &, jint, jint, const ::org::apache::lucene::util::IntsRefBuilder &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Util);
          extern PyTypeObject *PY_TYPE(Util);

          class t_Util {
          public:
            PyObject_HEAD
            Util object;
            static PyObject *wrap_Object(const Util&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
