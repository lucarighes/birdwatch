#ifndef org_apache_lucene_codecs_blockterms_FixedGapTermsIndexReader_H
#define org_apache_lucene_codecs_blockterms_FixedGapTermsIndexReader_H

#include "org/apache/lucene/codecs/blockterms/TermsIndexReaderBase.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class SegmentReadState;
        class FieldInfo;
      }
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase$FieldIndexEnum;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class FixedGapTermsIndexReader : public ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase {
           public:
            enum {
              mid_init$_363fedc32cc1a1cf,
              mid_close_f2cc1bce94666404,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_getFieldEnum_545426ea5d9b0f76,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_supportsOrd_8454bd5aa23fd11e,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedGapTermsIndexReader(jobject obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixedGapTermsIndexReader(const FixedGapTermsIndexReader& obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {}

            FixedGapTermsIndexReader(const ::org::apache::lucene::index::SegmentReadState &);

            void close() const;
            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase$FieldIndexEnum getFieldEnum(const ::org::apache::lucene::index::FieldInfo &) const;
            jlong ramBytesUsed() const;
            jboolean supportsOrd() const;
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
          extern PyType_Def PY_TYPE_DEF(FixedGapTermsIndexReader);
          extern PyTypeObject *PY_TYPE(FixedGapTermsIndexReader);

          class t_FixedGapTermsIndexReader {
          public:
            PyObject_HEAD
            FixedGapTermsIndexReader object;
            static PyObject *wrap_Object(const FixedGapTermsIndexReader&);
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
