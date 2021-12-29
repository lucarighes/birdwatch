#ifndef org_apache_lucene_search_suggest_BitsProducer_H
#define org_apache_lucene_search_suggest_BitsProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class BitsProducer : public ::java::lang::Object {
           public:
            enum {
              mid_getBits_db8655403a5e2516,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BitsProducer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BitsProducer(const BitsProducer& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::Bits getBits(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(BitsProducer);
          extern PyTypeObject *PY_TYPE(BitsProducer);

          class t_BitsProducer {
          public:
            PyObject_HEAD
            BitsProducer object;
            static PyObject *wrap_Object(const BitsProducer&);
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
