#ifndef org_apache_lucene_codecs_memory_FSTTermsReader_H
#define org_apache_lucene_codecs_memory_FSTTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class SegmentReadState;
      }
      namespace util {
        class Accountable;
      }
      namespace codecs {
        class PostingsReaderBase;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Iterator;
  }
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
        namespace memory {

          class FSTTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_fa1d323f1cb4a96c,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_iterator_233a192dadb0917d,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_size_9972fcc56b44e79d,
              mid_terms_3976802ad88273cd,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTTermsReader(const FSTTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            FSTTermsReader(const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::PostingsReaderBase &);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Collection getChildResources() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            jint size() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        namespace memory {
          extern PyType_Def PY_TYPE_DEF(FSTTermsReader);
          extern PyTypeObject *PY_TYPE(FSTTermsReader);

          class t_FSTTermsReader {
          public:
            PyObject_HEAD
            FSTTermsReader object;
            static PyObject *wrap_Object(const FSTTermsReader&);
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
