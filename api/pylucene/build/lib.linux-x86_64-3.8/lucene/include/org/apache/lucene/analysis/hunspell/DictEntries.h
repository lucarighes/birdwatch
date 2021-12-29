#ifndef org_apache_lucene_analysis_hunspell_DictEntries_H
#define org_apache_lucene_analysis_hunspell_DictEntries_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
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
        namespace hunspell {

          class DictEntries : public ::java::lang::Object {
           public:
            enum {
              mid_getMorphologicalData_d7593acad64ef635,
              mid_getMorphologicalValues_1663c0f03fbe6124,
              mid_size_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DictEntries(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictEntries(const DictEntries& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String getMorphologicalData(jint) const;
            ::java::util::List getMorphologicalValues(jint, const ::java::lang::String &) const;
            jint size() const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(DictEntries);
          extern PyTypeObject *PY_TYPE(DictEntries);

          class t_DictEntries {
          public:
            PyObject_HEAD
            DictEntries object;
            static PyObject *wrap_Object(const DictEntries&);
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
