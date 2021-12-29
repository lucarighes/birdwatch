#ifndef org_apache_lucene_index_PrefixCodedTerms_H
#define org_apache_lucene_index_PrefixCodedTerms_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PrefixCodedTerms$TermIterator;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PrefixCodedTerms : public ::java::lang::Object {
         public:
          enum {
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_iterator_529a050a847d8669,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_setDelGen_9c778c9bce6694df,
            mid_size_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixCodedTerms(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixCodedTerms(const PrefixCodedTerms& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::index::PrefixCodedTerms$TermIterator iterator() const;
          jlong ramBytesUsed() const;
          void setDelGen(jlong) const;
          jlong size() const;
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
        extern PyType_Def PY_TYPE_DEF(PrefixCodedTerms);
        extern PyTypeObject *PY_TYPE(PrefixCodedTerms);

        class t_PrefixCodedTerms {
        public:
          PyObject_HEAD
          PrefixCodedTerms object;
          static PyObject *wrap_Object(const PrefixCodedTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
