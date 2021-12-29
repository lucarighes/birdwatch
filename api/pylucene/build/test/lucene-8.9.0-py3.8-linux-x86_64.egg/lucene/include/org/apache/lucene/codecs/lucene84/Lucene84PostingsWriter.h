#ifndef org_apache_lucene_codecs_lucene84_Lucene84PostingsWriter_H
#define org_apache_lucene_codecs_lucene84_Lucene84PostingsWriter_H

#include "org/apache/lucene/codecs/PushPostingsWriterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class DataOutput;
      }
      namespace codecs {
        class BlockTermState;
        namespace lucene84 {
          class Lucene84PostingsFormat$IntBlockTermState;
        }
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class SegmentWriteState;
        class NumericDocValues;
        class FieldInfo;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene84 {

          class Lucene84PostingsWriter : public ::org::apache::lucene::codecs::PushPostingsWriterBase {
           public:
            enum {
              mid_init$_a108448a3f706d50,
              mid_addPosition_4abb6de9b756bb6a,
              mid_close_f2cc1bce94666404,
              mid_encodeTerm_f62bffe9c51f545a,
              mid_finishDoc_f2cc1bce94666404,
              mid_finishTerm_e796bc0c61819518,
              mid_init_4c065b7dbc1107da,
              mid_newTermState_8880b3d74c257bd4,
              mid_setField_747195a1c5ce5890,
              mid_startDoc_438c62480c481c65,
              mid_startTerm_9dac957b1f5708ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene84PostingsWriter(jobject obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene84PostingsWriter(const Lucene84PostingsWriter& obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {}

            Lucene84PostingsWriter(const ::org::apache::lucene::index::SegmentWriteState &);

            void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
            void close() const;
            void encodeTerm(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            void finishDoc() const;
            void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
            void init(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::lucene84::Lucene84PostingsFormat$IntBlockTermState newTermState() const;
            void setField(const ::org::apache::lucene::index::FieldInfo &) const;
            void startDoc(jint, jint) const;
            void startTerm(const ::org::apache::lucene::index::NumericDocValues &) const;
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
      namespace codecs {
        namespace lucene84 {
          extern PyType_Def PY_TYPE_DEF(Lucene84PostingsWriter);
          extern PyTypeObject *PY_TYPE(Lucene84PostingsWriter);

          class t_Lucene84PostingsWriter {
          public:
            PyObject_HEAD
            Lucene84PostingsWriter object;
            static PyObject *wrap_Object(const Lucene84PostingsWriter&);
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
