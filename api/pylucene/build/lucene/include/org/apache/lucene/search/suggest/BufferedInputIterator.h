#ifndef org_apache_lucene_search_suggest_BufferedInputIterator_H
#define org_apache_lucene_search_suggest_BufferedInputIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
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

          class BufferedInputIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bf225d6cde09eeb7,
              mid_contexts_7dcf4034c6d1a92a,
              mid_hasContexts_8454bd5aa23fd11e,
              mid_hasPayloads_8454bd5aa23fd11e,
              mid_next_7af2ea2e37ce82b8,
              mid_payload_7af2ea2e37ce82b8,
              mid_weight_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BufferedInputIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BufferedInputIterator(const BufferedInputIterator& obj) : ::java::lang::Object(obj) {}

            BufferedInputIterator(const ::org::apache::lucene::search::suggest::InputIterator &);

            ::java::util::Set contexts() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::util::BytesRef payload() const;
            jlong weight() const;
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
          extern PyType_Def PY_TYPE_DEF(BufferedInputIterator);
          extern PyTypeObject *PY_TYPE(BufferedInputIterator);

          class t_BufferedInputIterator {
          public:
            PyObject_HEAD
            BufferedInputIterator object;
            static PyObject *wrap_Object(const BufferedInputIterator&);
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
