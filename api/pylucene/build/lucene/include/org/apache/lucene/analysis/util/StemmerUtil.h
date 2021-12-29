#ifndef org_apache_lucene_analysis_util_StemmerUtil_H
#define org_apache_lucene_analysis_util_StemmerUtil_H

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
        namespace util {

          class StemmerUtil : public ::java::lang::Object {
           public:
            enum {
              mid_delete_644fc0bf0aa7fb26,
              mid_deleteN_16ffb1617e12e391,
              mid_endsWith_b55d00dce4b84991,
              mid_endsWith_caddca5adfc9c3e4,
              mid_startsWith_caddca5adfc9c3e4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StemmerUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StemmerUtil(const StemmerUtil& obj) : ::java::lang::Object(obj) {}

            static jint delete$(const JArray< jchar > &, jint, jint);
            static jint deleteN(const JArray< jchar > &, jint, jint, jint);
            static jboolean endsWith(const JArray< jchar > &, jint, const JArray< jchar > &);
            static jboolean endsWith(const JArray< jchar > &, jint, const ::java::lang::String &);
            static jboolean startsWith(const JArray< jchar > &, jint, const ::java::lang::String &);
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(StemmerUtil);
          extern PyTypeObject *PY_TYPE(StemmerUtil);

          class t_StemmerUtil {
          public:
            PyObject_HEAD
            StemmerUtil object;
            static PyObject *wrap_Object(const StemmerUtil&);
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
