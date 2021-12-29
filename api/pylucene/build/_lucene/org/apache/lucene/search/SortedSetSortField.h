#ifndef org_apache_lucene_search_SortedSetSortField_H
#define org_apache_lucene_search_SortedSetSortField_H

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
        class FieldComparator;
        class SortedSetSelector$Type;
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

        class SortedSetSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_b1180807b87ba737,
            mid_init$_5f20c0c9a291b599,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getComparator_d36dcbe0af6d9ef2,
            mid_getIndexSorter_ee706dd57fd4883b,
            mid_getSelector_75cc79123881d349,
            mid_hashCode_9972fcc56b44e79d,
            mid_setMissingValue_d20f626183f72f7d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetSortField(const SortedSetSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

          SortedSetSortField(const ::java::lang::String &, jboolean);
          SortedSetSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedSetSelector$Type &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jint) const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::org::apache::lucene::search::SortedSetSelector$Type getSelector() const;
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
        extern PyType_Def PY_TYPE_DEF(SortedSetSortField);
        extern PyTypeObject *PY_TYPE(SortedSetSortField);

        class t_SortedSetSortField {
        public:
          PyObject_HEAD
          SortedSetSortField object;
          static PyObject *wrap_Object(const SortedSetSortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
