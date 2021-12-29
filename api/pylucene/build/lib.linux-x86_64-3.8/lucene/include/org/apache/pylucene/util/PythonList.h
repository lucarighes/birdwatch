#ifndef org_apache_pylucene_util_PythonList_H
#define org_apache_pylucene_util_PythonList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
    class List;
    class ListIterator;
  }
  namespace lang {
    class Class;
    class IndexOutOfBoundsException;
    class IllegalArgumentException;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonList : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_8b72f2dcdde6fd1d,
            mid_add_cf6732d7dfcfc293,
            mid_addAll_15d9cc2398c22637,
            mid_addAll_8980636bfaaa897b,
            mid_clear_f2cc1bce94666404,
            mid_contains_8b72f2dcdde6fd1d,
            mid_containsAll_15d9cc2398c22637,
            mid_equals_8b72f2dcdde6fd1d,
            mid_finalize_f2cc1bce94666404,
            mid_get_b15c79acb15c2870,
            mid_indexOf_5a4805a36cf611e7,
            mid_isEmpty_8454bd5aa23fd11e,
            mid_iterator_233a192dadb0917d,
            mid_lastIndexOf_5a4805a36cf611e7,
            mid_listIterator_78bda7a3d01214c3,
            mid_listIterator_8204cc66da390272,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_remove_b15c79acb15c2870,
            mid_remove_8b72f2dcdde6fd1d,
            mid_removeAll_15d9cc2398c22637,
            mid_retainAll_15d9cc2398c22637,
            mid_set_55e2638f354bbf61,
            mid_size_9972fcc56b44e79d,
            mid_subList_e1795bf76fe1346f,
            mid_toArray_6becf78ffd87a9bc,
            mid_toArray_609b05756010dc5d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonList(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonList(const PythonList& obj) : ::java::lang::Object(obj) {}

          PythonList();

          jboolean add(const ::java::lang::Object &) const;
          void add(jint, const ::java::lang::Object &) const;
          jboolean addAll(const ::java::util::Collection &) const;
          jboolean addAll(jint, const ::java::util::Collection &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean containsAll(const ::java::util::Collection &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finalize() const;
          ::java::lang::Object get(jint) const;
          jint indexOf(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator iterator() const;
          jint lastIndexOf(const ::java::lang::Object &) const;
          ::java::util::ListIterator listIterator() const;
          ::java::util::ListIterator listIterator(jint) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::java::lang::Object remove(jint) const;
          jboolean remove(const ::java::lang::Object &) const;
          jboolean removeAll(const ::java::util::Collection &) const;
          jboolean retainAll(const ::java::util::Collection &) const;
          ::java::lang::Object set(jint, const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::List subList(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonList);
        extern PyTypeObject *PY_TYPE(PythonList);

        class t_PythonList {
        public:
          PyObject_HEAD
          PythonList object;
          static PyObject *wrap_Object(const PythonList&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
