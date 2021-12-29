#ifndef org_apache_lucene_codecs_lucene84_Lucene84PostingsReader_H
#define org_apache_lucene_codecs_lucene84_Lucene84PostingsReader_H

#include "org/apache/lucene/codecs/PostingsReaderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class IndexInput;
      }
      namespace index {
        class ImpactsEnum;
        class SegmentReadState;
        class PostingsEnum;
        class FieldInfo;
      }
      namespace codecs {
        class BlockTermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

          class Lucene84PostingsReader : public ::org::apache::lucene::codecs::PostingsReaderBase {
           public:
            enum {
              mid_init$_363fedc32cc1a1cf,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_decodeTerm_96c712031f56c3ca,
              mid_impacts_c827249ad6105c32,
              mid_init_80eb712663869aa2,
              mid_newTermState_ec21239f6d5a0c5b,
              mid_postings_07f95f4d18ad7976,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene84PostingsReader(jobject obj) : ::org::apache::lucene::codecs::PostingsReaderBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene84PostingsReader(const Lucene84PostingsReader& obj) : ::org::apache::lucene::codecs::PostingsReaderBase(obj) {}

            Lucene84PostingsReader(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            void decodeTerm(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            ::org::apache::lucene::index::ImpactsEnum impacts(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jint) const;
            void init(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::BlockTermState newTermState() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            jlong ramBytesUsed() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene84PostingsReader);
          extern PyTypeObject *PY_TYPE(Lucene84PostingsReader);

          class t_Lucene84PostingsReader {
          public:
            PyObject_HEAD
            Lucene84PostingsReader object;
            static PyObject *wrap_Object(const Lucene84PostingsReader&);
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
