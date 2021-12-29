#ifndef org_apache_lucene_analysis_ja_dict_ConnectionCosts_H
#define org_apache_lucene_analysis_ja_dict_ConnectionCosts_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class ConnectionCosts;
            class BinaryDictionary$ResourceScheme;
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
        namespace ja {
          namespace dict {

            class ConnectionCosts : public ::java::lang::Object {
             public:
              enum {
                mid_init$_1548dd30612cf831,
                mid_get_57a58545eba514db,
                mid_getInstance_22ff407c8503cf78,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConnectionCosts(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConnectionCosts(const ConnectionCosts& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *FILENAME_SUFFIX;
              static ::java::lang::String *HEADER;
              static jint VERSION;

              ConnectionCosts(const ::org::apache::lucene::analysis::ja::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);

              jint get(jint, jint) const;
              static ConnectionCosts getInstance();
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
        namespace ja {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(ConnectionCosts);
            extern PyTypeObject *PY_TYPE(ConnectionCosts);

            class t_ConnectionCosts {
            public:
              PyObject_HEAD
              ConnectionCosts object;
              static PyObject *wrap_Object(const ConnectionCosts&);
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
