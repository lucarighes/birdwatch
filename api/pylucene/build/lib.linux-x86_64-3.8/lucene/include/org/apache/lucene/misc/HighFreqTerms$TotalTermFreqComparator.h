#ifndef org_apache_lucene_misc_HighFreqTerms$TotalTermFreqComparator_H
#define org_apache_lucene_misc_HighFreqTerms$TotalTermFreqComparator_H

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

        class HighFreqTerms$TotalTermFreqComparator : public ::java::lang::Object {
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

          explicit HighFreqTerms$TotalTermFreqComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighFreqTerms$TotalTermFreqComparator(const HighFreqTerms$TotalTermFreqComparator& obj) : ::java::lang::Object(obj) {}

          HighFreqTerms$TotalTermFreqComparator();

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
        extern PyType_Def PY_TYPE_DEF(HighFreqTerms$TotalTermFreqComparator);
        extern PyTypeObject *PY_TYPE(HighFreqTerms$TotalTermFreqComparator);

        class t_HighFreqTerms$TotalTermFreqComparator {
        public:
          PyObject_HEAD
          HighFreqTerms$TotalTermFreqComparator object;
          static PyObject *wrap_Object(const HighFreqTerms$TotalTermFreqComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
