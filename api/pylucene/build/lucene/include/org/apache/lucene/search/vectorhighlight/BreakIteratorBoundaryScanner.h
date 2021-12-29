#ifndef org_apache_lucene_search_vectorhighlight_BreakIteratorBoundaryScanner_H
#define org_apache_lucene_search_vectorhighlight_BreakIteratorBoundaryScanner_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class BoundaryScanner;
        }
      }
    }
  }
}
namespace java {
  namespace text {
    class BreakIterator;
  }
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

          class BreakIteratorBoundaryScanner : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a55d72120f228769,
              mid_findEndOffset_5c64028204964247,
              mid_findStartOffset_5c64028204964247,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BreakIteratorBoundaryScanner(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BreakIteratorBoundaryScanner(const BreakIteratorBoundaryScanner& obj) : ::java::lang::Object(obj) {}

            BreakIteratorBoundaryScanner(const ::java::text::BreakIterator &);

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
          extern PyType_Def PY_TYPE_DEF(BreakIteratorBoundaryScanner);
          extern PyTypeObject *PY_TYPE(BreakIteratorBoundaryScanner);

          class t_BreakIteratorBoundaryScanner {
          public:
            PyObject_HEAD
            BreakIteratorBoundaryScanner object;
            static PyObject *wrap_Object(const BreakIteratorBoundaryScanner&);
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
