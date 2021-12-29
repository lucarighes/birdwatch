#ifndef org_apache_lucene_analysis_ko_util_CSVUtil_H
#define org_apache_lucene_analysis_ko_util_CSVUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace util {

            class CSVUtil : public ::java::lang::Object {
             public:
              enum {
                mid_parse_1606e23a23a4a8e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CSVUtil(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CSVUtil(const CSVUtil& obj) : ::java::lang::Object(obj) {}

              static JArray< ::java::lang::String > parse(const ::java::lang::String &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace util {
            extern PyType_Def PY_TYPE_DEF(CSVUtil);
            extern PyTypeObject *PY_TYPE(CSVUtil);

            class t_CSVUtil {
            public:
              PyObject_HEAD
              CSVUtil object;
              static PyObject *wrap_Object(const CSVUtil&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
