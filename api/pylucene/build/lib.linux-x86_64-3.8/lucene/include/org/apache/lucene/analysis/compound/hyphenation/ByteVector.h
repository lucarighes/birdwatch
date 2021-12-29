#ifndef org_apache_lucene_analysis_compound_hyphenation_ByteVector_H
#define org_apache_lucene_analysis_compound_hyphenation_ByteVector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class ByteVector : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_9ffdf271836656c4,
                mid_init$_040c4cd0390c5aff,
                mid_init$_2a8b02a5adcbf830,
                mid_alloc_1e143afe1894d213,
                mid_capacity_9972fcc56b44e79d,
                mid_get_4d5233a30cda5878,
                mid_getArray_cf386cdb1bbd339f,
                mid_length_9972fcc56b44e79d,
                mid_put_8344e5e168439156,
                mid_trimToSize_f2cc1bce94666404,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ByteVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ByteVector(const ByteVector& obj) : ::java::lang::Object(obj) {}

              ByteVector();
              ByteVector(const JArray< jbyte > &);
              ByteVector(jint);
              ByteVector(const JArray< jbyte > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              jbyte get(jint) const;
              JArray< jbyte > getArray() const;
              jint length() const;
              void put(jint, jbyte) const;
              void trimToSize() const;
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
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(ByteVector);
            extern PyTypeObject *PY_TYPE(ByteVector);

            class t_ByteVector {
            public:
              PyObject_HEAD
              ByteVector object;
              static PyObject *wrap_Object(const ByteVector&);
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
