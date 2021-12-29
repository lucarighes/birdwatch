#ifndef org_apache_lucene_analysis_ko_util_DictionaryBuilder_H
#define org_apache_lucene_analysis_ko_util_DictionaryBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace lang {
    class String;
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
      namespace analysis {
        namespace ko {
          namespace util {

            class DictionaryBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_build_c9b1818cce154756,
                mid_main_2fc318b999a7aba3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DictionaryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DictionaryBuilder(const DictionaryBuilder& obj) : ::java::lang::Object(obj) {}

              static void build(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const ::java::lang::String &, jboolean);
              static void main(const JArray< ::java::lang::String > &);
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
            extern PyType_Def PY_TYPE_DEF(DictionaryBuilder);
            extern PyTypeObject *PY_TYPE(DictionaryBuilder);

            class t_DictionaryBuilder {
            public:
              PyObject_HEAD
              DictionaryBuilder object;
              static PyObject *wrap_Object(const DictionaryBuilder&);
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
