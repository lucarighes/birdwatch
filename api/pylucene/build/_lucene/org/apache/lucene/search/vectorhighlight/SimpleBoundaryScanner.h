#ifndef org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H
#define org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H

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
  namespace lang {
    class Class;
    class Character;
    class StringBuilder;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class SimpleBoundaryScanner : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_75d35f5f59af2667,
              mid_init$_040c4cd0390c5aff,
              mid_init$_6bd37c13847148fa,
              mid_init$_d503e4aa074a3bd8,
              mid_findEndOffset_5c64028204964247,
              mid_findStartOffset_5c64028204964247,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleBoundaryScanner(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleBoundaryScanner(const SimpleBoundaryScanner& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::Character > *DEFAULT_BOUNDARY_CHARS;
            static jint DEFAULT_MAX_SCAN;

            SimpleBoundaryScanner();
            SimpleBoundaryScanner(const JArray< ::java::lang::Character > &);
            SimpleBoundaryScanner(jint);
            SimpleBoundaryScanner(jint, const JArray< ::java::lang::Character > &);
            SimpleBoundaryScanner(jint, const ::java::util::Set &);

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
          extern PyType_Def PY_TYPE_DEF(SimpleBoundaryScanner);
          extern PyTypeObject *PY_TYPE(SimpleBoundaryScanner);

          class t_SimpleBoundaryScanner {
          public:
            PyObject_HEAD
            SimpleBoundaryScanner object;
            static PyObject *wrap_Object(const SimpleBoundaryScanner&);
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
