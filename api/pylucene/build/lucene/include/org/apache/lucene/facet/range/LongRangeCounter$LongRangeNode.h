#ifndef org_apache_lucene_facet_range_LongRangeCounter$LongRangeNode_H
#define org_apache_lucene_facet_range_LongRangeCounter$LongRangeNode_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          class LongRangeCounter$LongRangeNode;
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
      namespace facet {
        namespace range {

          class LongRangeCounter$LongRangeNode : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0903d7552625f4f4,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRangeCounter$LongRangeNode(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRangeCounter$LongRangeNode(const LongRangeCounter$LongRangeNode& obj) : ::java::lang::Object(obj) {}

            LongRangeCounter$LongRangeNode(jlong, jlong, const LongRangeCounter$LongRangeNode &, const LongRangeCounter$LongRangeNode &, jint);

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
      namespace facet {
        namespace range {
          extern PyType_Def PY_TYPE_DEF(LongRangeCounter$LongRangeNode);
          extern PyTypeObject *PY_TYPE(LongRangeCounter$LongRangeNode);

          class t_LongRangeCounter$LongRangeNode {
          public:
            PyObject_HEAD
            LongRangeCounter$LongRangeNode object;
            static PyObject *wrap_Object(const LongRangeCounter$LongRangeNode&);
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
