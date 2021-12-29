#ifndef org_apache_lucene_codecs_PushPostingsWriterBase_H
#define org_apache_lucene_codecs_PushPostingsWriterBase_H

#include "org/apache/lucene/codecs/PostingsWriterBase.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class NormsProducer;
        class BlockTermState;
      }
      namespace util {
        class BytesRef;
        class FixedBitSet;
      }
      namespace index {
        class NumericDocValues;
        class FieldInfo;
        class TermsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class PushPostingsWriterBase : public ::org::apache::lucene::codecs::PostingsWriterBase {
         public:
          enum {
            mid_addPosition_4abb6de9b756bb6a,
            mid_finishDoc_f2cc1bce94666404,
            mid_finishTerm_e796bc0c61819518,
            mid_newTermState_ec21239f6d5a0c5b,
            mid_setField_747195a1c5ce5890,
            mid_startDoc_438c62480c481c65,
            mid_startTerm_9dac957b1f5708ab,
            mid_writeTerm_41dc9e7b1a45a8ed,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PushPostingsWriterBase(jobject obj) : ::org::apache::lucene::codecs::PostingsWriterBase(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PushPostingsWriterBase(const PushPostingsWriterBase& obj) : ::org::apache::lucene::codecs::PostingsWriterBase(obj) {}

          void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
          void finishDoc() const;
          void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
          ::org::apache::lucene::codecs::BlockTermState newTermState() const;
          void setField(const ::org::apache::lucene::index::FieldInfo &) const;
          void startDoc(jint, jint) const;
          void startTerm(const ::org::apache::lucene::index::NumericDocValues &) const;
          ::org::apache::lucene::codecs::BlockTermState writeTerm(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::FixedBitSet &, const ::org::apache::lucene::codecs::NormsProducer &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(PushPostingsWriterBase);
        extern PyTypeObject *PY_TYPE(PushPostingsWriterBase);

        class t_PushPostingsWriterBase {
        public:
          PyObject_HEAD
          PushPostingsWriterBase object;
          static PyObject *wrap_Object(const PushPostingsWriterBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
