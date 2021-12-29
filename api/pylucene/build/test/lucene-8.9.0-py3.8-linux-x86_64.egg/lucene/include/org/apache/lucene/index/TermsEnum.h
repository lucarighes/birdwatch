#ifndef org_apache_lucene_index_TermsEnum_H
#define org_apache_lucene_index_TermsEnum_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class ImpactsEnum;
        class TermState;
        class PostingsEnum;
        class TermsEnum;
      }
      namespace util {
        class BytesRefIterator;
        class AttributeSource;
        class BytesRef;
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
      namespace index {

        class TermsEnum : public ::java::lang::Object {
         public:
          enum {
            mid_attributes_8fce18d62d0e145e,
            mid_docFreq_9972fcc56b44e79d,
            mid_impacts_db5ea3c87adc7c65,
            mid_ord_2e5ae9edcb9b072f,
            mid_postings_f8f2ff623a1d384c,
            mid_postings_bb7f8f714d51176b,
            mid_seekCeil_78824f53cd7bdb8a,
            mid_seekExact_553d972fe19daaec,
            mid_seekExact_9c778c9bce6694df,
            mid_seekExact_59a5c9565dacabef,
            mid_term_7af2ea2e37ce82b8,
            mid_termState_774a8ebb2c222d2d,
            mid_totalTermFreq_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermsEnum(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermsEnum(const TermsEnum& obj) : ::java::lang::Object(obj) {}

          static TermsEnum *EMPTY;

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
          jlong ord() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::org::apache::lucene::index::TermState termState() const;
          jlong totalTermFreq() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(TermsEnum);
        extern PyTypeObject *PY_TYPE(TermsEnum);

        class t_TermsEnum {
        public:
          PyObject_HEAD
          TermsEnum object;
          static PyObject *wrap_Object(const TermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
