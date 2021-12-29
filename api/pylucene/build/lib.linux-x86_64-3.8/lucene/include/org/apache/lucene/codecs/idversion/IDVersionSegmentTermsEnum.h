#ifndef org_apache_lucene_codecs_idversion_IDVersionSegmentTermsEnum_H
#define org_apache_lucene_codecs_idversion_IDVersionSegmentTermsEnum_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class ImpactsEnum;
        class TermState;
        class PostingsEnum;
      }
      namespace util {
        class BytesRef;
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
        namespace idversion {

          class IDVersionSegmentTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_9972fcc56b44e79d,
              mid_getVersion_2e5ae9edcb9b072f,
              mid_impacts_db5ea3c87adc7c65,
              mid_next_7af2ea2e37ce82b8,
              mid_ord_2e5ae9edcb9b072f,
              mid_postings_bb7f8f714d51176b,
              mid_seekCeil_78824f53cd7bdb8a,
              mid_seekExact_553d972fe19daaec,
              mid_seekExact_9c778c9bce6694df,
              mid_seekExact_59a5c9565dacabef,
              mid_seekExact_70c1ccb4f1d27d02,
              mid_term_7af2ea2e37ce82b8,
              mid_termState_774a8ebb2c222d2d,
              mid_toString_db9b55ba01e03e4b,
              mid_totalTermFreq_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IDVersionSegmentTermsEnum(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IDVersionSegmentTermsEnum(const IDVersionSegmentTermsEnum& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

            jint docFreq() const;
            jlong getVersion() const;
            ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
            ::org::apache::lucene::util::BytesRef next() const;
            jlong ord() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &, jlong) const;
            ::org::apache::lucene::util::BytesRef term() const;
            ::org::apache::lucene::index::TermState termState() const;
            ::java::lang::String toString() const;
            jlong totalTermFreq() const;
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
        namespace idversion {
          extern PyType_Def PY_TYPE_DEF(IDVersionSegmentTermsEnum);
          extern PyTypeObject *PY_TYPE(IDVersionSegmentTermsEnum);

          class t_IDVersionSegmentTermsEnum {
          public:
            PyObject_HEAD
            IDVersionSegmentTermsEnum object;
            static PyObject *wrap_Object(const IDVersionSegmentTermsEnum&);
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
