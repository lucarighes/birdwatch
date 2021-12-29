#ifndef org_apache_lucene_search_vectorhighlight_BoundaryScanner_H
#define org_apache_lucene_search_vectorhighlight_BoundaryScanner_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class BoundaryScanner : public ::java::lang::Object {
           public:
            enum {
              mid_findEndOffset_5c64028204964247,
              mid_findStartOffset_5c64028204964247,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BoundaryScanner(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BoundaryScanner(const BoundaryScanner& obj) : ::java::lang::Object(obj) {}

            jint findEndOffset(const ::java::lang::StringBuilder &, jint) const;
            jint findStartOffset(const ::java::lang::StringBuilder &, jint) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(BoundaryScanner);
          extern PyTypeObject *PY_TYPE(BoundaryScanner);

          class t_BoundaryScanner {
          public:
            PyObject_HEAD
            BoundaryScanner object;
            static PyObject *wrap_Object(const BoundaryScanner&);
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
