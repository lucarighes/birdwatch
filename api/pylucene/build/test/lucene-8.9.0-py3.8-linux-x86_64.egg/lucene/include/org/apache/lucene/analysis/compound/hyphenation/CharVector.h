#ifndef org_apache_lucene_analysis_compound_hyphenation_CharVector_H
#define org_apache_lucene_analysis_compound_hyphenation_CharVector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class CharVector;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class CharVector : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_82dffe1ba55ed767,
                mid_init$_040c4cd0390c5aff,
                mid_init$_d7b537fea0247190,
                mid_alloc_1e143afe1894d213,
                mid_capacity_9972fcc56b44e79d,
                mid_clear_f2cc1bce94666404,
                mid_clone_ae471b683dfda8bf,
                mid_get_ebc61ec1e57770d1,
                mid_getArray_e11cf13c9a887534,
                mid_length_9972fcc56b44e79d,
                mid_put_49eec491b83160ef,
                mid_trimToSize_f2cc1bce94666404,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CharVector(const CharVector& obj) : ::java::lang::Object(obj) {}

              CharVector();
              CharVector(const JArray< jchar > &);
              CharVector(jint);
              CharVector(const JArray< jchar > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              void clear() const;
              CharVector clone() const;
              jchar get(jint) const;
              JArray< jchar > getArray() const;
              jint length() const;
              void put(jint, jchar) const;
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
            extern PyType_Def PY_TYPE_DEF(CharVector);
            extern PyTypeObject *PY_TYPE(CharVector);

            class t_CharVector {
            public:
              PyObject_HEAD
              CharVector object;
              static PyObject *wrap_Object(const CharVector&);
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
