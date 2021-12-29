#ifndef org_apache_lucene_search_join_BitSetProducer_H
#define org_apache_lucene_search_join_BitSetProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace util {
        class BitSet;
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
        namespace join {

          class BitSetProducer : public ::java::lang::Object {
           public:
            enum {
              mid_getBitSet_bdf8e92f0f41af8b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BitSetProducer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BitSetProducer(const BitSetProducer& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BitSet getBitSet(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(BitSetProducer);
          extern PyTypeObject *PY_TYPE(BitSetProducer);

          class t_BitSetProducer {
          public:
            PyObject_HEAD
            BitSetProducer object;
            static PyObject *wrap_Object(const BitSetProducer&);
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
