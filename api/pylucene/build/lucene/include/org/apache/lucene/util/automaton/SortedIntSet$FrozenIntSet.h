#ifndef org_apache_lucene_util_automaton_SortedIntSet$FrozenIntSet_H
#define org_apache_lucene_util_automaton_SortedIntSet$FrozenIntSet_H

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
      namespace util {
        namespace automaton {

          class SortedIntSet$FrozenIntSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_438c62480c481c65,
              mid_init$_11b52125bd016996,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedIntSet$FrozenIntSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedIntSet$FrozenIntSet(const SortedIntSet$FrozenIntSet& obj) : ::java::lang::Object(obj) {}

            SortedIntSet$FrozenIntSet(jint, jint);
            SortedIntSet$FrozenIntSet(const JArray< jint > &, jint, jint);

            jboolean equals(const ::java::lang::Object &) const;
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
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(SortedIntSet$FrozenIntSet);
          extern PyTypeObject *PY_TYPE(SortedIntSet$FrozenIntSet);

          class t_SortedIntSet$FrozenIntSet {
          public:
            PyObject_HEAD
            SortedIntSet$FrozenIntSet object;
            static PyObject *wrap_Object(const SortedIntSet$FrozenIntSet&);
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
