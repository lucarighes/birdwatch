#ifndef org_apache_lucene_util_BytesRefArray_H
#define org_apache_lucene_util_BytesRefArray_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    namespace function {
      class IntBinaryOperator;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefArray$IndexedBytesRefIterator;
        class BytesRefBuilder;
        class BytesRefArray$SortState;
        class BytesRefIterator;
        class BytesRef;
        class Counter;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefArray : public ::java::lang::Object {
         public:
          enum {
            mid_init$_302fe14a8fa069e1,
            mid_append_1c2e5fa34f4312de,
            mid_clear_f2cc1bce94666404,
            mid_get_74aaffb57279d3cf,
            mid_iterator_5416289139cf0b84,
            mid_iterator_6f87a07b02eae45b,
            mid_iterator_e90bfd70539a9be0,
            mid_size_9972fcc56b44e79d,
            mid_sort_101af92a509ec334,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefArray(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefArray(const BytesRefArray& obj) : ::java::lang::Object(obj) {}

          BytesRefArray(const ::org::apache::lucene::util::Counter &);

          jint append(const ::org::apache::lucene::util::BytesRef &) const;
          void clear() const;
          ::org::apache::lucene::util::BytesRef get(const ::org::apache::lucene::util::BytesRefBuilder &, jint) const;
          ::org::apache::lucene::util::BytesRefIterator iterator() const;
          ::org::apache::lucene::util::BytesRefArray$IndexedBytesRefIterator iterator(const ::org::apache::lucene::util::BytesRefArray$SortState &) const;
          ::org::apache::lucene::util::BytesRefIterator iterator(const ::java::util::Comparator &) const;
          jint size() const;
          ::org::apache::lucene::util::BytesRefArray$SortState sort(const ::java::util::Comparator &, const ::java::util::function::IntBinaryOperator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(BytesRefArray);
        extern PyTypeObject *PY_TYPE(BytesRefArray);

        class t_BytesRefArray {
        public:
          PyObject_HEAD
          BytesRefArray object;
          static PyObject *wrap_Object(const BytesRefArray&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
