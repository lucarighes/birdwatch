#ifndef org_apache_lucene_search_join_QueryBitSetProducer_H
#define org_apache_lucene_search_join_QueryBitSetProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        namespace join {
          class BitSetProducer;
        }
        class Query;
      }
      namespace util {
        class BitSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class QueryBitSetProducer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ede25bb9d48237ac,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getBitSet_bdf8e92f0f41af8b,
              mid_getQuery_cbf839a480265450,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryBitSetProducer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryBitSetProducer(const QueryBitSetProducer& obj) : ::java::lang::Object(obj) {}

            QueryBitSetProducer(const ::org::apache::lucene::search::Query &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BitSet getBitSet(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::Query getQuery() const;
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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(QueryBitSetProducer);
          extern PyTypeObject *PY_TYPE(QueryBitSetProducer);

          class t_QueryBitSetProducer {
          public:
            PyObject_HEAD
            QueryBitSetProducer object;
            static PyObject *wrap_Object(const QueryBitSetProducer&);
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
