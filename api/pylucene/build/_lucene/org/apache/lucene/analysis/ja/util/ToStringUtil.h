#ifndef org_apache_lucene_analysis_ja_util_ToStringUtil_H
#define org_apache_lucene_analysis_ja_util_ToStringUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Appendable;
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
        namespace ja {
          namespace util {

            class ToStringUtil : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_getInflectedFormTranslation_9bfa75c9f141b67f,
                mid_getInflectionTypeTranslation_9bfa75c9f141b67f,
                mid_getPOSTranslation_9bfa75c9f141b67f,
                mid_getRomanization_9bfa75c9f141b67f,
                mid_getRomanization_d60e613b3148af70,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ToStringUtil(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ToStringUtil(const ToStringUtil& obj) : ::java::lang::Object(obj) {}

              ToStringUtil();

              static ::java::lang::String getInflectedFormTranslation(const ::java::lang::String &);
              static ::java::lang::String getInflectionTypeTranslation(const ::java::lang::String &);
              static ::java::lang::String getPOSTranslation(const ::java::lang::String &);
              static ::java::lang::String getRomanization(const ::java::lang::String &);
              static void getRomanization(const ::java::lang::Appendable &, const ::java::lang::CharSequence &);
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
        namespace ja {
          namespace util {
            extern PyType_Def PY_TYPE_DEF(ToStringUtil);
            extern PyTypeObject *PY_TYPE(ToStringUtil);

            class t_ToStringUtil {
            public:
              PyObject_HEAD
              ToStringUtil object;
              static PyObject *wrap_Object(const ToStringUtil&);
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
