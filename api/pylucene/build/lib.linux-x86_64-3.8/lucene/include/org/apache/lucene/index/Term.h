#ifndef org_apache_lucene_index_Term_H
#define org_apache_lucene_index_Term_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class Accountable;
        class BytesRefBuilder;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Term : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_init$_15b72f6a44ff93f2,
            mid_init$_63a59e248b245c2c,
            mid_init$_830844d7efc99ffe,
            mid_bytes_7af2ea2e37ce82b8,
            mid_compareTo_d7008d5a6820eefc,
            mid_equals_8b72f2dcdde6fd1d,
            mid_field_db9b55ba01e03e4b,
            mid_hashCode_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_text_db9b55ba01e03e4b,
            mid_toString_db9b55ba01e03e4b,
            mid_toString_2b6942d1baf39302,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Term(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Term(const Term& obj) : ::java::lang::Object(obj) {}

          Term(const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          Term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRefBuilder &);

          ::org::apache::lucene::util::BytesRef bytes() const;
          jint compareTo(const Term &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String field() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::java::lang::String text() const;
          ::java::lang::String toString() const;
          static ::java::lang::String toString(const ::org::apache::lucene::util::BytesRef &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(Term);
        extern PyTypeObject *PY_TYPE(Term);

        class t_Term {
        public:
          PyObject_HEAD
          Term object;
          static PyObject *wrap_Object(const Term&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
