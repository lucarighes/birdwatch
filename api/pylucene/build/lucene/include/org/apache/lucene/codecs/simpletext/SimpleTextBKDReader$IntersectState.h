#ifndef org_apache_lucene_codecs_simpletext_SimpleTextBKDReader$IntersectState_H
#define org_apache_lucene_codecs_simpletext_SimpleTextBKDReader$IntersectState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextBKDReader$IntersectState : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720f09d232d6bd8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextBKDReader$IntersectState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextBKDReader$IntersectState(const SimpleTextBKDReader$IntersectState& obj) : ::java::lang::Object(obj) {}

            SimpleTextBKDReader$IntersectState(const ::org::apache::lucene::store::IndexInput &, jint, jint, jint, const ::org::apache::lucene::index::PointValues$IntersectVisitor &);
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
      namespace codecs {
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextBKDReader$IntersectState);
          extern PyTypeObject *PY_TYPE(SimpleTextBKDReader$IntersectState);

          class t_SimpleTextBKDReader$IntersectState {
          public:
            PyObject_HEAD
            SimpleTextBKDReader$IntersectState object;
            static PyObject *wrap_Object(const SimpleTextBKDReader$IntersectState&);
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
