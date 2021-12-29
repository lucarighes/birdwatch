#ifndef org_antlr_v4_runtime_misc_Array2DHashSet_H
#define org_antlr_v4_runtime_misc_Array2DHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {

          class Array2DHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_add_8b72f2dcdde6fd1d,
              mid_addAll_15d9cc2398c22637,
              mid_clear_f2cc1bce94666404,
              mid_contains_8b72f2dcdde6fd1d,
              mid_containsAll_15d9cc2398c22637,
              mid_containsFast_8b72f2dcdde6fd1d,
              mid_equals_8b72f2dcdde6fd1d,
              mid_get_e5ae0f8c04795fa9,
              mid_getOrAdd_e5ae0f8c04795fa9,
              mid_hashCode_9972fcc56b44e79d,
              mid_isEmpty_8454bd5aa23fd11e,
              mid_iterator_233a192dadb0917d,
              mid_remove_8b72f2dcdde6fd1d,
              mid_removeAll_15d9cc2398c22637,
              mid_removeFast_8b72f2dcdde6fd1d,
              mid_retainAll_15d9cc2398c22637,
              mid_size_9972fcc56b44e79d,
              mid_toArray_6becf78ffd87a9bc,
              mid_toArray_609b05756010dc5d,
              mid_toString_db9b55ba01e03e4b,
              mid_toTableString_db9b55ba01e03e4b,
              mid_asElementType_e5ae0f8c04795fa9,
              mid_createBucket_a2672f0f17055095,
              mid_createBuckets_c9c58dbf27467cd5,
              mid_getOrAddImpl_e5ae0f8c04795fa9,
              mid_getBucket_5a4805a36cf611e7,
              mid_expand_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Array2DHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Array2DHashSet(const Array2DHashSet& obj) : ::java::lang::Object(obj) {}

            static jint INITAL_BUCKET_CAPACITY;
            static jint INITAL_CAPACITY;
            static jdouble LOAD_FACTOR;

            Array2DHashSet();

            jboolean add(const ::java::lang::Object &) const;
            jboolean addAll(const ::java::util::Collection &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean containsAll(const ::java::util::Collection &) const;
            jboolean containsFast(const ::java::lang::Object &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::Object get(const ::java::lang::Object &) const;
            ::java::lang::Object getOrAdd(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jboolean remove(const ::java::lang::Object &) const;
            jboolean removeAll(const ::java::util::Collection &) const;
            jboolean removeFast(const ::java::lang::Object &) const;
            jboolean retainAll(const ::java::util::Collection &) const;
            jint size() const;
            JArray< ::java::lang::Object > toArray() const;
            JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
            ::java::lang::String toString() const;
            ::java::lang::String toTableString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {
          extern PyType_Def PY_TYPE_DEF(Array2DHashSet);
          extern PyTypeObject *PY_TYPE(Array2DHashSet);

          class t_Array2DHashSet {
          public:
            PyObject_HEAD
            Array2DHashSet object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Array2DHashSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Array2DHashSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Array2DHashSet&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
