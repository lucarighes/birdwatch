#ifndef org_apache_lucene_codecs_PostingsWriterBase_H
#define org_apache_lucene_codecs_PostingsWriterBase_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class DataOutput;
      }
      namespace codecs {
        class NormsProducer;
        class BlockTermState;
      }
      namespace util {
        class BytesRef;
        class FixedBitSet;
      }
      namespace index {
        class SegmentWriteState;
        class FieldInfo;
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class PostingsWriterBase : public ::java::lang::Object {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_encodeTerm_f62bffe9c51f545a,
            mid_init_4c065b7dbc1107da,
            mid_setField_747195a1c5ce5890,
            mid_writeTerm_41dc9e7b1a45a8ed,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsWriterBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsWriterBase(const PostingsWriterBase& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void encodeTerm(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
          void init(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::index::SegmentWriteState &) const;
          void setField(const ::org::apache::lucene::index::FieldInfo &) const;
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
        extern PyType_Def PY_TYPE_DEF(PostingsWriterBase);
        extern PyTypeObject *PY_TYPE(PostingsWriterBase);

        class t_PostingsWriterBase {
        public:
          PyObject_HEAD
          PostingsWriterBase object;
          static PyObject *wrap_Object(const PostingsWriterBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
