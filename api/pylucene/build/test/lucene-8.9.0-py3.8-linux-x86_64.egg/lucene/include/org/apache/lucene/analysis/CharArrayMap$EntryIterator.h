#ifndef org_apache_lucene_analysis_CharArrayMap$EntryIterator_H
#define org_apache_lucene_analysis_CharArrayMap$EntryIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArrayMap$EntryIterator : public ::java::lang::Object {
         public:
          enum {
            mid_currentValue_d6bcd06f3102c4d9,
            mid_hasNext_8454bd5aa23fd11e,
            mid_next_e3cdd83e5947ee54,
            mid_nextKey_e11cf13c9a887534,
            mid_nextKeyString_db9b55ba01e03e4b,
            mid_remove_f2cc1bce94666404,
            mid_setValue_e5ae0f8c04795fa9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArrayMap$EntryIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArrayMap$EntryIterator(const CharArrayMap$EntryIterator& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object currentValue() const;
          jboolean hasNext() const;
          ::java::util::Map$Entry next() const;
          JArray< jchar > nextKey() const;
          ::java::lang::String nextKeyString() const;
          void remove() const;
          ::java::lang::Object setValue(const ::java::lang::Object &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharArrayMap$EntryIterator);
        extern PyTypeObject *PY_TYPE(CharArrayMap$EntryIterator);

        class t_CharArrayMap$EntryIterator {
        public:
          PyObject_HEAD
          CharArrayMap$EntryIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArrayMap$EntryIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArrayMap$EntryIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArrayMap$EntryIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
