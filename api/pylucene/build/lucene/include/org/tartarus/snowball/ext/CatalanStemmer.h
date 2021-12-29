#ifndef org_tartarus_snowball_ext_CatalanStemmer_H
#define org_tartarus_snowball_ext_CatalanStemmer_H

#include "org/tartarus/snowball/SnowballProgram.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {

        class CatalanStemmer : public ::org::tartarus::snowball::SnowballProgram {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_stem_8454bd5aa23fd11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CatalanStemmer(jobject obj) : ::org::tartarus::snowball::SnowballProgram(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CatalanStemmer(const CatalanStemmer& obj) : ::org::tartarus::snowball::SnowballProgram(obj) {}

          CatalanStemmer();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean stem() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {
        extern PyType_Def PY_TYPE_DEF(CatalanStemmer);
        extern PyTypeObject *PY_TYPE(CatalanStemmer);

        class t_CatalanStemmer {
        public:
          PyObject_HEAD
          CatalanStemmer object;
          static PyObject *wrap_Object(const CatalanStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
