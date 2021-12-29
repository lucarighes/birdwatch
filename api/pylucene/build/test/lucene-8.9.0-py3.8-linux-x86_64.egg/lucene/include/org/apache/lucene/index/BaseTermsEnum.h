#ifndef org_apache_lucene_index_BaseTermsEnum_H
#define org_apache_lucene_index_BaseTermsEnum_H

#include "org/apache/lucene/index/TermsEnum.h"

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
      namespace index {
        class TermState;
      }
      namespace util {
        class AttributeSource;
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class BaseTermsEnum : public ::org::apache::lucene::index::TermsEnum {
         public:
          enum {
            mid_attributes_8fce18d62d0e145e,
            mid_seekExact_553d972fe19daaec,
            mid_seekExact_59a5c9565dacabef,
            mid_termState_774a8ebb2c222d2d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseTermsEnum(const BaseTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          ::org::apache::lucene::index::TermState termState() const;
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
        extern PyType_Def PY_TYPE_DEF(BaseTermsEnum);
        extern PyTypeObject *PY_TYPE(BaseTermsEnum);

        class t_BaseTermsEnum {
        public:
          PyObject_HEAD
          BaseTermsEnum object;
          static PyObject *wrap_Object(const BaseTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
