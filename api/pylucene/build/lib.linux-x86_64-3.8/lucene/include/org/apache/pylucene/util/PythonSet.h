#ifndef org_apache_pylucene_util_PythonSet_H
#define org_apache_pylucene_util_PythonSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
    class Set;
  }
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_8b72f2dcdde6fd1d,
            mid_addAll_15d9cc2398c22637,
            mid_clear_f2cc1bce94666404,
            mid_contains_8b72f2dcdde6fd1d,
            mid_containsAll_15d9cc2398c22637,
            mid_equals_8b72f2dcdde6fd1d,
            mid_finalize_f2cc1bce94666404,
            mid_isEmpty_8454bd5aa23fd11e,
            mid_iterator_233a192dadb0917d,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_remove_8b72f2dcdde6fd1d,
            mid_removeAll_15d9cc2398c22637,
            mid_retainAll_15d9cc2398c22637,
            mid_size_9972fcc56b44e79d,
            mid_toArray_6becf78ffd87a9bc,
            mid_toArray_609b05756010dc5d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSet(const PythonSet& obj) : ::java::lang::Object(obj) {}

          PythonSet();

          jboolean add(const ::java::lang::Object &) const;
          jboolean addAll(const ::java::util::Collection &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean containsAll(const ::java::util::Collection &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finalize() const;
          jboolean isEmpty() const;
          ::java::util::Iterator iterator() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jboolean remove(const ::java::lang::Object &) const;
          jboolean removeAll(const ::java::util::Collection &) const;
          jboolean retainAll(const ::java::util::Collection &) const;
          jint size() const;
          JArray< ::java::lang::Object > toArray() const;
          JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PythonSet);
        extern PyTypeObject *PY_TYPE(PythonSet);

        class t_PythonSet {
        public:
          PyObject_HEAD
          PythonSet object;
          static PyObject *wrap_Object(const PythonSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
