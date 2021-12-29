#ifndef org_apache_lucene_codecs_blockterms_BlockTermsReader_H
#define org_apache_lucene_codecs_blockterms_BlockTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class SegmentReadState;
      }
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase;
        }
        class PostingsReaderBase;
      }
      namespace util {
        class Accountable;
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
        namespace blockterms {

          class BlockTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_dccda6cf8cbcc776,
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

            explicit BlockTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockTermsReader(const BlockTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            BlockTermsReader(const ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &);

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
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(BlockTermsReader);
          extern PyTypeObject *PY_TYPE(BlockTermsReader);

          class t_BlockTermsReader {
          public:
            PyObject_HEAD
            BlockTermsReader object;
            static PyObject *wrap_Object(const BlockTermsReader&);
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
