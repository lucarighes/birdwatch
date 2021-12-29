#ifndef org_apache_lucene_search_suggest_SortedInputIterator_H
#define org_apache_lucene_search_suggest_SortedInputIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class Set;
  }
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
      namespace store {
        class Directory;
      }
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

          class SortedInputIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c2d816a57670c277,
              mid_init$_e69adb3292da91fe,
              mid_contexts_7dcf4034c6d1a92a,
              mid_hasContexts_8454bd5aa23fd11e,
              mid_hasPayloads_8454bd5aa23fd11e,
              mid_next_7af2ea2e37ce82b8,
              mid_payload_7af2ea2e37ce82b8,
              mid_weight_2e5ae9edcb9b072f,
              mid_decodeContexts_9e9af729eef54113,
              mid_decodePayload_b029a890a387cda7,
              mid_decode_62b7f90a0981ef3d,
              mid_encode_e941369832f62243,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedInputIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedInputIterator(const SortedInputIterator& obj) : ::java::lang::Object(obj) {}

            SortedInputIterator(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::InputIterator &);
            SortedInputIterator(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::InputIterator &, const ::java::util::Comparator &);

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
          extern PyType_Def PY_TYPE_DEF(SortedInputIterator);
          extern PyTypeObject *PY_TYPE(SortedInputIterator);

          class t_SortedInputIterator {
          public:
            PyObject_HEAD
            SortedInputIterator object;
            static PyObject *wrap_Object(const SortedInputIterator&);
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
