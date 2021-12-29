#ifndef org_apache_lucene_misc_HighFreqTerms$DocFreqComparator_H
#define org_apache_lucene_misc_HighFreqTerms$DocFreqComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        class TermStats;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        class HighFreqTerms$DocFreqComparator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_compare_c976d962c4791643,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighFreqTerms$DocFreqComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighFreqTerms$DocFreqComparator(const HighFreqTerms$DocFreqComparator& obj) : ::java::lang::Object(obj) {}

          HighFreqTerms$DocFreqComparator();

          jint compare(const ::org::apache::lucene::misc::TermStats &, const ::org::apache::lucene::misc::TermStats &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(HighFreqTerms$DocFreqComparator);
        extern PyTypeObject *PY_TYPE(HighFreqTerms$DocFreqComparator);

        class t_HighFreqTerms$DocFreqComparator {
        public:
          PyObject_HEAD
          HighFreqTerms$DocFreqComparator object;
          static PyObject *wrap_Object(const HighFreqTerms$DocFreqComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
