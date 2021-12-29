#ifndef org_apache_lucene_search_spell_NGramDistance_H
#define org_apache_lucene_search_spell_NGramDistance_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class StringDistance;
        }
      }
    }
  }
}
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
      namespace search {
        namespace spell {

          class NGramDistance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_040c4cd0390c5aff,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getDistance_31e45f475cca0d26,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NGramDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NGramDistance(const NGramDistance& obj) : ::java::lang::Object(obj) {}

            NGramDistance();
            NGramDistance(jint);

            jboolean equals(const ::java::lang::Object &) const;
            jfloat getDistance(const ::java::lang::String &, const ::java::lang::String &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(NGramDistance);
          extern PyTypeObject *PY_TYPE(NGramDistance);

          class t_NGramDistance {
          public:
            PyObject_HEAD
            NGramDistance object;
            static PyObject *wrap_Object(const NGramDistance&);
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
