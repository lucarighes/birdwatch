#ifndef org_apache_lucene_search_grouping_DoubleRange_H
#define org_apache_lucene_search_grouping_DoubleRange_H

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
      namespace search {
        namespace grouping {

          class DoubleRange : public ::java::lang::Object {
           public:
            enum {
              mid_init$_75a41c58a4d52f7d,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_max,
              fid_min,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRange(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRange(const DoubleRange& obj) : ::java::lang::Object(obj) {}

            jdouble _get_max() const;
            void _set_max(jdouble) const;
            jdouble _get_min() const;
            void _set_min(jdouble) const;

            DoubleRange(jdouble, jdouble);

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
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(DoubleRange);
          extern PyTypeObject *PY_TYPE(DoubleRange);

          class t_DoubleRange {
          public:
            PyObject_HEAD
            DoubleRange object;
            static PyObject *wrap_Object(const DoubleRange&);
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
