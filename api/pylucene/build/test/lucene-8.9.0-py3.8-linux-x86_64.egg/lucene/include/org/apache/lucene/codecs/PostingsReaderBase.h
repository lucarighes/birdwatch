#ifndef org_apache_lucene_codecs_PostingsReaderBase_H
#define org_apache_lucene_codecs_PostingsReaderBase_H

#include "java/lang/Object.h"

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
      namespace util {
        class Accountable;
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

        class PostingsReaderBase : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_decodeTerm_96c712031f56c3ca,
            mid_impacts_c827249ad6105c32,
            mid_init_80eb712663869aa2,
            mid_newTermState_ec21239f6d5a0c5b,
            mid_postings_07f95f4d18ad7976,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsReaderBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsReaderBase(const PostingsReaderBase& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          void close() const;
          void decodeTerm(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
          ::org::apache::lucene::index::ImpactsEnum impacts(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jint) const;
          void init(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::BlockTermState newTermState() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PostingsReaderBase);
        extern PyTypeObject *PY_TYPE(PostingsReaderBase);

        class t_PostingsReaderBase {
        public:
          PyObject_HEAD
          PostingsReaderBase object;
          static PyObject *wrap_Object(const PostingsReaderBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
