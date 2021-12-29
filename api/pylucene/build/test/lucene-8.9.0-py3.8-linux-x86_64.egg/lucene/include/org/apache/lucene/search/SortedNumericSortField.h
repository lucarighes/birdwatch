#ifndef org_apache_lucene_search_SortedNumericSortField_H
#define org_apache_lucene_search_SortedNumericSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField$Type;
        class FieldComparator;
        class SortedNumericSelector$Type;
      }
      namespace index {
        class IndexSorter;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortedNumericSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_6811f13f8ecb0aa6,
            mid_init$_d088f299e352f332,
            mid_init$_83f927d94de8700f,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getComparator_d36dcbe0af6d9ef2,
            mid_getIndexSorter_ee706dd57fd4883b,
            mid_getNumericType_9e07327298655963,
            mid_getSelector_74ae33aab3d05270,
            mid_hashCode_9972fcc56b44e79d,
            mid_setMissingValue_d20f626183f72f7d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedNumericSortField(const SortedNumericSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jint) const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::org::apache::lucene::search::SortField$Type getNumericType() const;
          ::org::apache::lucene::search::SortedNumericSelector$Type getSelector() const;
          jint hashCode() const;
          void setMissingValue(const ::java::lang::Object &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SortedNumericSortField);
        extern PyTypeObject *PY_TYPE(SortedNumericSortField);

        class t_SortedNumericSortField {
        public:
          PyObject_HEAD
          SortedNumericSortField object;
          static PyObject *wrap_Object(const SortedNumericSortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
