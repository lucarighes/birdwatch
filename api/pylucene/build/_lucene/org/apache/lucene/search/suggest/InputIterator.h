#ifndef org_apache_lucene_search_suggest_InputIterator_H
#define org_apache_lucene_search_suggest_InputIterator_H

#include "org/apache/lucene/util/BytesRefIterator.h"

namespace java {
  namespace lang {
    class Class;
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

          class InputIterator : public ::org::apache::lucene::util::BytesRefIterator {
           public:
            enum {
              mid_contexts_7dcf4034c6d1a92a,
              mid_hasContexts_8454bd5aa23fd11e,
              mid_hasPayloads_8454bd5aa23fd11e,
              mid_payload_7af2ea2e37ce82b8,
              mid_weight_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InputIterator(jobject obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InputIterator(const InputIterator& obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {}

            static InputIterator *EMPTY;

            ::java::util::Set contexts() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
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
          extern PyType_Def PY_TYPE_DEF(InputIterator);
          extern PyTypeObject *PY_TYPE(InputIterator);

          class t_InputIterator {
          public:
            PyObject_HEAD
            InputIterator object;
            static PyObject *wrap_Object(const InputIterator&);
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
