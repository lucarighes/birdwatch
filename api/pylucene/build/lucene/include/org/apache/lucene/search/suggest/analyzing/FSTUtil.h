#ifndef org_apache_lucene_search_suggest_analyzing_FSTUtil_H
#define org_apache_lucene_search_suggest_analyzing_FSTUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST;
        }
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        namespace suggest {
          namespace analyzing {
            class FSTUtil$Path;
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
      namespace search {
        namespace suggest {
          namespace analyzing {

            class FSTUtil : public ::java::lang::Object {
             public:
              enum {
                mid_intersectPrefixPaths_820f1c4a604223f2,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTUtil(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTUtil(const FSTUtil& obj) : ::java::lang::Object(obj) {}

              static ::java::util::List intersectPrefixPaths(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::fst::FST &);
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
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(FSTUtil);
            extern PyTypeObject *PY_TYPE(FSTUtil);

            class t_FSTUtil {
            public:
              PyObject_HEAD
              FSTUtil object;
              static PyObject *wrap_Object(const FSTUtil&);
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
