#ifndef org_apache_lucene_search_suggest_InputIterator$InputIteratorWrapper_H
#define org_apache_lucene_search_suggest_InputIterator$InputIteratorWrapper_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefIterator;
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

          class InputIterator$InputIteratorWrapper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d9019675c3739ff4,
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

            explicit InputIterator$InputIteratorWrapper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InputIterator$InputIteratorWrapper(const InputIterator$InputIteratorWrapper& obj) : ::java::lang::Object(obj) {}

            InputIterator$InputIteratorWrapper(const ::org::apache::lucene::util::BytesRefIterator &);

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
          extern PyType_Def PY_TYPE_DEF(InputIterator$InputIteratorWrapper);
          extern PyTypeObject *PY_TYPE(InputIterator$InputIteratorWrapper);

          class t_InputIterator$InputIteratorWrapper {
          public:
            PyObject_HEAD
            InputIterator$InputIteratorWrapper object;
            static PyObject *wrap_Object(const InputIterator$InputIteratorWrapper&);
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
